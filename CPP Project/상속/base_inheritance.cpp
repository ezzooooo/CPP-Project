//#include <iostream>
//#include <string>
//
//class Base {
//  //protected:
//    
//
//  public:
//    std::string parent_string;
//
//    Base() : parent_string("기반") { std::cout << "기반 클래스" << std::endl; }
//
//    void what() { std::cout << parent_string << std::endl; }
//};
//
//class Dervied : private Base {
//  std::string child_string;
//
//  public:
//    Dervied() : Base(), child_string("파생") {
//      std::cout << "파생 클래스" << std::endl;
//
//      // Base에서 what()을 물려 받았으므로
//      // Dervied 에서 당연히 호출 가능하다
//      parent_string = "바꾸기";
//    }
//
//    void what() { std::cout << child_string << std::endl; }
//};
//
//int main() {
//  Base p;
//  // Base 에서는 parent_string 이 public 이므로
//  // 외부에서 당연히 접근 가능하다.
//  std::cout << p.parent_string << std::endl;
//
//  Dervied c;
//  // 반면에 Dervied 에서는 parent_string이
//  // (private 상속을 받았기 때문에) private 이 되어서
//  // 외부에서 접근이 불가능하다.
//  std::cout << c.parent_string << std::endl;
//
//  return 0;
//}