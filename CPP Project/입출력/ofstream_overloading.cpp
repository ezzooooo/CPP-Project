//#include <fstream>
//#include <iostream>
//#include <string>
//
//class Human {
//  std::string name;
//  int age;
//
//  public:
//    Human(const std::string& name, int age) : name(name), age(age) {}
//    std::string get_info() {
//      return "Name :: " + name + " / Age :: " + std::to_string(age);
//    }
//
//    friend std::ofstream& operator<<(std::ofstream& o, Human& h);
//};
//
//std::ofstream& operator<<(std::ofstream& o, Human& h) {
//  o << h.get_info();
//  return o;
//}
//
//int main() {
//  // ���� ���� �غ�
//  std::ofstream out("test.txt");
//
//  Human h("�����", 60);
//  out << h << std::endl;
//
//  return 0;
//}