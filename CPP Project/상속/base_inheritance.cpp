//#include <iostream>
//#include <string>
//
//class Base {
//  //protected:
//    
//  public:
//    //std::string parent_string;
//
//    Base() { std::cout << "기반 클래스" << std::endl; }
//
//    virtual void what() { std::cout << "기반 클래스의 what()" << std::endl; }
//};
//
//class Dervied : public Base {
//  //std::string child_string;
//
//  public:
//    Dervied() : Base() {
//      std::cout << "파생 클래스" << std::endl;
//    }
//
//    void what() override { std::cout << "파생 클래스의 what()" << std::endl; }
//};
//
//int main() {
//  Base p;
//  Dervied c;
//
//  Base* p_c = &c;
//  Base* p_p = &p;
//
//  std::cout << "=== 실제 객체는 Base ===" << std::endl;
//  p_p->what();
//
//  std::cout << "=== 실제 객체는 Dervied ===" << std::endl;
//  p_c->what();
//  
//
//  return 0;
//}