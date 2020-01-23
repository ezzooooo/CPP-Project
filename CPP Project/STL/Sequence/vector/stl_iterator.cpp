//#include <iostream>
//#include <vector>
//
///*
//아래 함수는 이터레이터 방식의 출력함수!
//
//template <typename T>
//void print_vector(std::vector<T>& vec) {
//  //전체 벡터를 출력하기
//  for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
//    std::cout << *itr << std::endl;
//  }
//}
//*/
//
//template <typename T>
//void print_vector(std::vector<T>& vec) {
//  for (const auto& elem : vec) {
//    std::cout << elem << std::endl;
//  }
//}
//int main() {
//  std::vector<int> vec;
//  vec.push_back(10);
//  vec.push_back(20);
//  vec.push_back(30);
//  vec.push_back(40);
//
//  std::cout << "처음 벡터 상태" << std::endl;
//  print_vector(vec);
//  std::cout << "---------------------------" << std::endl;
//
//  vec.insert(vec.begin() + 2, 15);
//  print_vector(vec);
//
//  std::cout << "-----------------------------" << std::endl;
//  //vec[3] 제거
//  vec.erase(vec.begin() + 3);
//  print_vector(vec);
//
//}