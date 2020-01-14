#include <iostream>
#include <string>

namespace MyExcel {
  class Table;
  class Cell {
    protected:
      Table* t;
      std::string s;
      int x, y;

    public:
      Cell(std::string s, int x, int y, Table* t) : x(x), y(y), s(s), t(t) {}
      
      virtual std::string get_string() {
        return s;
      }
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
        std::string return_table;

        for (int i = 0; i < x; i++) {
          for (int j = 0; j < y; j++) {
            if (data_table[i][j]) {
              return_table += data_table[i][j]->get_string();
            }
            return_table += " | ";
          }
          return_table += "\n";
        }

        return return_table;
      }
  };
}

int main() {
  MyExcel::TxtTable table(5, 5);
  //std::ofstream out("test.txt");

  table.reg_cell(new MyExcel::Cell("Hello~", 0, 0, &table), 0, 0);
  table.reg_cell(new MyExcel::Cell("C++", 0, 1, &table), 0, 1);

  table.reg_cell(new MyExcel::Cell("Programming", 1, 1, &table), 1, 1);
  std::cout << std::endl << table;
  //out << table;
}