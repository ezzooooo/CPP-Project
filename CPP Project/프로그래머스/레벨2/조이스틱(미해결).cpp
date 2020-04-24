//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(string name) {
//  int answer = -1;
//  int n = name.length();
//  char A = 'A';
//  int right = 0;
//  int left = 0;
//  int cur = 0;
//
//  string first;
//
//  for (int i = 0; i < n; i++) {
//    first[i] = 'A';
//  }
//  
//  while (name != first) {
//    for (int i = cur, j = 0; j < n; j++) {
//      if (i < n) {
//        i++;
//      }
//      else {
//        i = 0;
//      }
//
//      if (name[i] == first[i]) {
//        right++;
//      }
//      else {
//        break;
//      }
//    }
//
//    for (int i = cur, j = 0; j < n; j++) {
//      if (i > 0) {
//        i--;
//      }
//      else {
//        i = n - 1;
//      }
//
//      if (name[i] == first[i]) {
//        left++;
//      }
//      else {
//        break;
//      }
//    }
//
//    if (right >= left) {
//      for (int i = 0; i < left; i++) {
//        if (cur < n) cur++;
//        else cur = 0;
//      }
//    }
//    else {
//      for (int i = 0; i < left; i++) {
//        if (cur > 0) cur--;
//        else cur = n - 1;
//      }
//    }
//
//    if (abs(name[cur] - A) > 13) {
//      cout << 26 - abs(name[cur] - A) << endl;
//      answer += 26 - abs(name[cur] - A);
//    }
//    else {
//      cout << abs(name[cur] - A) << endl;
//      answer += abs(name[cur] - A);
//    }
//  }
//  
//  return answer;
//}
//
//int main() {
//
//  string name = "ZAZAAAAAAAZ";
//
//  cout << solution(name) << endl;
//
//  return 0;
//}