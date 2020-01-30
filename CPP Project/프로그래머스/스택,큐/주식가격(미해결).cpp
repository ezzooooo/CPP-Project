////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> prices) {
//  vector<int> answer;
//  vector<int> lower;
//  int iter = 0;
//
//  for (int i = 0; i<prices.size(); i++) {
//    answer.push_back(0);
//    lower.push_back(1);
//  }
//
//  for (int i = 0; i<prices.size() - 1; i++) {
//    for (int j = 0; j<=i; j++) {
//      answer[j] += lower[j];
//    }
//
//    if (prices[i] <= prices[i + 1]) {
//      lower[i] = 1;
//    }
//    else {
//      lower[i] = 0;
//    }
//  }
//
//  return answer;
//}
//
//int main() {
//  vector<int> v;
//  vector<int> answer;
//
//  v.push_back(1);
//  v.push_back(2);
//  v.push_back(3);
//  v.push_back(2);
//  v.push_back(3);
//
//  answer = solution(v);
//
//  for (int i = 0; i < answer.size(); i++) {
//    cout << answer[i] << " , ";
//    cout << endl;
//  }
//}