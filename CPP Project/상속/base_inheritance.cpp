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
//    Base() : parent_string("���") { std::cout << "��� Ŭ����" << std::endl; }
//
//    void what() { std::cout << parent_string << std::endl; }
//};
//
//class Dervied : private Base {
//  std::string child_string;
//
//  public:
//    Dervied() : Base(), child_string("�Ļ�") {
//      std::cout << "�Ļ� Ŭ����" << std::endl;
//
//      // Base���� what()�� ���� �޾����Ƿ�
//      // Dervied ���� �翬�� ȣ�� �����ϴ�
//      parent_string = "�ٲٱ�";
//    }
//
//    void what() { std::cout << child_string << std::endl; }
//};
//
//int main() {
//  Base p;
//  // Base ������ parent_string �� public �̹Ƿ�
//  // �ܺο��� �翬�� ���� �����ϴ�.
//  std::cout << p.parent_string << std::endl;
//
//  Dervied c;
//  // �ݸ鿡 Dervied ������ parent_string��
//  // (private ����� �޾ұ� ������) private �� �Ǿ
//  // �ܺο��� ������ �Ұ����ϴ�.
//  std::cout << c.parent_string << std::endl;
//
//  return 0;
//}