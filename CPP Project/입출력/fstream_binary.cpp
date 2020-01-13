//// 이진수로 읽기
//#include <fstream>
//#include <iostream>
//#include <string>
//
//int main() {
//
//  //파일 읽기 준비
//  std::ifstream in("test.txt", std::ios::binary);
//  std::string s;
//
//  int x;
//  if (in.is_open()) {
//    in.read((char*)(&x), 4);
//    std::cout << std::hex << x << std::endl;
//  }
//  else {
//    std::cout << "파일을 찾을 수 없습니다!" << std::endl;
//  }
//
//  return 0;
//}