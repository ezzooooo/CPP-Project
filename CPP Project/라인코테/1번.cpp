//#include <iostream>
//#include <vector>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int solution(string inputString) {
//  int answer = 0;
//
//  stack<int> a;
//  stack<int> b;
//  stack<int> c;
//  stack<int> d;
//
//  for (int i = 0; i < inputString.size(); i++) {
//    if (inputString[i] == '(') {
//      a.push(1);
//    } else if (inputString[i] == '{') {
//      b.push(1);
//    }
//    else if (inputString[i] == '[') {
//      c.push(1);
//    }
//    else if (inputString[i] == '<') {
//      d.push(1);
//    }
//    else if (inputString[i] == ')') {
//      if (a.size() > 0 && a.top() == 1) {
//        a.pop();
//        answer++;
//      }
//      else {
//        return -1;
//      }
//    }
//    else if (inputString[i] == '}') {
//      if (b.size() > 0 && b.top() == 1) {
//        b.pop();
//        answer++;
//      }
//      else {
//        return -1;
//      }
//    }
//    else if (inputString[i] == ']') {
//      if (c.size() > 0 && c.top() == 1) {
//        c.pop();
//        answer++;
//      }
//      else {
//        return -1;
//      }
//    }
//    else if (inputString[i] == '>') {
//      if (d.size() > 0 && d.top() == 1) {
//        d.pop();
//        answer++;
//      }
//      else {
//        return -1;
//      }
//    }
//  }
//
//  return answer;
//}
//
//int main() {
//  
//  int n = solution("<<(>)>");
//
//  cout << n;
//
//  return 0;
//}