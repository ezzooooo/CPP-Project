////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<int> priorities, int location) {
//  int answer = 0;
//  int current_location = location;
//  bool print = false;
//
//  while (true) {
//    for (int i = 1; i<priorities.size(); i++) {
//      if (priorities[0] < priorities[i]) {
//        priorities.push_back(priorities[0]);
//        priorities.erase(priorities.begin());
//
//        if (current_location == 0) current_location = priorities.size() - 1;
//        else                     current_location--;
//
//        print = false;
//        break;
//      }
//      print = true;
//    }
//
//    if (print) {
//      answer++;
//      if (current_location == 0) break;
//      priorities.erase(priorities.begin());
//      current_location--;
//    }
//  }
//
//  return answer;
//}
//
//int main() {
//
//  vector<int> v;
//
//  v.push_back(1);
//  v.push_back(1);
//  v.push_back(9);
//  v.push_back(1);
//  v.push_back(1);
//  v.push_back(1);
//
//  cout << solution(v, 0) << endl;
//
//  return 0;
//}