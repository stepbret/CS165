
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP



class Rectangle {
  protected:
    double length;
    double width;

  public:
   // Rectangle();
    Rectangle(double l, double w);
    void setLength(double l);
    void setWidth(double w);
    double getLength();
    double getWidth();
    double area();
    double perimeter();
};

#endif
