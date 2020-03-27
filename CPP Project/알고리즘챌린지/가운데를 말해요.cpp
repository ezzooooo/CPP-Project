//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int main() {
//
//  int n;
//
//  cin >> n;
//
//  vector<int> nums(n);
//  vector<int> say_nums(n);
//  priority_queue<int> max_heap;
//  priority_queue<int, vector<int>, greater<int>> min_heap;
//
//  for (int i = 0; i < n; i++) {
//    cin >> nums[i];
//  }
//
//  max_heap.push(nums[0]);
//  say_nums.push_back(nums[0]);
//
//  for (int i = 1; i < n; i++) {
//
//    if (nums[i] < max_heap.top()) {
//      max_heap.push(nums[i]);
//    }
//    else {
//      min_heap.push(nums[i]);
//    }
//    
//    if (max_heap.size() < min_heap.size()) {
//      max_heap.push(min_heap.top());
//      min_heap.pop();
//    }
//    else if (max_heap.size() > min_heap.size() + 1) {
//      min_heap.push(max_heap.top());
//      max_heap.pop();
//    }
//
//    say_nums[i] = max_heap.top();
//  }
//
//  for (int i = 0; i < n; i++) {
//    cout << say_nums[i] << endl;
//  }
//
//  return 0;
//}