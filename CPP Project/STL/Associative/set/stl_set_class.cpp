//#include <iostream>
//#include <set>
//#include <string>
//
//template <typename T>
//void print_set(std::set<T>& s) {
//  // ���� ��� ���ҵ��� ����ϱ�
//  for (const auto& elem : s) {
//    std::cout << elem << " " << std::endl;
//  }
//}
//class Todo {
//  int priority; // �߿䵵, �������� ���Ѱ�
//  std::string job_desc;
//
//  public:
//    Todo(int priority, std::string job_desc) : priority(priority), job_desc(job_desc) {}
//
//    bool operator<(const Todo& td) const{
//      if (priority == td.priority) {
//        return job_desc < td.job_desc;
//      }
//      return priority > td.priority;
//    }
//
//    friend std::ostream& operator<<(std::ostream& o, const Todo& td);
//};
//
//std::ostream& operator<<(std::ostream& o, const Todo& td) {
//  o << "[ �߿䵵 : " << td.priority << "] " << td.job_desc;
//  return o;
//}
//
//int main() {
//  std::set<Todo> todos;
//
//  todos.insert(Todo(1, "�� �ϱ�"));
//  todos.insert(Todo(2, "���м��� �ϱ�"));
//  todos.insert(Todo(3, "ģ���� ����"));
//  todos.insert(Todo(1, "������Ʈ �ϱ�"));
//  todos.insert(Todo(2, "��ȭ����"));
//
//  print_set(todos);
//
//  std::cout << "---------------" << std::endl;
//  std::cout << "������ ���´ٸ�!" << std::endl;
//  todos.erase(todos.find(Todo(2, "���м��� �ϱ�")));
//  print_set(todos);
//  
//  return 0;
//}