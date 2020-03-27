//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//#define PLUS 0
//#define MINUS 1
//#define MUL 2
//#define DIV 3
//#define MIN_NUM -1000000000
//#define MAX_NUM 1000000000
//
//int main() {
//
//  int n;
//  int op;
//  int max_num = MIN_NUM;
//  int min_num = MAX_NUM;
//  int cal_num = 0;
//
//  cin >> n;
//
//  vector<int> an(n);
//  vector<int> cal;
//
//  for (int i = 0; i < n; i++) {
//    cin >> an[i];
//  }
//
//  for (int i = 0; i < 4; i++) {
//    cin >> op;
//    for (int j = 0; j < op; j++) {
//      switch (i) {
//      case 0:
//        cal.push_back(PLUS);
//        break;
//      case 1:
//        cal.push_back(MINUS);
//        break;
//      case 2:
//        cal.push_back(MUL);
//        break;
//      case 3:
//        cal.push_back(DIV);
//      }
//    }
//  }
//
//  sort(cal.begin(), cal.end());
//
//  do {
//    cal_num = an[0];
//    for (int i = 0; i < cal.size(); i++) {
//      switch (cal[i]) {
//      case 0:
//        cal_num = cal_num + an[i + 1];
//        break;
//      case 1:
//        cal_num = cal_num - an[i + 1];
//        break;
//      case 2:
//        cal_num = cal_num * an[i + 1];
//        break;
//      case 3:
//        cal_num = cal_num / an[i + 1];
//      }
//    }
//    if (cal_num >= max_num) {
//      max_num = cal_num;
//    }
//    if (cal_num <= min_num) {
//      min_num = cal_num;
//    }
//  } while (next_permutation(cal.begin(), cal.end()));
//
//  cout << max_num << endl;
//  cout << min_num << endl;
//
//  return 0;
//}