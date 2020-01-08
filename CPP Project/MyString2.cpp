////2020.01.08

//#include <iostream>
//
//// string.h �� strlen ������ include �ߴµ�, ��� �������� ���� strlen
//// �� ���� �Լ��� ���� �ᵵ �˴ϴ�.
//#include <string.h>
//
//class MyString {
//  char* string_content;  // ���ڿ� �����͸� ����Ű�� ������
//  int string_length;     // ���ڿ� ����
//  int memory_capacity;   // ���� �Ҵ�� �뷮
//
//public:
//  // ���� �ϳ��� ����
//  MyString(char c);
//
//  // ���ڿ��� ���� ����
//  MyString(const char* str);
//
//  // ���� ������
//  MyString(const MyString& str);
//
//  ~MyString();
//
//  MyString operator+(const MyString& str);
//  MyString& operator=(const MyString& str);
//  bool operator==(const MyString& str);
//  char& operator[](const int index);
//
//  MyString operator+(const char* str);
//  MyString& operator=(const char* str);
//  bool operator==(const char* str);
//
//  int length() const;
//  int capacity() const;
//  void reserve(int size);
//
//  void print() const;
//  void println() const;
//
//  MyString& assign(const MyString& str);
//  MyString& assign(const char* str);
//
//  char at(int i) const;
//
//  MyString& insert(int loc, const MyString& str);
//  MyString& insert(int loc, const char* str);
//  MyString& insert(int loc, char c);
//
//  MyString& erase(int loc, int num);
//
//  int find(int find_from, const MyString& str) const;
//  int find(int find_from, const char* str) const;
//  int find(int find_from, char c) const;
//
//  int compare(const MyString& str) const;
//};
//
//MyString::MyString(char c) {
//  string_content = new char[1];
//  string_content[0] = c;
//  memory_capacity = 1;
//  string_length = 1;
//}
//MyString::MyString(const char* str) {
//  string_length = strlen(str);
//  memory_capacity = string_length;
//  string_content = new char[string_length];
//
//  for (int i = 0; i != string_length; i++) {
//    string_content[i] = str[i];
//  }
//}
//MyString::MyString(const MyString& str) {
//  string_length = str.string_length;
//  memory_capacity = str.string_length;
//  string_content = new char[string_length];
//
//  for (int i = 0; i != string_length; i++) {
//    string_content[i] = str.string_content[i];
//  }
//}
//MyString::~MyString() { delete[] string_content; }
//int MyString::length() const { return string_length; }
//
//MyString MyString::operator+(const MyString& str) {
//  MyString temp = (*this);
//  temp.insert(string_length, str);
//  return temp;
//}
//MyString& MyString::operator=(const MyString& str) {
//  (*this).assign(str);
//  return (*this);
//}
//bool MyString::operator==(const MyString& str) {
//  return !(*this).compare(str);
//}
//char& MyString::operator[](const int index) {
//  return string_content[index];
//}
//
//MyString MyString::operator+(const char* str) {
//  MyString temp = (*this);
//  temp.insert(string_length, str);
//  return temp;
//}
//MyString& MyString::operator=(const char* str) {
//  (*this).assign(str);
//  return (*this);
//}
//bool MyString::operator==(const char* str) {
//  return !(*this).compare(MyString(str));
//}
//
//void MyString::print() const {
//  for (int i = 0; i != string_length; i++) {
//    std::cout << string_content[i];
//  }
//}
//void MyString::println() const {
//  for (int i = 0; i != string_length; i++) {
//    std::cout << string_content[i];
//  }
//
//  std::cout << std::endl;
//}
//
//MyString& MyString::assign(const MyString& str) {
//  if (str.string_length > memory_capacity) {
//    // �׷��� �ٽ� �Ҵ��� ����߸� �Ѵ�.
//    delete[] string_content;
//
//    string_content = new char[str.string_length];
//    memory_capacity = str.string_length;
//  }
//  for (int i = 0; i != str.string_length; i++) {
//    string_content[i] = str.string_content[i];
//  }
//
//  // �׸��� ���� str.string_length + 1 ~ string_length �κ��� �ʱ�ȭ
//  // ��ų �ʿ�� ����. �ֳ��ϸ� �ű� ������ �о������ �ʱ� �����̴�.
//
//  string_length = str.string_length;
//
//  return *this;
//}
//MyString& MyString::assign(const char* str) {
//  int str_length = strlen(str);
//  if (str_length > memory_capacity) {
//    // �׷��� �ٽ� �Ҵ��� ����߸� �Ѵ�.
//    delete[] string_content;
//
//    string_content = new char[str_length];
//    memory_capacity = str_length;
//  }
//  for (int i = 0; i != str_length; i++) {
//    string_content[i] = str[i];
//  }
//
//  string_length = str_length;
//
//  return *this;
//}
//int MyString::capacity() const { return memory_capacity; }
//void MyString::reserve(int size) {
//  if (size > memory_capacity) {
//    char* prev_string_content = string_content;
//
//    string_content = new char[size];
//    memory_capacity = size;
//
//    for (int i = 0; i != string_length; i++)
//      string_content[i] = prev_string_content[i];
//
//    delete[] prev_string_content;
//  }
//
//  // ���� �����Ϸ��� size �� ���� capacity ���� �۴ٸ�
//  // �ƹ��͵� ���ص� �ȴ�.
//}
//char MyString::at(int i) const {
//  if (i >= string_length || i < 0) {
//    return 0;
//  }
//  else {
//    return string_content[i];
//  }
//}
//MyString& MyString::insert(int loc, const MyString& str) {
//  // �̴� i �� ��ġ �ٷ� �տ� ���ڸ� �����ϰ� �ȴ�. ���� ��
//  // abc ��� ���ڿ��� insert(1, "d") �� �ϰ� �ȴٸ� adbc �� �ȴ�.
//
//  // ������ ����� �Է¿� ���ؼ��� ������ �������� �ʴ´�.
//  if (loc < 0 || loc > string_length) return *this;
//
//  if (string_length + str.string_length > memory_capacity) {
//    // ���� ���Ӱ� �������� �Ҵ��� �ؾ� �Ѵ�.
//
//    if (memory_capacity * 2 > string_length + str.string_length)
//      memory_capacity *= 2;
//    else
//      memory_capacity = string_length + str.string_length;
//
//    char* prev_string_content = string_content;
//    string_content = new char[memory_capacity];
//
//    // �ϴ� insert �Ǵ� �κ� ���������� ������ �����Ѵ�.
//    int i;
//    for (i = 0; i < loc; i++) {
//      string_content[i] = prev_string_content[i];
//    }
//
//    // �׸��� ���ӿ� insert �Ǵ� ���ڿ��� �ִ´�.
//    for (int j = 0; j != str.string_length; j++) {
//      string_content[i + j] = str.string_content[j];
//    }
//
//    // ���� �ٽ� �� ���ڿ��� ������ �޺κ��� �����Ѵ�.
//    for (; i < string_length; i++) {
//      string_content[str.string_length + i] = prev_string_content[i];
//    }
//
//    delete[] prev_string_content;
//
//    string_length = string_length + str.string_length;
//    return *this;
//  }
//
//  // ���� �ʰ����� �ʴ� ��� ���� �����Ҵ��� �� �ʿ䰡 ���� �ȴ�.
//  // ȿ�������� insert �ϱ� ����, �и��� �κ��� ���� �ڷ� �о������.
//
//  for (int i = string_length - 1; i >= loc; i--) {
//    // �ڷ� �б�. �� �� ������ ���ڿ� �����Ͱ� ������� �ʰ� ��
//    string_content[i + str.string_length] = string_content[i];
//  }
//  // �׸��� insert �Ǵ� ���� �ٽ� ����ֱ�
//  for (int i = 0; i < str.string_length; i++)
//    string_content[i + loc] = str.string_content[i];
//
//  string_length = string_length + str.string_length;
//  return *this;
//}
//MyString& MyString::insert(int loc, const char* str) {
//  MyString temp(str);
//  return insert(loc, temp);
//}
//MyString& MyString::insert(int loc, char c) {
//  MyString temp(c);
//  return insert(loc, temp);
//}
//
//MyString& MyString::erase(int loc, int num) {
//  // loc �� �� ���� �����ؼ� num ���ڸ� �����.
//  if (num < 0 || loc < 0 || loc > string_length) return *this;
//
//  // ����ٴ� ���� �ܼ��� ���� ���ڵ��� ������ ���� �´ٰ�
//  // �����ϸ� �˴ϴ�.
//
//  for (int i = loc + num; i < string_length; i++) {
//    string_content[i - num] = string_content[i];
//  }
//
//  string_length -= num;
//  return *this;
//}
//int MyString::find(int find_from, const MyString& str) const {
//  int i, j;
//  if (str.string_length == 0) return -1;
//  for (i = find_from; i < string_length - str.string_length; i++) {
//    for (j = 0; j < str.string_length; j++) {
//      if (string_content[i + j] != str.string_content[j]) break;
//    }
//
//    if (j == str.string_length) return i;
//  }
//
//  return -1;  // ã�� ������
//}
//int MyString::find(int find_from, const char* str) const {
//  MyString temp(str);
//  return find(find_from, temp);
//}
//int MyString::find(int find_from, char c) const {
//  MyString temp(c);
//  return find(find_from, temp);
//}
//int MyString::compare(const MyString& str) const {
//  // (*this) - (str) �� �����ؼ� �� 1, 0, -1 �� �� ����� �����Ѵ�
//  // 1 �� (*this) �� ���������� �� �ڿ� �´ٴ� �ǹ�. 0 �� �� ���ڿ�
//  // �� ���ٴ� �ǹ�, -1 �� (*this) �� ���������� �� �տ� �´ٴ� �ǹ��̴�.
//
//  for (int i = 0; i < (string_length > str.string_length ? str.string_length : string_length ); i++) {
//    if (string_content[i] > str.string_content[i])
//      return 1;
//
//    else if (string_content[i] < str.string_content[i])
//      return -1;
//  }
//
//  // ���� ���� �ߴµ� ������ �ʾҴٸ� �� �κ� ���� ��� �Ȱ��� ���� �ȴ�.
//  // ���� ���ڿ� ���̰� ���ٸ� �� ���ڿ��� �ƿ� ���� ���ڿ��� �ȴ�.
//
//  if (string_length == str.string_length) return 0;
//
//  // ����� abc �� abcd �� ũ�� �񱳴� abcd �� �� �ڿ� ���� �ȴ�.
//  else if (string_length > str.string_length)
//    return 1;
//
//  return -1;
//}
//int main() {
//  MyString str1("abcdef");
//  MyString str2("abcde");
//  MyString str3("123213");
//
//  str3[2] = 'a';
//
//  str3.println();
//  str2.println();
//  str1.println();
//
//  std::cout << (str3 == str2) << std::endl;
//}