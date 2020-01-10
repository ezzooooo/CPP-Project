#include <iostream>
#include <string>

class EmployeeList {
  int alloc_employee;         // 할당한 총 직원 수
  int current_employee;       // 현재 직원 수
  Employee **employee_list;   // 직원 데이터

  public:
    EmployeeList(int alloc_employee) : alloc_employee(alloc_employee) {
      employee_list = new Employee*[alloc_employee];
      current_employee = 0;
    }

    void add_employee(Employee* employee) {
      //할당량이 초과할 경우 현재 할당량의 2배를 할당.
      if (current_employee + 1 > alloc_employee) {
        Employee **temp_list = employee_list;
        alloc_employee = alloc_employee * 2;
        employee_list = new Employee*[alloc_employee];
        employee_list = temp_list;
        delete[] temp_list;
      }
      employee_list[current_employee] = employee;
      current_employee++;
    }
};

class Employee {
  std::string name;
  int age;

  std::string position; // 직책 (이름)
  int rank;             // 순위 (값이 클 수록 높은 순위)

  public:
    Employee(std::string name, int age, std::string position, int rank) :
      name(name), age(age), position(position), rank(rank) {}

    // 복사 생성자
    Employee(const Employee& employee) {
      name = employee.name;
      age = employee.age;
      position = employee.position;
      rank = employee.rank;
    }

    // 디폴트 생성자
    Employee() {}

    void print_info() {
      std::cout << name << " (" << position << ", " << age << ") ==> "
        << calculate_pay() << "만원" << std::endl;
    }
    int calculate_pay() { return 200 + rank * 50; }
};

int main() {

  return 0;
}