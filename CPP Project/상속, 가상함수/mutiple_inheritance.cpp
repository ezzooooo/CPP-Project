//#include <iostream>
//
//class A {
//  public:
//    int a;
//
//    A() { std::cout << "A ������ ȣ��" << std::endl; }
//};
//
//class B {
//  public:
//    int b;
//
//    B() { std::cout << "B ������ ȣ��" << std::endl; }
//};
//
//class C : public A, public B {
//  public:
//    int c;
//    C() : B(), A() { std::cout << "C ������ ȣ��" << std::endl; }
//};
//
//int main() {
//  C c;
//  return 0;
//}