////2020.01.07
//
//#include <string.h>
//#include <iostream>
//
//class string {
//  char *str;
//  int len;
//
//  public:
//    string(char c, int n);
//    string(const char *s);
//    string(const string &s);
//    ~string();
//
//    void add_string(const string &s);
//    void copy_string(const string &s);
//    int strlen();
//
//    void show_string();
//};
//
//string::string(char c, int n) {
//  str = new char[n + 1];
//  for (len = 0; len < n; len++) {
//    str[len] = c;
//  }
//  str[len] = NULL;
//}
//
//string::string(const char *s) {
//  len = 0;
//
//  while (s[len] != NULL) {
//    len++;
//  }
//
//  str = new char[len + 1];
//
//  int i;
//  for (i = 0; i < len; i++) {
//    str[i] = s[i];
//  }
//  str[i] = NULL;
//}
//
//string::string(const string &s) {
//  len = s.len;
//
//  str = new char[len + 1];
//
//  int i;
//  for (i = 0; i < len; i++) {
//    str[i] = s.str[i];
//  }
//  str[i] = NULL;
//}
//
//string::~string() {
//  if (str) {
//    delete[] str;
//  }
//}
//
//void string::add_string(const string &s) {
//  char* new_str = new char[len + s.len + 1];
//
//  int i;
//
//  for (i = 0; i < len; i++) {
//    new_str[i] = str[i];
//  }
//
//  for (int j = 0; j < s.len; j++, i++) {
//    new_str[i] = s.str[j];
//  }
//  new_str[i] = NULL;
//
//  str = new char[i+1];
//
//  for (int j = 0; j < i; j++) {
//    str[j] = new_str[j];
//  }
//  str[i] = NULL;
//}
//
//void string::show_string() {
//  std::cout << str << std::endl;
//}
//
//
//int main() {
//
//  string a("abcde");
//  string b(a);
//  string c('c', 10);
//
//  a.show_string();
//  b.show_string();
//  c.show_string();
//
//  a.add_string(c);
//
//  a.show_string();
//
//  return 0;
//}