////2020.01.08
//
//#include <iostream>
//
//class Matrix {
//  int x;
//  int y;
//  int* data;
//  int* first_pos;
//
//  public:
//    Matrix(int x, int y);
//  
//    int& operator[](const int idx);
//    const int& operator[](const int idx) const;
//
//    operator int() { return *data; }
//    operator int*() { return data; }
//    void print();
//};
//
//Matrix::Matrix(int x, int y) : x(x), y(y) {
//  data = new int[x*y];
//  for (int i = 0; i < y; i++) {
//    for (int j = 0; j < x; j++) {
//      data[(i*x) + j] = 1 + (i*x) + (j);
//    }
//  }
//};
//
//int& Matrix::operator[](const int idx) {
//  return data[idx];
//}
//const int& Matrix::operator[](const int idx) const {
//  return data[idx];
//}
//
//void Matrix::print() {
//  for (int i = 0; i < y; i++) {
//    for (int j = 0; j < x; j++) {
//      std::cout << data[(i*x) + j] << " ";
//    }
//    std::cout << std::endl;
//  }
//}
//
//int main() {
//  Matrix a(5, 3);
//
//  a.print();
//
//  int b[3][5] = { 2,3,4,5 };
//  std::cout << a[0][1] << std::endl;
//  std::cout << a[1] << std::endl;
//
//
//  return 0;
//}