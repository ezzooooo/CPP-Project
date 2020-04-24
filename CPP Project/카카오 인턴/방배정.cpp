//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<long long> solution(long long k, vector<long long> room_number) {
//  vector<long long> answer;
//
//  vector<bool> room_stat(k + 1);
//  int min = 1;
//
//  for (int i = 0; i<room_number.size(); i++) {
//    if (room_stat[room_number[i]] == false) {
//      room_stat[room_number[i]] = true;
//      answer.push_back(room_number[i]);
//    }
//    else {
//      for (int j = min; j<k; j++) {
//        if (room_stat[j] == false) {
//          room_stat[j] = true;
//          answer.push_back(j);
//          min = j;
//          break;
//        }
//      }
//    }
//  }
//
//  return answer;
//}
//
//int main() {
//
//  long long k = 10;
//  vector<long long> room_number = { 1,7,8,9,10,3 };
//  vector<long long> answer = solution(k, room_number);
//
//  for (int i = 0; i < answer.size(); i++) {
//    cout << answer[i] << " ";
//  }
//}