//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//#define MAX_GAP 1000000000
//
//int gap = MAX_GAP;
//
//int main() {
//  int n;
//
//  cin >> n;
//
//  vector<vector<int>> s(n, vector<int> (n));
//  vector<int> team(n);
//
//  vector<int> link_team(n);
//  vector<int> start_team(n);
//
//  int link_team_stat = 0;
//  int start_team_stat = 0;
//
//  int first_num = -1;
//  int second_num = -1;
//
//  for (int i = 0; i < n; i++) {
//    team[i] = i;
//  }
//
//  for (int i = 0; i < n; i++) {
//    for (int j = 0; j < n; j++) {
//      cin >> s[i][j];
//    }
//  }
//  
//  do {
//    link_team.clear();
//    start_team.clear();
//    link_team_stat = 0;
//    start_team_stat = 0;
//    first_num = -1;
//    second_num = -1;
//
//    for (int i = 0; i < n; i++) {
//      if (i < n / 2) {
//        start_team.push_back(team[i]);
//      }
//      else {
//        link_team.push_back(team[i]);
//      }
//    }
//    
//    sort(start_team.begin(), start_team.end());
//    sort(link_team.begin(), link_team.end());
//
//    do {
//      if (first_num == start_team[0] && second_num == start_team[1]) { continue; }
//      else {
//        first_num = start_team[0];
//        second_num = start_team[1];
//
//        start_team_stat = start_team_stat + s[first_num][second_num];
//      }
//    } while (next_permutation(start_team.begin(), start_team.end()));
//
//    do {
//      if (first_num == link_team[0] && second_num == link_team[1]) { continue; }
//      else {
//        first_num = link_team[0];
//        second_num = link_team[1];
//
//        link_team_stat = link_team_stat + s[first_num][second_num];
//      }
//    } while (next_permutation(link_team.begin(), link_team.end()));
//
//
//    if (abs(link_team_stat - start_team_stat) <= gap) {
//      gap = abs(link_team_stat - start_team_stat);
//    }
//  } while (next_permutation(team.begin(), team.end()));
//
//  cout << gap << endl;
//
//  return 0;
//}