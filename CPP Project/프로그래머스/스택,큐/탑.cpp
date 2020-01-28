////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> heights) {
//  vector<int> answer;
//  int j;
//
//  answer.push_back(0);
//
//  for (int i = 1; i<heights.size(); i++) {
//    for (j = i - 1; j >= 0; j--) {
//      if (heights[i] < heights[j]) {
//        answer.push_back(j + 1);
//        break;
//      }
//      if (j == 0) answer.push_back(0);
//    }
//  }
//
//  return answer;
//}