//#include <iostream>
//#include <string>
//
//int main() {
//  std::string s;
//  std::cin >> s;
//
//  // ��ġ �����ڸ� ��ĭ �ű��, �� ���� ���ڸ� ���ĺ��� (�̶��� �������� ����)
//  char peek = std::cin.rdbuf()->snextc();
//  if (std::cin.fail()) std::cout << "Failed";
//  std::cout << "�ٽ� ������ : " << s << std::endl;
//  std::cout << "�� ��° �ܾ� �� �ձ��� : " << peek << std::endl;
//  std::cin >> s;
//  std::cout << "�ٽ� ������ : " << s << std::endl;
//}