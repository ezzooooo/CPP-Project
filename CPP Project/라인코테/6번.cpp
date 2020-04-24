//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//
//using namespace std;
//
//vector<string> solution(vector<string> directory, vector<string> command) {
//  vector<string> answer;
//  string temp;
//  set<string> dir;
//
//  for (int i = 0; i < directory.size(); i++) {
//    dir.insert(directory[i]);
//  }
//
//  for (int i = 0; i < command.size(); i++) {
//    if (command[i][0] == 'm') {
//      temp = command[i].substr(6);
//
//      dir.insert(temp);
//    }
//    else if (command[i][0] == 'c') {
//      temp = command[i].substr(3);  
//      vector<string> temp_v;
//
//      int n = temp.find(" ");
//      string temp2 = temp.substr(0, n); // "/a/b"
//      temp = temp.substr(n+1);          // "/"
//      string temp3 = "";
//
//      for (auto i = dir.begin(); i != dir.end(); i++) {
//        bool parent_check = true;
//
//        for (int j = 0; j<temp2.size(); j++) {
//          if (temp2[j] == (*i)[j]) continue;
//          else {
//            parent_check = false;
//            break;
//          }
//        }
//
//        if (parent_check) {
//            int n = (*i).rfind("/");
//            //cout << (*i) << ", " << n << endl;
//            temp3 = temp3 + (*i).substr(n);
//            //cout << temp3 << endl;
//            temp_v.push_back(temp3);
//        }
//      }
//
//      for (int i = 0; i < temp_v.size(); i++) {
//        if (temp == "/") {
//          dir.insert(temp_v[i]);
//        }
//        else {
//          dir.insert(temp + temp_v[i]);
//        }
//      }
//    }
//
//    else if (command[i][0] == 'r') {
//      temp = command[i].substr(3);
//      vector<string> temp_v;
//
//      for (auto i = dir.begin(); i != dir.end(); i++) {
//        bool parent_check = true;
//
//        for(int j=0; j<temp.size(); j++) {
//          if (temp[j] == (*i)[j]) continue;
//          else {
//            parent_check = false;
//            break;
//          }
//        }
//        if (parent_check) {
//          temp_v.push_back(*i);
//        }
//      }
//
//      for (int i = 0; i < temp_v.size(); i++) {
//        dir.erase(temp_v[i]);
//      }
//    }
//  }
//
//  for (auto i = dir.begin(); i != dir.end(); i++) {
//    cout << *i << endl;
//  }
//
//  return answer;
//}
//
//int main() {
//  vector<string> dir = {
//    "/"
//  };
//
//  vector<string> com = {
//    "mkdir /a",
//    "mkdir /a/b",
//    "mkdir /a/b/c",
//    "cp /a/b /",
//    "rm /a/b/c"
//  };
//
//  vector<string> a = solution(dir, com);
//
//  return 0;
//}