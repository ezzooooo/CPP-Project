#include <iostream>
#include <string>

class EmployeeList {
  int alloc_employee;         // �Ҵ��� �� ���� ��
  int current_employee;       // ���� ���� ��
  Employee **employee_list;   // ���� ������

  public:
    EmployeeList(int alloc_employee) : alloc_employee(alloc_employee) {
      employee_list = new Employee*[alloc_employee];
      current_employee = 0;
    }

    void add_employee(Employee* employee) {
      //�Ҵ緮�� �ʰ��� ��� ���� �Ҵ緮�� 2�踦 �Ҵ�.
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

  std::string position; // ��å (�̸�)
  int rank;             // ���� (���� Ŭ ���� ���� ����)

  public:
    Employee(std::string name, int age, std::string position, int rank) :
      name(name), age(age), position(position), rank(rank) {}

    // ���� ������
    Employee(const Employee& employee) {
      name = employee.name;
      age = employee.age;
      position = employee.position;
      rank = employee.rank;
    }

    // ����Ʈ ������
    Employee() {}

    void print_info() {
      std::cout << name << " (" << position << ", " << age << ") ==> "
        << calculate_pay() << "����" << std::endl;
    }
    int calculate_pay() { return 200 + rank * 50; }
};

int main() {

  return 0;
}