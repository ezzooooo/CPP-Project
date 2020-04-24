//#include <string>
//#include <vector>
//#include <map>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(string msg) {
//  vector<int> answer;
//
//  map<string, int> dic;
//  string temp = "";
//  string last = "";
//  int max = 27;
//
//  for (int i = 0; i < 26; i++) {
//    temp = ('A' + i);
//    dic.insert(make_pair(temp, i + 1));
//  }
//
//  for (int i = 0; i < msg.length(); i = i + last.length()) {
//    temp = "";
//    last = "";
//
//    int j = i;
//    while (true) {
//      temp += msg[j];
//
//      if (dic.find(temp) == dic.end()) {
//        dic.insert(make_pair(temp, max));
//        max++;
//        break;
//      }
//
//      last += msg[j];
//      j++;
//    }
//
//    answer.push_back(dic[last]);
//  }
//
//  return answer;
//}
//
//int main() {
//
//  string msg = "KAKAO";
//
//  solution(msg);
//
//  return 0;
//}