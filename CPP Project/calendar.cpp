// 2020.01.06

#include <iostream>

/*
추후에 반복문 및 윤달 계산 추가.
*/

class Date {
  private:
    int year_;
    int month_;
    int day_;

  public:
    void SetDate(int year, int month, int day) {
      year_ = year;
      month_ = month;
      day_ = day;
    }

    void AddDay(int inc) {
      int end_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

      if (day_ + inc > end_day[month_ - 1]) {
        day_ = day_ + inc - end_day[month_ - 1];
        AddMonth(1);
      }
      else {
        day_ += inc;
      }
    }

    void AddMonth(int inc) {
      if (month_ + inc > 12) {
        month_ = month_ + inc - 12;
        AddYear(1);
      }
      else {
        month_ += inc;
      }
    }
    void AddYear(int inc) {
      year_ += inc;
    }

    void ShowDate() {
      std::cout << year_ << "년 " << month_ << "월 " << day_ << "일 입니다." << std::endl;
    }
};

int main() {

  Date date;

  date.SetDate(2020, 1, 6);
  date.ShowDate();

  date.AddDay(25);
  date.ShowDate();

  date.AddMonth(1);
  date.ShowDate();

  date.AddYear(15);
  date.ShowDate();

  return 0;
}