//// ate�� app
//#include <fstream>
//#include <iostream>
//#include <string>
//
//int main() {
//  // �� ���Ͽ��� ��� abc ��� ���ֽ��ϴ�.
//  std::ofstream out("test.txt", std::ios::app);
//  std::ofstream out2("test2.txt", std::ios::ate); // ate�� ���� ������ ������ �������� ����.
//
//  out.seekp(3, std::ios::beg);
//  out2.seekp(3, std::ios::beg);
//
//  out << "�߰�";
//  out2 << "�߰�";
//
//  return 0;
//}