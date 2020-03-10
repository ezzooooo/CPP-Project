//// 프로그래머스 완전탐색 소수찾기
//
//#include <string>
//#include <vector>
//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//bool is_prime(int num) {
//  if (num == 1) return false;
//  if (num == 2) return true;
//
//  for (int i = 2; i <= sqrt(num); i++) {
//    if (num % i == 0) {
//      return false;
//    }
//  }
//  return true;
//}
//
//bool compare(char a, char b) {
//  return a > b;
//}
//
//int solution(string numbers) {
//  int answer = 0;
//  string temp = numbers;
//  sort(temp.begin(), temp.end(), compare);
//
//  vector<bool> prime(stoi(temp) + 1);
//  prime[0] = false;
//
//  for (int i = 1; i < prime.size(); i++) {
//    prime[i] = is_prime(i);
//  }
//
//  set<int> primes;
//  int l = numbers.size();
//
//  do {
//    for (int i = 1; i <= l; i++) {
//      temp = numbers.substr(0, i);
//      cout << temp << endl;
//
//      if (prime[stoi(temp)]) {
//        primes.insert(stoi(temp));
//      }
//    }
//
//
//  } while (next_permutation(numbers.begin(), numbers.end()));
//
//
//
//  return primes.size();
//}
//
//int main() {
//
//  string numbers = "013";
//
//  int a = solution(numbers);
//
//  cout << a << endl;
//
//  system("pause");
//}