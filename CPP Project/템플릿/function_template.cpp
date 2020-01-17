//#include <iostream>
//#include <string>
//
//template <typename T>
//class Vector {
//  T* data;
//  int capacity;
//  int length;
//
//  public:
//    // 어떤 타입을 보관하는지
//    typedef T value_type;
//
//    // 생성자
//    Vector(int n = 1) : data(new T[n]), capacity(n), length(0) {}
//
//    // 맨 뒤에 새로운 원소를 추가한다.
//    void push_back(T s) {
//      if (capacity <= length) {
//        T* temp = new T[capacity * 2];
//        for (int i = 0; i < length; i++) {
//          temp[i] = data[i];
//        }
//        delete[] data;
//        data = temp;
//        capacity *= 2;
//      }
//
//      data[length] = s;
//      length++;
//    }
//
//    // 임의의 위치의 원소에 접근한다.
//    T operator[](int i) { return data[i]; }
//
//    // x 번째 위치한 원소를 제거한다.
//    void remove(int x) {
//      for (int i = x + 1; i < length; i++) {
//        data[i - 1] = data[i];
//      }
//      length--;
//    }
//
//    // 현재 벡터의 크기를 구한다.
//    int size() { return length; }
//
//    // i 번째 원소와 j 번째 원소 위치를 바꾼다.
//    void swap(int i, int j) {
//      T temp = data[i];
//      data[i] = data[j];
//      data[j] = temp;
//    }
//
//    ~Vector() {
//      if (data) {
//        delete[] data;
//      }
//    }
//};
//
//template <typename T>
//T max(T& a, T& b) {
//  return a > b ? a : b;
//}
//
//template <typename Cont>
//void bubble_sort(Cont& cont) {
//  for (int i = 0; i < cont.size(); i++) {
//    for (int j = i + 1; j < cont.size(); j++) {
//      if (cont[i] > cont[j]) {
//        cont.swap(i, j);
//      }
//    }
//  }
//}
//
//int main() {
//  int a = 1, b = 2;
//  std::cout << "Max (" << a << "," << b << ") ? : " << max(a, b) << std::endl;
//
//  std::string s = "hello", t = "world";
//  std::cout << "Max (" << s << "," << t << ") ? : " << max(s, t) << std::endl;
//
//  Vector<int> int_vec;
//  int_vec.push_back(3);
//  int_vec.push_back(1);
//  int_vec.push_back(2);
//  int_vec.push_back(8);
//  int_vec.push_back(5);
//  int_vec.push_back(3);
//
//  std::cout << "정렬 이전 ---- " << std::endl;
//  for (int i = 0; i < int_vec.size(); i++) {
//    std::cout << int_vec[i] << " ";
//  }
//
//  std::cout << std::endl << "정렬 이후 ---- " << std::endl;
//  bubble_sort(int_vec);
//  for (int i = 0; i < int_vec.size(); i++) {
//    std::cout << int_vec[i] << " ";
//  }
//  std::cout << std::endl;
//}