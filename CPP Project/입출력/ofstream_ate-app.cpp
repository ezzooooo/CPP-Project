//// ate와 app
//#include <fstream>
//#include <iostream>
//#include <string>
//
//int main() {
//  // 두 파일에는 모두 abc 라고 써있습니다.
//  std::ofstream out("test.txt", std::ios::app);
//  std::ofstream out2("test2.txt", std::ios::ate); // ate는 기존 파일의 내용을 보존하지 않음.
//
//  out.seekp(3, std::ios::beg);
//  out2.seekp(3, std::ios::beg);
//
//  out << "추가";
//  out2 << "추가";
//
//  return 0;
//}