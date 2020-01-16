#include <fstream>
#include <iostream>
#include <string>

namespace MyExcel {
  class Table;
  class Cell {
    protected:
      Table* t;
      int x, y;

    public:
      virtual std::string stringify() = 0;
      virtual int to_numeric() = 0;

      Cell(int x, int y, Table* t) : x(x), y(y), t(t) {} 
  };
  class Table {
    protected:
      Cell*** data_table;
      int x, y;
    
    public:
      Table(int x, int y) : x(x), y(y) {
        data_table = new Cell**[x];
        for (int i = 0; i < x; i++) {
          data_table[i] = new Cell*[y];
          for (int j = 0; j < y; j++) {
            data_table[i][j] = NULL;
          }
        }
      }

      void reg_cell(Cell* c, int row, int col) {
        if (data_table[row][col]) {
          delete data_table[row][col];
        }
        data_table[row][col] = c;
      }

      virtual std::string print_table() = 0;

      ~Table() {
        for (int i = 0; i < x; i++) {
          for (int j = 0; j < y; j++) {
            if(data_table[i][j]) delete data_table[i][j];
          }
        }
        for (int i = 0; i < x; i++) {
          delete[] data_table[i];
        }
        delete[] data_table;
      }
  };

  std::ostream& operator<<(std::ostream& o, Table& t) {
    o << t.print_table();
    return o;
  }

  class TxtTable : public Table {
    public:
      TxtTable(int x, int y) : Table(x, y) {}

      std::string print_table() {
        int *max_length = new int[y];
        
        std::string return_table;

        for (int i = 0; i < y; i++) {
          max_length[i] = 0;
        }

        for (int i = 0; i < x; i++) {
          for (int j = 0; j < y; j++) {
            if (data_table[i][j]) {
              if (max_length[j] < data_table[i][j]->get_string().length())
                max_length[j] = data_table[i][j]->get_string().length();
            }
          }
        }

        return_table += "  |";
        for (int i = 0; i < y; i++) {
          for (int k = 0; k < max_length[i]; k++) {
            return_table += " ";
          }
          return_table += i + 65;
          return_table += "| ";
        }
        return_table += "\n";

        for (int i = 0; i < y; i++) {
          for (int k = 0; k < max_length[i]; k++) {
            return_table += "-";
          }
          return_table += "---";
        }
        return_table += "--\n";

        for (int i = 0; i < x; i++) {
          for (int j = 0; j < y; j++) {
            if (j == 0) return_table += std::to_string(i+1) + " |";
            if (data_table[i][j] && max_length[j] > data_table[i][j]->get_string().length()) {
              for (int k = data_table[i][j]->get_string().length(); k < max_length[j]; k++) {
                return_table += " ";
              }
            }
            else {
              if (!data_table[i][j]) {
                for (int k = 0; k < max_length[j]; k++) {
                  return_table += " ";
                }
              }
            }
            if (data_table[i][j]) {
              return_table += data_table[i][j]->get_string();
            }
            return_table += " | ";
          }

          return_table += "\n";

          for (int i = 0; i < y; i++) {
            for (int k = 0; k < max_length[i]; k++) {
              return_table += "-";
            }
            return_table += "---";
          }
          return_table += "--\n";
        }

        return return_table;
      }
  };

  class HtmlTable : public Table {
    public:
      HtmlTable(int x, int y) : Table(x, y) {}

      std::string print_table() {
        std::string return_table;

        return_table = "<table border='1' cellpadding='10'>";
        for (int i = 0; i < x; i++) {
          return_table += "<tr>";
          for (int j = 0; j < y; j++) {
            return_table += "<td>";
            if(data_table[i][j]) return_table += data_table[i][j]->get_string();
            return_table += "</td>";
          }
          return_table += "</tr>";
        }
        return_table += "</table>";

        return return_table;
      }
  };
}



int main() {
  MyExcel::TxtTable table(5, 5);
  std::ofstream out("test3.txt");

  table.reg_cell(new MyExcel::Cell("Hello~", 0, 0, &table), 0, 0);
  table.reg_cell(new MyExcel::Cell("C++", 0, 1, &table), 0, 1);

  table.reg_cell(new MyExcel::Cell("Programming", 1, 1, &table), 1, 1);
  table.reg_cell(new MyExcel::Cell("zz", 3, 2, &table), 3, 2);
  std::cout << std::endl << table;
  out << table;

  MyExcel::HtmlTable table2(5, 5);
  std::ofstream out2("test4.html");

  table2.reg_cell(new MyExcel::Cell("Hello~", 0, 0, &table2), 0, 0);
  table2.reg_cell(new MyExcel::Cell("C++", 0, 1, &table2), 0, 1);

  table2.reg_cell(new MyExcel::Cell("Programming", 1, 1, &table2), 1, 1);
  table2.reg_cell(new MyExcel::Cell("zz", 3, 2, &table2), 3, 2);
  std::cout << std::endl << table2;
  out2 << table2;
}