//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<int> moves) {
//  int answer = 0;
//
//  stack<int> bag;
//  int top;
//
//  for (int i = 0; i<moves.size(); i++) {
//    for (int j = 0; j<board[0].size(); j++) {
//      if (board[j][moves[i] - 1] != 0) {
//        if (bag.size() == 0) {
//          top = board[j][moves[i] - 1];
//          bag.push(top);
//        }
//        else {
//          if (top == board[j][moves[i] - 1]) {
//            answer += 2;
//            bag.pop();
//            if (bag.size() != 0) {
//              top = bag.top();
//            }
//            else {
//              top = 0;
//            }
//          }
//          else {
//            top = board[j][moves[i] - 1];
//            bag.push(top);
//          }
//        }
//        board[j][moves[i] - 1] = 0;
//        break;
//      }
//    }
//  }
//
//  return answer;
//}
//
//int main() {
//  vector<vector<int>> board = { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
//  vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
//
//  int answer = solution(board, moves);
//
//  cout << answer << endl;
//}