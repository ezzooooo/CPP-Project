////��ó: ���α׷��ӽ� �ڵ� �׽�Ʈ ����, https://programmers.co.kr/learn/challenges
//
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(string arrangement) {
//  int answer = 0;
//  int bracket = 0;
//
//  for (int i = 0; i<arrangement.length(); i++) {
//    if (arrangement[i] == '(' && arrangement[i + 1] == ')') {
//      answer = answer + bracket;
//      i++;
//    }
//    else if (arrangement[i] == '(') {
//      answer++;
//      bracket++;
//    }
//    else {
//      bracket--;
//    }
//  }
//
//  return answer;
//}
//
//int main() {
//  string a = "()(((()())(())()))(())";
//
//  cout << solution(a) << endl;
//}