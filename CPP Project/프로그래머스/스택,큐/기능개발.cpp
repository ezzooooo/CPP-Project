////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//  vector<int> answer;
//
//  while (!progresses.empty()) {
//    int count = 0;
//
//    for (int i = 0; i<progresses.size(); i++) {
//      progresses[i] += speeds[i];
//    }
//
//    for (int i = 0; i<progresses.size(); i++) {
//      if (progresses[i] >= 100) {
//        count++;
//        progresses.erase(progresses.begin() + i);
//        speeds.erase(speeds.begin() + i);
//        i--;
//      }
//      else break;
//    }
//
//    if (count > 0) answer.push_back(count);
//  }
//
//  return answer;
//}
//
//int main() {
//  vector<int> p;
//  vector<int> s;
//
//  p.push_back(93);
//  p.push_back(30);
//  p.push_back(55);
//
//  s.push_back(1);
//  s.push_back(30);
//  s.push_back(5);
//
//  vector<int> returns = solution(p, s);
//
//  for (int elem : returns) {
//    cout << elem << endl;
//  }
//
//  return 0;
//}