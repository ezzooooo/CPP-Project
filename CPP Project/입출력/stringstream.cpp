#include <iostream>
#include <sstream>
#include <string>

double to_number(std::string s) {
  std::istringstream ss(s);
  double x;

  ss >> x;
  return x;
}

std::string to_str(int x) {
  std::ostringstream ss;
  ss << x;

  return ss.str();
}

int main() {

  std::istringstream ss("123");
  int x;
  ss >> x;

  std::cout << "�Է� ���� ������ :: " << x << std::endl;


  std::cout << "��ȯ:: 1 + 2 = " << to_number("1") + to_number("2") << std::endl;

  std::cout << "���ڿ��� ��ȯ :: 1 + 2 = " << to_str(1 + 2) << std::endl;

  return 0;
}