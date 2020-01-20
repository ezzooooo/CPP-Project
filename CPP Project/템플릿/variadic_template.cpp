//#include <iostream>
//
//template <typename T>
//void print(T arg) {
//  std::cout << arg << std::endl;
//}
//
//template <typename T, typename... Types> // ... << ÅÛÇÃ¸´ ÆÄ¶ó¹ÌÅÍ ÆÑ
//void print(T arg, Types... args) {       // ... << ÇÔ¼ö ÆÄ¶ó¹ÌÅÍ ÆÑ
//  std::cout << arg << ", ";
//  print(args...);
//}
//
//int main() {
//  print(1, 3.1, "abc");
//  print(1, 2, 3, 4, 5, 6, 7);
//}