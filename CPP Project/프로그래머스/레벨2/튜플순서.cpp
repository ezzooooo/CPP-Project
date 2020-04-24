//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(string s) {
//  vector<int> answer;
//  vector<vector<int>> n(500);
//
//  vector<bool> check(100001);
//
//  int comma = 0;
//  string temp[500] = {"", };
//
//  for (int i = 0; i < s.size() - 1; i++) {
//    if (s[i] == '{') {
//      for (int j = 0; j <= comma; j++) {
//        temp[j].clear();
//      }
//      comma = 0;
//      
//    }
//    else if (s[i] == '}') {
//      for (int j = 0; j <= comma; j++) {
//        n[comma].push_back(stoi(temp[j]));
//      }
//    }
//    else if (s[i] == ',') {
//      comma++;
//    }
//    else {
//      temp[comma] += s[i];
//    }
//  }
//
//  for (int i = 0; i < n.size(); i++) {
//    for (int j = 0; j < n[i].size(); j++) {
//      if (check[n[i][j]] == false) {
//        check[n[i][j]] = true;
//        answer.push_back(n[i][j]);
//      }
//    }
//  }
//
//  return answer;
//}
//
//int main() {
//
//  string s = "{{2},{2,1},{2,1,3},{2,1,3,4}}";
//
//  solution(s);
//
//  return 0;
//}