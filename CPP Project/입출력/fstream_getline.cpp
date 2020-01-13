//// getline으로 읽어들이기
//#include <fstream>
//#include <iostream>
//#include <string>
//
//int main() {
//  //파일 읽기 준비
//  std::ifstream in("test.txt");
//  std::string s;
//  char buf[100];
//
//  if (!in.is_open()) {
//    std::cout << "파일을 찾을 수 없습니다!" << std::endl;
//    return 0;
//  }
//
//  // 파일 읽기를 할 때 while문의 조건으로 in.eof() 를 사용해서는 안됨!
//  // eof는 파일의 끝에 도달한 이후에 true를 리턴하기 때문에
//  // 파일 끝 바로 직전에서 입력을 받는다면 오류가 발생할 수 있음!
//  // 따라서 읽을 수 있을때만 true로 캐스팅 되는 ifstream 객체를 조건으로 사용하는게 가장 좋음!
//
//  while (in) {
//    getline(in, s); // std::string에 정의되어 있는 함수로 버퍼의 크기를 지정하지 않아도 됨.
//    in.getline(buf, 100); // ifstream에 정의되어 있는 함수로 버퍼의 크기를 지정해야함.
//
//    //in.getline(buf, 100, '.');  <-- 이렇게 쓰면 .이 나올때까지 입력을 받음.
//    std::cout << s << std::endl;
//  }
//
//  return 0;
//}