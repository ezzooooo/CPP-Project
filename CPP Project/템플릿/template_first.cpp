//템플릿 첫 활용
#include <iostream>
#include <string>

template <typename T>
class Vector {
  T* data;
  int capacity;
  int length;

  public:
    // 생성자
    Vector(int n = 1) : data(new T[n]), capacity(n), length(0) {}

    // 맨 뒤에 새로운 원소를 추가한다.
    void push_back(T s) {
      if (capacity <= length) {
        T* temp = new T[capacity * 2];
        for (int i = 0; i < length; i++) {
          temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        capacity *= 2;
      }

      data[length] = s;
      length++;
    }

    // 임의의 위치의 원소에 접근한다.
    T operator[](int i) { return data[i]; }

    // x 번째 위치한 원소를 제거한다.
    void remove(int x) {
      for (int i = x + 1; i < length; i++) {
        data[i - 1] = data[i];
      }
      length--;
    }

    // 현재 벡터의 크기를 구한다.
    int size() { return length; }

    ~Vector() {
      if (data) {
        delete[] data;
      }
    }
};

template <>
class Vector<bool> {
  unsigned int* data;
  int capacity;
  int length;

public:
  typedef bool value_type;

  // 생성자
  Vector(int n = 1) : data(new unsigned int[n / 32 + 1]), capacity(n / 32 + 1), length(0) {
    for (int i = 0; i < capacity; i++) {
      data[i] = 0;
    }
  }

  // 맨 뒤에 새로운 원소를 추가한다.
  void push_back(bool s) {
    if (capacity * 32 <= length) {
      unsigned int* temp = new unsigned int[capacity * 2];
      for (int i = 0; i < capacity; i++) {
        temp[i] = data[i];
      }
      for (int i = capacity; i < 2 * capacity; i++) {
        temp[i] = 0;
      }

      delete[] data;
      data = temp;
      capacity *= 2;
    }

    if (s) {
      data[length / 32] |= (1 << (length % 32));
    }
    
    length++;
  }

  // 임의의 위치의 원소에 접근한다.
  bool operator[](int i) { return (data[i / 32] & (1 << (i % 32))) != 0; }

  // x 번째 위치한 원소를 제거한다.
  void remove(int x) {
    for (int i = x + 1; i < length; i++) {
      int prev = i - 1;
      int curr = i;

      // 만일 curr 위치에 있는 비트가 1이라면
      // prev 위치에 있는 비트를 1로 만든다.
      if (data[curr / 32] & (1 << (curr % 32))) {
        data[prev / 32] |= (1 << (prev % 32));
      }
      // 아니면 prev 위치에 있는 비트를 0으로 지운다.
      else {
        unsigned int all_ones_except_prev = 0xFFFFFFFF;
        all_ones_except_prev ^= (1 << (prev % 32));
        data[prev / 32] &= all_ones_except_prev;
      }
    }
    length--;
  }

  // 현재 벡터의 크기를 구한다.
  int size() { return length; }

  ~Vector() {
    if (data) {
      delete[] data;
    }
  }
};

int main() {
  Vector<int> int_vec;
  int_vec.push_back(3);
  int_vec.push_back(2);

  std::cout << "-------- int vector -------" << std::endl;
  std::cout << "첫번째 원소 : " << int_vec[0] << std::endl;
  std::cout << "두번째 원소 : " << int_vec[1] << std::endl;

  Vector<std::string> str_vec;
  str_vec.push_back("hello");
  str_vec.push_back("world");
  std::cout << "-------- std::string vector -------" << std::endl;
  std::cout << "첫번째 원소 : " << str_vec[0] << std::endl;
  std::cout << "두번째 원소 : " << str_vec[1] << std::endl;

  Vector<bool> bool_vec;
  bool_vec.push_back(true);
  bool_vec.push_back(true);
  bool_vec.push_back(false);
  bool_vec.push_back(false);
  bool_vec.push_back(false);
  bool_vec.push_back(true);
  bool_vec.push_back(false);
  bool_vec.push_back(true);
  bool_vec.push_back(false);
  bool_vec.push_back(true);
  bool_vec.push_back(false);
  bool_vec.push_back(true);
  bool_vec.push_back(false);
  bool_vec.push_back(true);
  bool_vec.push_back(false);
  bool_vec.push_back(true);
  bool_vec.push_back(false);

  std::cout << "-------- bool vector ---------" << std::endl;
  for (int i = 0; i < bool_vec.size(); i++) {
    std::cout << bool_vec[i];
  }
  std::cout << std::endl;
}