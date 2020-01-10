////2020.01.08

//#include <iostream>
//
//class Complex {
//  private:
//    double real, img;
//    
//  public:
//    Complex(double real, double img) : real(real), img(img) {}
//    Complex(const Complex& c) { real = c.real, img = c.img; }
//    Complex(const char* str);
//
//    Complex operator+(const Complex& c);
//    Complex operator-(const Complex& c);
//    Complex operator*(const Complex& c);
//    Complex operator/(const Complex& c);
//
//    Complex operator+(const char* str);
//    Complex operator-(const char* str);
//    Complex operator*(const char* str);
//    Complex operator/(const char* str);
//
//    Complex& operator=(const Complex& c);
//    Complex& operator+=(const Complex& c);
//    Complex& operator-=(const Complex& c);
//    Complex& operator*=(const Complex& c);
//    Complex& operator/=(const Complex& c);
//
//    friend Complex operator+(const Complex& a, const Complex& b);
//    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
//
//    double get_number(const char* str, int from, int to);
//    void println() { std::cout << "( " << real << " , " << img << " ) " << std::endl; }
//};
//Complex operator+(const Complex& a, const Complex& b) {
//  Complex temp(a.real + b.real, a.img + b.img);
//  return temp;
//}
//
//std::ostream& operator<<(std::ostream& os, const Complex& c) {
//  os << "( " << c.real << " , " << c.img << " ) ";
//  return os;
//}
//
//Complex::Complex(const char* str) {
//  // 입력 받은 문자열을 분석하여 real 부분과 img 부분을 찾아야 한다.
//  // 문자열의 꼴은 다음과 같습니다 "[부호](실수부)(부호)i(허수부)"
//  // 이 때 맨 앞의 부호는 생략 가능합니다. (생략시 + 라 가정)
//
//  int begin = 0, end = strlen(str);
//  double str_img = 0.0, str_real = 0.0;
//
//  // 먼저 가장 기준이 되는 'i'의 위치를 찾는다.
//  int pos_i = -1;
//  for (int i = 0; i != end; i++) {
//    if (str[i] == 'i') {
//      pos_i = i;
//      break;
//    }
//  }
//
//  //만일 'i' 가 없다면 이 수는 실수 뿐이다.
//  if (pos_i == -1) {
//    real = get_number(str, begin, end - 1);
//    return;
//  }
//
//  //만일 'i' 가 있다면, 실수부와 허수부를 나누어서 처리하면 된다.
//  real = get_number(str, begin, pos_i - 1);
//  img = get_number(str, pos_i + 1, end - 1);
//
//  if (pos_i >= 1 && str[pos_i - 1] == '-') img *= -1.0;
//}
//
//Complex Complex::operator+(const Complex& c) {
//  Complex temp(real + c.real, img + c.img);
//  return temp;
//}
//
//Complex Complex::operator-(const Complex& c) {
//  Complex temp(real - c.real, img - c.img);
//  return temp;
//}
//Complex Complex::operator*(const Complex& c) {
//  Complex temp(real * c.real - img * c.img, real * c.img + img * c.real);
//  return temp;
//}
//Complex Complex::operator/(const Complex& c) {
//  Complex temp(
//    (real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
//    (img * c.real - real * c.img) / (c.real * c.real + c.img * c.img));
//  return temp;
//}
//
///*
//기존에 작성한 String을 받아서 처리하는 operator지만 Complex 생성자를 간편하게 만들면 나머지 연산이 간편함!
//
//Complex Complex::operator+(const char* str) {
//// 입력 받은 문자열을 분석하여 real 부분과 img 부분을 찾아야 한다.
//// 문자열의 꼴은 다음과 같습니다 "[부호](실수부)(부호)i(허수부)"
//// 이 때 맨 앞의 부호는 생략 가능합니다. (생략시 + 라 가정)
//
//int begin = 0, end = strlen(str);
//double str_img = 0.0, str_real = 0.0;
//
//// 먼저 가장 기준이 되는 'i'의 위치를 찾는다.
//int pos_i = -1;
//for (int i = 0; i != end; i++) {
//if (str[i] == 'i') {
//pos_i = i;
//break;
//}
//}
//
////만일 'i' 가 없다면 이 수는 실수 뿐이다.
//if (pos_i == -1) {
//str_real = get_number(str, begin, end - 1);
//
//Complex temp(str_real, str_img);
//return (*this) + temp;
//}
//
////만일 'i' 가 있다면, 실수부와 허수부를 나누어서 처리하면 된다.
//str_real = get_number(str, begin, pos_i - 1 );
//str_img = get_number(str, pos_i + 1, end - 1);
//
//if (pos_i >= 1 && str[pos_i - 1] == '-') str_img *= -1.0;
//
//Complex temp(str_real, str_img);
//return (*this) + temp;
//}
//*/
//
//Complex Complex::operator+(const char* str) {
//  Complex temp(str);
//  return (*this) + temp;
//}
//Complex Complex::operator-(const char* str) {
//  Complex temp(str);
//  return (*this) - temp;
//}Complex Complex::operator*(const char* str) {
//  Complex temp(str);
//  return (*this) * temp;
//}Complex Complex::operator/(const char* str) {
//  Complex temp(str);
//  return (*this) / temp;
//}
//
//
//Complex& Complex::operator=(const Complex& c) {
//  real = c.real;
//  img = c.img;
//  return *this;
//}
//Complex& Complex::operator+=(const Complex& c) {
//  (*this) = (*this) + c;
//  return *this;
//}
//Complex& Complex::operator-=(const Complex& c) {
//  (*this) = (*this) - c;
//  return *this;
//}
//Complex& Complex::operator*=(const Complex& c) {
//  (*this) = (*this) * c;
//  return *this;
//}
//Complex& Complex::operator/=(const Complex& c) {
//  (*this) = (*this) / c;
//  return *this;
//}
//
//double Complex::get_number(const char* str, int from, int to) {
//  bool minus = false;
//  if (from > to) return 0;
//
//  if (str[from] == '-') minus = true;
//  if (str[from] == '-' || str[from] == '+') from++;
//
//  double num = 0.0;
//  double decimal = 1.0;
//
//  bool integer_part = true;
//  for (int i = from; i <= to; i++) {
//    if (isdigit(str[i]) && integer_part) {
//      num *= 10.0;
//      num += (str[i] - '0');
//    }
//    else if (str[i] == '.') integer_part = false;
//    else if (isdigit(str[i]) && !integer_part) {
//      decimal /= 10.0;
//      num += ((str[i] - '0') * decimal);
//    }
//    else break;
//  }
//
//  if (minus) num *= -1.0;
//
//  return num;
//}
//
//int main() {
//  Complex a(0.0, 0.0);
//  a = "-1.1 + i3.923" + a;
//  
//  std::cout << "a 의 값은 : " << a << " 이다. " << std::endl;
//
//
//  return 0;
//}