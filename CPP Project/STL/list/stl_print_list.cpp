//#include <iostream>
//#include <list>
//
//template <typename T>
//void print_list(std::list<T>& lst) {
//  std::cout << "[ ";
//  // 전체 리스트를 출력하기 (list도 범위기반 for문 사용 가능)
//  for (const auto& elem : lst) {
//    std::cout << elem << " ";
//  }
//  std::cout << "]" << std::endl;
//}
//
//int main() {
//  std::list<int> lst;
//
//  lst.push_back(10);
//  lst.push_back(20);
//  lst.push_back(30);
//  lst.push_back(40);
//
//  std::cout << "처음 리스트의 상태 " << std::endl;
//  print_list(lst);
//
//  for (std::list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
//    //만일 현재 원소가 20이라면
//    // 그 앞에 50을 집어넣는다.
//    if (*itr == 20) {
//      lst.insert(itr, 50);
//    }
//  }
//
//  std::cout << "값이 20인 원소 앞에 50을 추가" << std::endl;
//  print_list(lst);
//
//  for (std::list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
//    if (*itr == 30) {
//      lst.erase(itr);
//      break;
//    }
//  }
//
//  std::cout << "값이 30인 원소를 삭제한다" << std::endl;
//  print_list(lst);
//}