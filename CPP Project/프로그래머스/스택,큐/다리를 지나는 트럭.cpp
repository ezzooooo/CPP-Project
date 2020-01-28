////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//  int answer = 1;
//  int current_weight = 0;
//  int start_truck = 0;
//  int end_truck = 0;
//  int size = truck_weights.size();
//
//  vector<int> trucks;
//
//  for (int i = 0; i<size; i++) trucks.push_back(bridge_length);
//
//  while (!trucks.empty()) {
//
//    if ( (start_truck < size) && current_weight + truck_weights[start_truck] <= weight) {
//      current_weight += truck_weights[start_truck];
//      start_truck++;
//    }
//
//    for (int i = 0; i<start_truck - end_truck; i++) {
//      trucks[i]--;
//    }
//
//    if (trucks.front() == 0) {
//      trucks.erase(trucks.begin());
//      current_weight -= truck_weights[end_truck];
//      end_truck++;
//    }
//
//    answer++;
//
//  }
//
//  return answer;
//}