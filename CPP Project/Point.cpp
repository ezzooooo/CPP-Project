////2020.01.06
//
//#include <iostream>
//
//class Point {
//  int x, y;
//
//  public:
//    Point(int pos_x, int pos_y) {
//      x = pos_x;
//      y = pos_y;
//    }
//    Point(const Point& point_) {
//      x = point_.x;
//      y = point_.y;
//    }
//    void SetXY(int pos_x, int pos_y);
//    int GetX();
//    int GetY();
//};
//
//void Point::SetXY(int pos_x, int pos_y) {
//  x = pos_x;
//  y = pos_y;
//}
//
//int Point::GetX() {
//  return x;
//}
//
//int Point::GetY() {
//  return y;
//}
//
//class Geometry {
//  // �� 100 ���� �����ϴ� �迭
//  Point* point_array[100];
//  int point_num;
//
//  public:
//    Geometry(Point **point_list) {
//      point_num = 0;
//      while (point_list != NULL) {
//        point_array[point_num] = point_list[point_num];
//        point_num++;
//      }
//    }
//
//    Geometry() {
//      point_num = 0;
//    }
//
//    void AddPoint(const Point &point);
//
//    // ��� ���� ���� �Ÿ��� ����ϴ� �Լ�
//    void PrintDistance();
//
//    // ��� ������ �մ� ������ ���� ������ ���� ������ִ� �Լ� �Դϴ�.
//    // ���������� ������ �� ���� �մ� ������ �������� f(x,y) = ax+by+c = 0
//    // �̶�� �� �� ������ �ٸ� �� �� (x1, y1) �� (x2, y2) �� f(x,y)=0 �� ��������
//    // ���� �ٸ� �κп� ���� ������ f(x1, y1) * f(x2, y2) <= 0 �̸� �˴ϴ�.
//    void PrintNumMeets();
//};
//
//void Geometry::AddPoint(const Point &point) {
//  point_array[point_num] = new Point(point);
//  point_num++;
//}
//
//void Geometry::PrintDistance() {
//  for (int i = 1; i < point_num; i++) {
//    std::cout << "X1 : " << point_array[i]->GetX() << " Y1 : " << point_array[i]->GetY() << std::endl;
//    std::cout << sqrt(pow(point_array[i]->GetX() - point_array[i - 1]->GetX(), 2) + pow(point_array[i]->GetY() - point_array[i - 1]->GetY(), 2)) << std::endl;
//  }
//}
//
//int main() {
//  Geometry geometry;
//
//  geometry.AddPoint(Point(2, 3));
//  geometry.AddPoint(Point(3, 3));
//  geometry.AddPoint(Point(4, 5));
//  geometry.AddPoint(Point(8, 6));
//
//  geometry.PrintDistance();
//  
//
//  return 0;
//}