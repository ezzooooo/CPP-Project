////2020.01.08
//
//#include <iostream>
//
//class A {
//  mutable int data_; // mutable을 쓰면 const함수에서도 멤버변수를 변경할 수 있음!
//
//  public:
//    A(int data) : data_(data) {}
//    void DoSomething(int x) const {
//      data_ = x;
//    }
//
//    void PrintData() const { std::cout << "data: " << data_ << std::endl; }
//};
//
//int main() {
//  A a(10);
//  a.DoSomething(3);
//  a.PrintData();
//
//  return 0;
//}