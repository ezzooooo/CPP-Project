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
//  // 점 100 개를 보관하는 배열
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
//    // 모든 점들 간의 거리를 출력하는 함수
//    void PrintDistance();
//
//    // 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수 입니다.
//    // 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
//    // 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
//    // 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
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