//#include <iostream>
//#include <vector>
//
//template <typename T>
//void print_vector(std::vector<T>& vec) {
//  // ��ü ���͸� ����ϱ�
//  for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end();
//    ++itr) {
//    std::cout << *itr << std::endl;
//  }
//}
//
//int main() {
//  std::vector<int> vec;
//  vec.push_back(10);
//  vec.push_back(20);
//  vec.push_back(30);
//  vec.push_back(40);
//
//  std::cout << "�ʱ� vec ����" << std::endl;
//  print_vector(vec);
//
//  std::vector<int>::iterator itr = vec.begin() + 2;
//
//  // vec[2]�� ���� 50���� �ٲ۴�.
//  *itr = 50;
//
//  std::cout << "----------------" << std::endl;
//  print_vector(vec);
//
//  std::vector<int>::const_iterator citr = vec.cbegin() + 2; // const iterator�� cbegin() �Լ��� ���. ���������� cend() �Լ� ���.
//
//  //*citr = 30; // ��� �ݺ��ڰ� ����Ű�� ���� �ٲ� �� ����.
//
//  return 0;
//}