#include <iostream>

int main() {

  Point p1(4.3, 7.52);
  Point p2(-17.0, 1.5);
  LineSegment ls1(p1, p2);
  double length = ls1.length();
  double slope = ls1.slope();
  std::cout << length << std::endl;
  std::cout << slope << std::endl;

return 0;
}
