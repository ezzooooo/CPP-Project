//#include <string>
//#include <vector>
//#include <iostream>
//#include <set>
//using namespace std;
//
//vector<int> solution(int n, vector<string> words) {
//  vector<int> answer;
//  set<string> last_words;
//  vector<int> count(n);
//
//
//  int turn = 0;
//  bool is_end = false;
//  char last_char = words[0][0];
//
//  for (int i = 0; i < words.size(); i++) {
//    count[turn]++;
//    
//    if (last_words.find(words[i]) != last_words.end() || last_char != words[i][0]) {
//      is_end = true;
//      break;
//    }
//
//    turn = (turn + 1) % n;
//    last_char = words[i][words[i].length() - 1];
//    last_words.insert(words[i]);
//  }
//
//  if (is_end) {
//    answer.push_back(turn + 1);
//    answer.push_back(count[turn]);
//  }
//  else {
//    answer.push_back(0);
//    answer.push_back(0);
//  }
//
//  return answer;
//}
//
//int main() {
//
//  int n = 2;
//  vector<string> words = {
//    "hello", "one", "even", "never", "now", "world", "draw"
//  };
//
//  vector<int> a = solution(n, words);
//
//  cout << a[0] << "," << a[1] << endl;
//
//  return 0;
//}