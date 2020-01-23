//#include <iostream>
//#include <set>
//#include <string>
//
//template <typename T>
//void print_set(std::set<T>& s) {
//  // 셋의 모든 원소들을 출력하기
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
//  std::cout << "순서대로 정렬되서 나온다" << std::endl;
//  print_set(s);
//
//  std::cout << "20 이 s 의 원소인가요? ::";
//  auto itr = s.find(20);
//  if (itr != s.end()) {
//    std::cout << "Yes" << std::endl;
//  }
//  else {
//    std::cout << "No" << std::endl;
//  }
//
//  std::cout << "25가 s 의 원소인가요? ::";
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