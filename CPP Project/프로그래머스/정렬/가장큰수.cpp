////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(int a, int b) {
//  string s1 = to_string(a);
//  string s2 = to_string(b);
//
//  return s1 + s2 < s2 + s1;
//}
//
//string solution(vector<int> numbers) {
//  string answer = "";
//
//  sort(numbers.begin(), numbers.end(), compare);
//
//  for (vector<int>::reverse_iterator itr = numbers.rbegin(); itr != numbers.rend(); itr++) {
//    answer += to_string(*itr);
//  }
//
//  if (answer[0] == '0' && answer[1] == '0') {
//    return "0";
//  }
//  else {
//    return answer;
//  }
//}