//#include <iostream>
//
//class Parent {
//  public:
//    Parent() { std::cout << "Parent 생성자 호출" << std::endl; }
//    virtual ~Parent() { std::cout << "Parent 소멸자 호출" << std::endl; } // 상속될 여지가 있는 클래스는 소멸자를 virtual로 만들어주어야 문제가 없음.
//};
//class Child : public Parent {
//  public:
//    Child() : Parent() { std::cout << "Child 생성자 호출" << std::endl; }
//    ~Child() { std::cout << "Child 소멸자 호출" << std::endl; }
//};
//
//int main() {
//  std::cout << "--- 평범한 Child 만들었을 때 ---" << std::endl;
//  { Child c; }
//  std::cout << "--- Parent 포인터로 Child 가리켰을 때 ---" << std::endl;
//  {
//    Parent *p = new Child();
//    delete p;
//  }
//  return 0;
//}