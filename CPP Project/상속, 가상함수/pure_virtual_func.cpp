//#include <iostream>
//
//class Animal {
//  public:
//    Animal() {}
//    virtual ~Animal() {}
//    virtual void speak() = 0; // 가상함수에 = 0; 을 붙여서 반드시 오버라이딩 되도록 만든 순수 가상함수.
//    // 순수가상함수를 가지고 있는 클래스의 객체를 생성하는것은 불가능함.
//    // 이런 클래스를 추상 클래스(abstract class)라고 부름.
//};
//
//class Dog : public Animal {
//  public:
//    Dog() : Animal() {}
//    void speak() override { std::cout << "왈왈" << std::endl; }
//};
//
//class Cat : public Animal {
//  public:
//    Cat() : Animal() {}
//    void speak() override { std::cout << "야옹야옹" << std::endl; }
//};
//
//int main() {
//  Animal* dog = new Dog();
//  Animal* cat = new Cat();
//
//  dog->speak();
//  cat->speak();
//
//  return 0;
//}