//#include <iostream>
//#include <set>
//#include <string>
//
//template <typename T>
//void print_set(std::set<T>& s) {
//  // ���� ��� ���ҵ��� ����ϱ�
//  std::cout << "[ ";
//  for (const auto& elem : s) {
//    std::cout << elem << " ";
//  }
//  std::cout << " ] " << std::endl;
//}
//
//int main() {
//  std::set<int> s;
//  s.insert(10);
//  s.insert(50);
//  s.insert(20);
//  s.insert(40);
//  s.insert(30);
//
//  std::cout << "������� ���ĵǼ� ���´�" << std::endl;
//  print_set(s);
//
//  std::cout << "20 �� s �� �����ΰ���? ::";
//  auto itr = s.find(20);
//  if (itr != s.end()) {
//    std::cout << "Yes" << std::endl;
//  }
//  else {
//    std::cout << "No" << std::endl;
//  }
//
//  std::cout << "25�� s �� �����ΰ���? ::";
//  itr = s.find(25);
//  if (itr != s.end()) {
//    std::cout << "Yes" << std::endl;
//  }
//  else {
//    std::cout << "No" << std::endl;
//  }
//
//  return 0;
//}