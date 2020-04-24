//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//bool cmp(pair<string, int> a1, pair<string, int> a2) {
//  if (a1.second > a2.second) {
//    return true;
//  }
//  else if (a1.second == a2.second) {
//    if (a1.first < a2.first) {
//      return true;
//    }
//    else {
//      return false;
//    }
//  }
//  return false;
//}
//
//vector<string> solution(vector<vector<string>> dataSource, vector<string> tags) {
//  vector<string> answer;
//
//  map<string, vector<string>> tag_docs;
//  map<string, int> result;
//
//  vector<int> tag_count(dataSource.size() + 1);
//
//  for (int i = 0; i < dataSource.size(); i++) {
//    for (int j = 1; j < dataSource[i].size(); j++) {
//      tag_docs[dataSource[i][j]].push_back(dataSource[i][0]);
//    }
//  }
//
//  for (int i = 0; i < tags.size(); i++) {
//    //cout << tags[i] << ": ";
//    for (auto j = tag_docs[tags[i]].begin(); j != tag_docs[tags[i]].end(); j++) {
//      //cout << *j << ", ";
//
//      auto itr = result.find(*j);
//
//      if (itr != result.end()) {
//        result[*j] = result[*j] + 1;
//      }
//      else {
//        result.insert(make_pair(*j, 1));
//      }
//    }
//    //cout << endl;
//  }
//
//  vector<pair<string, int>> temp_v;
//
//  for (auto itr = result.begin(); itr != result.end(); itr++) {
//    temp_v.push_back(make_pair(itr->first, itr->second));
//    //cout << itr->first << ", " << itr->second << endl;
//  }
//
//  sort(temp_v.begin(), temp_v.end(), cmp);
//
//  /*for (auto itr = temp_v.begin(); itr != temp_v.end(); itr++) {
//    cout << itr->first << ", " << itr->second << endl;
//  }*/
//
//  for (int i = 0; i < temp_v.size(); i++) {
//    if (i == 10) {
//      break;
//    }
//    answer.push_back(temp_v[i].first);
//  }
//
//  return answer;
//}
//
//int main() {
//  vector<vector<string>> doc = {
//    {"doc1", "t1", "t2", "t3" },
//  {"doc2", "t0", "t2", "t3" },
//  {"doc3", "t1", "t6", "t7" },
//  {"doc4", "t1", "t2", "t4" },
//  {"doc5", "t6", "t100", "t8" },
//  { "doac1", "t1", "t2", "t5" },
//  { "docf1", "t1", "t2", "t3", "t5" },
//  { "dodc1", "t2", "t3" },
//  { "dogc1", "t1", "t2", "t3" },
//  { "adogc1", "t1", "t2", "t3" },
//  { "dohc1", "t1", "t2", "t3" },
//  { "docc1", "t2", "t3" },
//  { "adoc1", "t1", "t2", "t3" },
//  };
//
//  vector<string> tags = { "t1", "t2", "t3", "t5" };
//
//  vector<string> answer = solution(doc, tags);
//
//  for (int i = 0; i < answer.size(); i++) {
//    cout << answer[i] << " ";
//  }
//
//  return 0;
//}