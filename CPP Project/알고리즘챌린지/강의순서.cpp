//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//
//  int n;
//  cin >> n;
//  int max = 0;
//
//  vector<vector<int>> su(n, vector<int>(2));
//  vector<bool> check(20);
//  vector<bool> temp_check(20);
//  vector<bool> false_arr(20);
//  bool is_ok = true;
//
//  vector<int> answer;
//  vector<int> temp_answer;
//
//  for (int i = 0; i < n; i++) {
//    int num, start, end;
//    cin >> num;
//    cin >> start;
//    cin >> end;
//
//    su[i][0] = start;
//    su[i][1] = end;
//  }
//
//  for (int i = 0; i < su.size(); i++) {
//    int temp = 0;
//    check = false_arr;
//    temp_check = false_arr;
//    temp_answer.clear();
//
//    for (int j = i; j < su.size(); j++) {
//      is_ok = true;
//
//      for (int k = su[j][0]; k < su[j][1]; k++) {
//        if (check[k] == false) {
//          temp_check[k] = true;
//          //cout << k;
//        }
//        else {
//          temp_check = check;
//          is_ok = false;
//          break;
//        }
//      }
//
//      if (is_ok) {
//        temp_answer.push_back(j+1);
//        temp++;
//        check = temp_check;
//        //cout << endl;
//      }
//    }
//
//    //cout << endl << endl;
//    if (temp > max) {
//      max = temp;
//      answer = temp_answer;
//    }
//    
//  }
//
//  cout << max << endl;
//  cout << "[";
//  for (int i = 0; i < answer.size() -1 ; i++) {
//    cout << answer[i] << ",";
//  }
//  cout << answer[answer.size() - 1] << "]" << endl;
//
//  return 0;
//}