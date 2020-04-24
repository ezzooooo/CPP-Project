//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//using namespace std;
//
//vector<vector<string>> solution(vector<vector<string>> snapshots, vector<vector<string>> transactions) {
//  vector<vector<string>> answer;
//
//  map<string, int> bank;
//  vector<bool> trans(transactions.size() + 1);
//
//  for (int i = 0; i < snapshots.size(); i++) {
//    bank.insert(make_pair(snapshots[i][0], stoi(snapshots[i][1])));
//  }
//
//  for (int i = 0; i < transactions.size(); i++) {
//    if (trans[stoi(transactions[i][0])] == true) {
//      continue;
//    }
//    else {
//      trans[stoi(transactions[i][0])] = true;
//
//      if (transactions[i][1] == "SAVE") {
//        bank[transactions[i][2]] += stoi(transactions[i][3]);
//      }
//      else if (transactions[i][1] == "WITHDRAW") {
//        bank[transactions[i][2]] -= stoi(transactions[i][3]);
//      }
//    }
//  }
//
//  for (auto itr = bank.begin(); itr != bank.end(); itr++) {
//    vector<string> temp;
//    temp.push_back(itr->first);
//    temp.push_back(to_string(itr->second));
//    answer.push_back(temp);
//  }
//
//  return answer;
//}
//
//int main() {
//  vector<vector<string>> snapshots = {
//    {"ACCOUNT1", "100"},
//    {"ACCOUNT2", "150"},
//    {"ACCOUNT10", "150"}
//  };
//
//  vector<vector<string>> tran = {
//    {"1", "SAVE", "ACCOUNT2", "100"},
//      {"2", "WITHDRAW", "ACCOUNT1", "50" },
//      {"1", "SAVE", "ACCOUNT2", "100" },
//      {"4", "SAVE", "ACCOUNT3", "500" },
//      {"3", "WITHDRAW", "ACCOUNT2", "30" },
//  };
//
//  vector<vector<string>> answer = solution(snapshots, tran);
//
//  return 0;
//}