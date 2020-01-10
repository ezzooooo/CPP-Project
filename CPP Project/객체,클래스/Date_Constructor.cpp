////2020.01.06
//
//#include <iostream>
//
//class Date {
//  int year_;
//  int month_; // 1~12
//  int day_;    // 1~31
//
//public:
//  void SetDate(int year, int month, int date);
//  void AddDay(int inc);
//  void AddMonth(int inc);
//  void AddYear(int inc);
//
//  // �ش� ���� �� �ϼ��� ���Ѵ�.
//  int GetCurrentMonthTotalDays(int year, int month);
//
//  void ShowDate();
//
//  Date() {
//    std::cout << "�⺻ ������ ȣ��" << std::endl;
//    year_ = 2012;
//    month_ = 7;
//    day_ = 12;
//  }
//
//  Date(int year, int month, int day) {
//    std::cout << "���� 3���� ������ ȣ��" << std::endl;
//    year_ = year;
//    month_ = month;
//    day_ = day;
//  }
//
//  Date(int month, int day) {
//    std::cout << "���� 2���� ������ ȣ��" << std::endl;
//    year_ = 2019;
//    month_ = month;
//    day_ = day;
//  }
//};
//
//void Date::SetDate(int year, int month, int day) {
//  year_ = year;
//  month_ = month;
//  day_ = day;
//}
//
//int Date::GetCurrentMonthTotalDays(int year, int month) {
//  static int month_day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//  if (month != 2) {
//    return month_day[month - 1];
//  }
//  else if (year % 4 == 0 && year % 100 != 0) {
//    return 29;
//  }
//  else {
//    return 28;
//  }
//}
//
//void Date::AddDay(int inc) {
//  while (true) {
//    //���� ���� �� �ϼ�
//    int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);
//
//    // ���� �� �ȿ� ���´ٸ�:
//    if (day_ + inc <= current_month_total_days) {
//      day_ += inc;
//      return;
//    }
//    else {
//      // �����޷� �Ѿ�� �Ѵ�.
//      inc -= (current_month_total_days - day_ + 1);
//      day_ = 1;
//      AddMonth(1);
//    }
//  }
//}
//
//void Date::AddMonth(int inc) {
//  AddYear((inc + month_ - 1) / 12);
//  month_ = month_ + inc % 12;
//  month_ = (month_ == 12 ? 12 : month_ % 12);
//}
//
//void Date::AddYear(int inc) { year_ += inc; }
//
//void Date::ShowDate() {
//  std::cout << year_ << "�� " << month_ << "�� " << day_ << "�� �Դϴ�." << std::endl;
//}
//
//int main() {
//  Date day(2011, 3, 1);
//  Date day2 = Date();
//  Date day3(12, 31);
//
//  day.ShowDate();
//  day2.ShowDate();
//  day3.ShowDate();
//
//  day.AddDay(30);
//  day.ShowDate();
//
//  day.AddDay(2000);
//  day.ShowDate();
//
//  day.SetDate(2012, 1, 31);
//  day.AddDay(29);
//  day.ShowDate();
//
//  day.SetDate(2012, 8, 4);
//  day.AddDay(2500);
//  day.ShowDate();
//
//  return 0;
//}