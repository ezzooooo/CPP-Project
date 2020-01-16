//���ø� ù Ȱ��
#include <iostream>
#include <string>

template <typename T>
class Vector {
  T* data;
  int capacity;
  int length;

  public:
    // ������
    Vector(int n = 1) : data(new T[n]), capacity(n), length(0) {}

    // �� �ڿ� ���ο� ���Ҹ� �߰��Ѵ�.
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

    // ������ ��ġ�� ���ҿ� �����Ѵ�.
    T operator[](int i) { return data[i]; }

    // x ��° ��ġ�� ���Ҹ� �����Ѵ�.
    void remove(int x) {
      for (int i = x + 1; i < length; i++) {
        data[i - 1] = data[i];
      }
      length--;
    }

    // ���� ������ ũ�⸦ ���Ѵ�.
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

  // ������
  Vector(int n = 1) : data(new unsigned int[n / 32 + 1]), capacity(n / 32 + 1), length(0) {
    for (int i = 0; i < capacity; i++) {
      data[i] = 0;
    }
  }

  // �� �ڿ� ���ο� ���Ҹ� �߰��Ѵ�.
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

  // ������ ��ġ�� ���ҿ� �����Ѵ�.
  bool operator[](int i) { return (data[i / 32] & (1 << (i % 32))) != 0; }

  // x ��° ��ġ�� ���Ҹ� �����Ѵ�.
  void remove(int x) {
    for (int i = x + 1; i < length; i++) {
      int prev = i - 1;
      int curr = i;

      // ���� curr ��ġ�� �ִ� ��Ʈ�� 1�̶��
      // prev ��ġ�� �ִ� ��Ʈ�� 1�� �����.
      if (data[curr / 32] & (1 << (curr % 32))) {
        data[prev / 32] |= (1 << (prev % 32));
      }
      // �ƴϸ� prev ��ġ�� �ִ� ��Ʈ�� 0���� �����.
      else {
        unsigned int all_ones_except_prev = 0xFFFFFFFF;
        all_ones_except_prev ^= (1 << (prev % 32));
        data[prev / 32] &= all_ones_except_prev;
      }
    }
    length--;
  }

  // ���� ������ ũ�⸦ ���Ѵ�.
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
  std::cout << "ù��° ���� : " << int_vec[0] << std::endl;
  std::cout << "�ι�° ���� : " << int_vec[1] << std::endl;

  Vector<std::string> str_vec;
  str_vec.push_back("hello");
  str_vec.push_back("world");
  std::cout << "-------- std::string vector -------" << std::endl;
  std::cout << "ù��° ���� : " << str_vec[0] << std::endl;
  std::cout << "�ι�° ���� : " << str_vec[1] << std::endl;

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