////���� ��ü�� �ѹ��� �б�
//#include <fstream>
//#include <iostream>
//#include <string>
//
//int main() {
//  //���� �б� �غ�
//  std::ifstream in("test.txt");
//  std::string s;
//
//  if (in.is_open()) {
//    //��ġ �����ڸ� ���� ������ �ű��.
//    in.seekg(0, std::ios::end);
//
//    //�׸��� �� ��ġ�� �д´�. (������ ũ��)
//    int size = in.tellg();
//
//    // �� ũ���� ���ڿ��� �Ҵ��Ѵ�.
//    s.resize(size);
//
//    // ��ġ �����ڸ� �ٽ� ���� �� ������ �ű��.
//    in.seekg(0, std::ios::beg);
//
//    // ���� ��ü ������ �о ���ڿ��� �����Ѵ�.
//    in.read(&s[0], size);
//    std::cout << s << std::endl;
//  }
//  else {
//    std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//  }
//
//  return 0;
//}