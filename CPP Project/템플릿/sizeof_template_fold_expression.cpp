//#include <iostream>
//
//template <typename... Ints>
//int sum_all(Ints... nums) {
//  return (... + nums);
//}
//
//template <typename Int, typename... Ints>
//Int diff_from(Int start, Ints... nums) {
//  return (start - ... - nums);
//}
//
//int main() {
//  // 1 + 4 + 2 + 3 + 10
//  std::cout << sum_all(1, 4, 2, 3, 10) << std::endl;
//
//  // 100 - 1 - 4 - 2 - 3 - 10
//  std::cout << diff_from(100, 1, 4, 2, 3, 10) << std::endl;
//}