//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> stones, int k) {
//  int answer = 0;
//  int count = 0;
//  bool can_cross = true;
//
//  int min = *min_element(stones.begin(), stones.end());
//
//  for (int i = 0; i<stones.size(); i++) {
//    stones[i] = stones[i] - min;
//  }
//
//  answer += min;
//
//  while (can_cross) {
//    count = 0;
//    for (int i = 0; i<stones.size(); i++) {
//      if (stones[i] <= 0) {
//        count++;
//        if (count == k) {
//          can_cross = false;
//          break;
//        }
//      }
//      else {
//        count = 0;
//      }
//    }
//    if (can_cross) {
//      for (int i = 0; i<stones.size(); i++) {
//        stones[i]--;
//      }
//      answer++;
//    }
//    else break;
//  }
//
//  return answer;
//}