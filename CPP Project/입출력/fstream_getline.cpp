//// getline���� �о���̱�
//#include <fstream>
//#include <iostream>
//#include <string>
//
//int main() {
//  //���� �б� �غ�
//  std::ifstream in("test.txt");
//  std::string s;
//  char buf[100];
//
//  if (!in.is_open()) {
//    std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//    return 0;
//  }
//
//  // ���� �б⸦ �� �� while���� �������� in.eof() �� ����ؼ��� �ȵ�!
//  // eof�� ������ ���� ������ ���Ŀ� true�� �����ϱ� ������
//  // ���� �� �ٷ� �������� �Է��� �޴´ٸ� ������ �߻��� �� ����!
//  // ���� ���� �� �������� true�� ĳ���� �Ǵ� ifstream ��ü�� �������� ����ϴ°� ���� ����!
//
//  while (in) {
//    getline(in, s); // std::string�� ���ǵǾ� �ִ� �Լ��� ������ ũ�⸦ �������� �ʾƵ� ��.
//    in.getline(buf, 100); // ifstream�� ���ǵǾ� �ִ� �Լ��� ������ ũ�⸦ �����ؾ���.
//
//    //in.getline(buf, 100, '.');  <-- �̷��� ���� .�� ���ö����� �Է��� ����.
//    std::cout << s << std::endl;
//  }
//
//  return 0;
//}