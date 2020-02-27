////출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> answers) {
//  vector<int> answer;
//
//  vector<int> person_1 = { 1,2,3,4,5 };
//  vector<int> person_2 = { 2,1,2,3,2,4,2,5 };
//  vector<int> person_3 = { 3,3,1,1,2,2,4,4,5,5 };
//
//  int one = 0, two = 0, three = 0;
//  int max_num = 0;
//
//  for (int i = 0; i < answers.size(); i++) {
//    if (answers[i] == person_1[i % 5]) one++;
//    if (answers[i] == person_2[i % 8]) two++;
//    if (answers[i] == person_3[i % 10]) three++;
//  }
//
//  if (one > two) {
//    if (one > three) {
//      max_num = one;
//    }
//    else {
//      max_num = three;
//    }
//  }
//  else if (two > one) {
//    if (two > three) {
//      max_num = two;
//    }
//    else {
//      max_num = three;
//    }
//  }
//  else if (three > two) {
//    if (three > one) {
//      max_num = three;
//    }
//    else {
//      max_num = one;
//    }
//  }
//  else {
//    max_num = one;
//  }
//
//  if (max_num == one) answer.push_back(1);
//  if (max_num == two) answer.push_back(2);
//  if (max_num == three) answer.push_back(3);
//  
//
//  return answer;
//}