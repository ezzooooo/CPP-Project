//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool cmp(string v1, string v2) {
//  if (v1.size() < v2.size()) {
//    return true;
//  }
//  return false;
//}
//
//vector<int> solution(string s) {
//  vector<int> answer;
//
//  vector<string> tuple(500);
//  string temp = "";
//  int row = 0;
//
//  for (int i = 0; i < s.size(); i++) {
//    if (s[i] == '{') {
//      continue;
//    }
//    else if (s[i] == '}') {
//      tuple[row] += temp;
//      tuple[row] += " ";
//      row++;
//      temp.clear();
//    }
//    else if (!temp.empty() && s[i] == ',') {
//      temp += " ";
//      tuple[row] += temp;
//      temp.clear();
//    }
//    else if (s[i] == ',') {
//      continue;
//    }
//    else {
//      temp += s[i];
//    }
//  }
//
//  sort(tuple.begin(), tuple.begin() + row, cmp);
//
//  answer.push_back(stoi(tuple[0]));
//
//  for (int i = 1; i < row; i++) {
//    for (int j = i - 1; j >= 0; j--) {
//      int pos = tuple[i].find(tuple[j]);
//      tuple[i].replace(pos, tuple[j].size(), "");
//      
//    }
//    answer.push_back(stoi(tuple[i]));
//    cout << tuple[i] << endl;
//  }
//
//  return answer;
//}
//
//int main() {
//  string s = "{{1,233,3},{1,233},{1,233,4,3},{233},{1,233,4,3,23},{1,233,4,3,23,33}}";
//  
//  s = s.substr(1, s.size() - 2);
//
//  vector<int> answer = solution(s);
//
//  for (int i = 0; i < answer.size(); i++) {
//    cout << answer[i] << " ";
//  }
//
//  int i;
//}