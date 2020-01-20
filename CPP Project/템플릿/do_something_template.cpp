//#include <iostream>
//
//class A {
//  public:
//    void do_something(int x) const {
//      std::cout << "Do Something with " << x << std::endl;
//    }
//};
//
//class B {
//  public:
//    void do_something(int x) const {
//      std::cout << x << "�� ���" << std::endl;
//    }
//};
//
//template <typename T, typename... Ints>
//void do_many_things(const T& t, Ints... nums) {
//  //������ ���ڵ鿡 ���� do_something �Լ����� ȣ���Ѵ�.
//  (t.do_something(nums), ...);
//}
//
//int main() {
//  A a;
//  do_many_things(a, 1, 3, 2, 4);
//
//  B b;
//  do_many_things(b, 1, 3, 2, 4);
//}