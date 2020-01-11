#include <iostream>
#include <string>

class Employee {

  protected:
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

class Manager : public Employee {
  int year_of_service;

public:
  Manager(std::string name, int age, std::string position, int rank, int year_of_service) : Employee(name, age, position, rank), year_of_service(year_of_service)  {}

  // 복사 생성자
  Manager(const Manager& manager) : Employee(manager.name, manager.age, manager.position, manager.rank) {
    year_of_service = manager.year_of_service;
  }

  // 디폴트 생성자
  Manager() {}

  int calculate_pay() { return 200 + rank * 50 + 5 * year_of_service; }
  void print_info() {
    std::cout << name << " (" << position << ", " << age << ", " << year_of_service << "년차) ==> "
      << calculate_pay() << "만원" << std::endl;
  }
};

class EmployeeList {
  int alloc_employee;         // 할당한 총 직원 수

  int current_employee;       // 현재 직원 수
  int current_manager;        // 현재 매니저 수

  Employee **employee_list;   // 직원 데이터
  Manager **manager_list;     // 매니저 데이터

public:
  EmployeeList(int alloc_employee) : alloc_employee(alloc_employee) {
    employee_list = new Employee*[alloc_employee];
    manager_list = new Manager*[alloc_employee];

    current_employee = 0;
    current_manager = 0;
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
  void add_manager(Manager* manager) {
    if (current_manager + 1 > alloc_employee) {
      Manager **temp_list = manager_list;
      alloc_employee = alloc_employee * 2;
      manager_list = new Manager*[alloc_employee];
      manager_list = temp_list;
      delete[] temp_list;
    }
    manager_list[current_manager] = manager;
    current_manager++;
  }
  int current_employee_num() { return current_employee + current_manager; }

  void print_employee_info() {
    int total_pay = 0;
    for (int i = 0; i < current_employee; i++) {
      employee_list[i]->print_info();
      total_pay += employee_list[i]->calculate_pay();
    }
    for (int i = 0; i < current_manager; i++) {
      manager_list[i]->print_info();
      total_pay += manager_list[i]->calculate_pay();
    }
    std::cout << "총 비용 : " << total_pay << "만원 " << std::endl;
  }
  ~EmployeeList() {
    for (int i = 0; i < current_employee; i++) {
      delete employee_list[i];
    }
    for (int i = 0; i < current_manager; i++) {
      delete manager_list[i];
    }
    delete[] employee_list;
    delete[] manager_list;
  }
};

int main() {
  EmployeeList emp_list(10);
  emp_list.add_employee(new Employee("노홍철", 34, "평사원", 1));
  emp_list.add_employee(new Employee("하하", 34, "평사원", 1));

  emp_list.add_manager(new Manager("유재석", 41, "부장", 7, 12));
  emp_list.add_manager(new Manager("정준하", 43, "과장", 4, 15));
  emp_list.add_manager(new Manager("박명수", 43, "차장", 5, 13));
  emp_list.add_employee(new Employee("정형돈", 36, "대리", 2));
  emp_list.add_employee(new Employee("길", 36, "인턴", -2));

  emp_list.print_employee_info();

  return 0;
}