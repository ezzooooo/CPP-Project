//#include <iostream>
//#include <string>
//
//class Base {
//  //protected:
//    
//  public:
//    //std::string parent_string;
//
//    Base() { std::cout << "��� Ŭ����" << std::endl; }
//
//    virtual void what() { std::cout << "��� Ŭ������ what()" << std::endl; }
//};
//
//class Dervied : public Base {
//  //std::string child_string;
//
//  public:
//    Dervied() : Base() {
//      std::cout << "�Ļ� Ŭ����" << std::endl;
//    }
//
//    void what() override { std::cout << "�Ļ� Ŭ������ what()" << std::endl; }
//};
//
//int main() {
//  Base p;
//  Dervied c;
//
//  Base* p_c = &c;
//  Base* p_p = &p;
//
//  std::cout << "=== ���� ��ü�� Base ===" << std::endl;
//  p_p->what();
//
//  std::cout << "=== ���� ��ü�� Dervied ===" << std::endl;
//  p_c->what();
//  
//
//  return 0;
//}