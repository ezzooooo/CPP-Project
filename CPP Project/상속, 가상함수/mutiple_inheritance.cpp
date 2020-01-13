//#include <iostream>
//
//class A {
//  public:
//    int a;
//
//    A() { std::cout << "A 생성자 호출" << std::endl; }
//};
//
//class B {
//  public:
//    int b;
//
//    B() { std::cout << "B 생성자 호출" << std::endl; }
//};
//
//class C : public A, public B {
//  public:
//    int c;
//    C() : B(), A() { std::cout << "C 생성자 호출" << std::endl; }
//};
//
//int main() {
//  C c;
//  return 0;
//}