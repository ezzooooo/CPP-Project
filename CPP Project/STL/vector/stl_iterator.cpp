//#include <iostream>
//#include <vector>
//
///*
//�Ʒ� �Լ��� ���ͷ����� ����� ����Լ�!
//
//template <typename T>
//void print_vector(std::vector<T>& vec) {
//  //��ü ���͸� ����ϱ�
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
//  std::cout << "ó�� ���� ����" << std::endl;
//  print_vector(vec);
//  std::cout << "---------------------------" << std::endl;
//
//  vec.insert(vec.begin() + 2, 15);
//  print_vector(vec);
//
//  std::cout << "-----------------------------" << std::endl;
//  //vec[3] ����
//  vec.erase(vec.begin() + 3);
//  print_vector(vec);
//
//}