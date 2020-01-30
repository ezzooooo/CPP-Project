////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//  vector<int> answer;
//  vector<int> temp;
//
//  for (vector<int> v : commands) {
//    temp = array;
//    sort(temp.begin() + v[0] - 1, temp.begin() + v[1]);
//    answer.push_back(temp[v[0] - 1 + v[2] - 1]);
//  }
//
//  return answer;
//}