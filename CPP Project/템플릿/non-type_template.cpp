//#include <iostream>
//#include <array>
//
//template <typename T, int num = 5> // ���ø� ����Ʈ����
//T add_num(T t) {
//  return t + num;
//}
//
//template <typename T>
//void print_array(const T& arr) {          // const std;:array<int,5>& arr ó�� ���� �ʰ� ���ø��� ������ ���.
//  for (int i = 0; i < arr.size(); i++) {
//    std::cout << arr[i] << " ";
//  }
//  std::cout << std::endl;
//}
//
//int main() {
//  int x = 3;
//  std::cout << "x : " << add_num(x) << std::endl;
//
//  // ��ġ C ������ �迭ó�� {} �� ���� �迭�� ������ �� �ִ�.
//  std::array<int, 5> arr = { 1,2,3,4,5 };
//  std::array<int, 7> arr2 = { 1,2,3,4,5,6,7 };
//  std::array<int, 3> arr3 = { 1,2,3 };
//
//  print_array(arr);
//  print_array(arr2);
//  print_array(arr3);
//}