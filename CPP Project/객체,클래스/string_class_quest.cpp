//#include <iostream>
//
//class MyString {
//  char* str;
//  int len;
//
//  public:
//    MyString(const char c);
//    MyString(const char* s);
//    //~MyString() { if(str) delete[] str; }
//
//    static int strlen(MyString s);
//    static void strcat(MyString& des, const MyString src);
//    static int strfind(MyString des, MyString src);
//    static int strcmp(MyString des, MyString src);
//    static int strdicorder(MyString des, MyString src);
//    char* getstr();
//};
//
//MyString::MyString(const char c) {
//  str = new char[2];
//  str[0] = c;
//  str[1] = NULL;
//  len = 1;
//}
//
//MyString::MyString(const char* s) {
//  len = 0;
//
//  while (s[len] != NULL) {
//    len++;
//  }
//
//  str = new char[len + 1];
//
//  for (int i = 0; i < len; i++) {
//    str[i] = s[i];
//  }
//  str[len] = NULL;
//}
//
//int MyString::strlen(MyString s) {
//  return s.len;
//}
//
//void MyString::strcat(MyString& des, MyString src) {
//  int total_len = des.len + src.len;
//  char *new_str = new char[total_len + 1];
//
//  int i;
//
//  for (i = 0; i < des.len; i++) {
//    new_str[i] = des.str[i];
//  }
//  for (int j = 0; j < src.len; j++, i++) {
//    new_str[i] = src.str[j];
//  }
//  new_str[i] = NULL;
//
//  des.str = new char[total_len + 1];
//
//  for (int j = 0; j < total_len; j++) {
//    des.str[j] = new_str[j];
//  }
//
//  delete[] new_str;
//
//  des.str[total_len] = NULL;
//  des.len = total_len;
//}
//
//int MyString::strfind(MyString des, MyString src) {
//  int i,j;
//
//  if (des.len < src.len) {
//    return -1;
//  }
//  else {
//    for (i = 0; i < des.len; i++) {      
//      for (j = 0; j < src.len; j++) {
//        if (des.str[i + j] != src.str[j]) break;
//      }
//      if (j == src.len) return i;
//    }
//    return -1;
//  }
//}
//
//int MyString::strcmp(MyString des, MyString src) {
//  if (des.len != src.len) {
//    return -1;
//  }
//  else {
//    for (int i = 0; i < des.len; i++) {
//      if (des.str[i] != src.str[i]) {
//        return -1;
//      }
//    }
//    return 0;
//  }
//}
//
//int MyString::strdicorder(MyString des, MyString src) {
//  int length = des.len < src.len ? des.len : src.len; 
//
//  for (int i = 0; i < length; i++) {                  
//    if (des.str[i] > src.str[i])        return 1;
//    else if (des.str[i] < src.str[i])   return 2;
//  }
//  if (des.len > src.len)                return 1;
//  else if (des.len < src.len)           return 2;
//  else                                  return 0;
//}
//
//char* MyString::getstr() {
//  return str;
//}
//
//int main() {
//
//  MyString a("abcde");
//  MyString b("bc");
//
//  std::cout << MyString::strfind(a, b) << std::endl;
//  //std::cout << MyString::strdicorder(a, b) << std::endl;
//
//  return 0;
//}