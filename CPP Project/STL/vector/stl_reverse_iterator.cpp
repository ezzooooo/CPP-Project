//#include <iostream>
//#include <vector>
//
//template <typename T>
//void print_vector(std::vector<T>& vec) {
//  // 전체 벡터를 출력하기
//  for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end();
//    ++itr) {
//    std::cout << *itr << std::endl;
//  }
//}
//int main() {
//  std::vector<int> vec;
//  vec.push_back(10);
//  vec.push_back(20);
//  vec.push_back(30);
//  vec.push_back(40);
//
//  std::cout << "초기 vec 상태" << std::endl;
//  print_vector(vec);
//
//  std::cout << "역으로 vec 출력하기!" << std::endl;
//  // itr은 vec[2]를 가리킨다.
//  std::vector<int>::reverse_iterator r_iter = vec.rbegin();
//  for (; r_iter != vec.rend(); r_iter++) {
//    std::cout << *r_iter << std::endl;
//  }
//
//}