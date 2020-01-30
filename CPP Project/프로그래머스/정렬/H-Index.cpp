////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//int solution(vector<int> citations) {
//  int answer = 0;
//  vector<int> h_index;
//
//  sort(citations.begin(), citations.end());
//
//  for (int i = 0; i<citations.size(); i++) {
//    if (citations[i] < citations.size() - i) {
//      h_index.push_back(citations[i]);
//    }
//    else {
//      h_index.push_back(citations.size() - i);
//    }
//  }
//
//  answer = *max_element(h_index.begin(), h_index.end());
//
//  return answer;
//}
//
//int main() {
//
//  vector<int> v;
//  v.push_back(3);
//  v.push_back(0);
//  v.push_back(6);
//  v.push_back(1);
//  v.push_back(5);
//
//  cout << solution(v) << endl;
//}
