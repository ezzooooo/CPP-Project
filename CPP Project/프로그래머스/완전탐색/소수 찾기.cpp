#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#define MAX 9999999999
using namespace std;

bool isPrime(int number)
{
  if (number == 1)
    return false;
  if (number == 2)
    return true;
  if (number % 2 == 0)
    return false;

  bool isPrime = true;
  for (int i = 2; i <= sqrt(number); i++)
  {
    if (number% i == 0)
      return false;
  }

  return isPrime;
}

bool compare(char a, char b)
{
  return a > b;
}

int solution(string numbers) {
  int answer = 0;

  string temp;
  temp = numbers;

  sort(temp.begin(), temp.end(), compare);

  vector<bool> prime(std::stoi(temp) + 1);

  cout << stoi(temp) << endl;
  prime[0] = false;
  for (long long i = 1; i < prime.size(); i++)
  {
    prime[i] = isPrime(i);
  }
  //cout << "chk1" << endl;
  //int num = std::stoi(numbers);

  string s, sub;

  s = numbers;

  sort(s.begin(), s.end());
  set<int> primes;
  int l = s.size();
  do {
    for (int i = 1; i <= l; i++)
    {
      sub = s.substr(0, i);
      //  cout << "chk2" <<  " " << sub<<  endl;
      if (prime[std::stoi(sub)])
      {
        primes.insert(std::stoi(sub));
      }
    }
  } while (next_permutation(s.begin(), s.end()));

  //cout << primes.size();
  answer = primes.size();
  return answer;
}

int main() {

  string numbers = "111";

  int a = solution(numbers);

  cout << a << endl;

  system("pause");
}