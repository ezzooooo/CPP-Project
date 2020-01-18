//#include <iostream>
//
//template <typename T, typename Comp = Compare<T>>
//T Min(T a, T b) {
//  Comp comp;
//  if (comp(a, b)) {
//    return a;
//  }
//  return b;
//}
//
//template <typename T>
//struct Compare {
//  bool operator()(const T& a, const T& b) const { return a < b; }
//};
//
//int main() {
//  int a = 3, b = 4;
//  double c = 3.14, d = 3.15;
//  std::cout << "min : " << Min(c, d);
//}