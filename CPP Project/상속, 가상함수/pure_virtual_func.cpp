//#include <iostream>
//
//class Animal {
//  public:
//    Animal() {}
//    virtual ~Animal() {}
//    virtual void speak() = 0; // �����Լ��� = 0; �� �ٿ��� �ݵ�� �������̵� �ǵ��� ���� ���� �����Լ�.
//    // ���������Լ��� ������ �ִ� Ŭ������ ��ü�� �����ϴ°��� �Ұ�����.
//    // �̷� Ŭ������ �߻� Ŭ����(abstract class)��� �θ�.
//};
//
//class Dog : public Animal {
//  public:
//    Dog() : Animal() {}
//    void speak() override { std::cout << "�п�" << std::endl; }
//};
//
//class Cat : public Animal {
//  public:
//    Cat() : Animal() {}
//    void speak() override { std::cout << "�߿˾߿�" << std::endl; }
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