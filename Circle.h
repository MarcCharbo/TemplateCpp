#ifndef TEMPLATECPP_CIRCLE_H
#define TEMPLATECPP_CIRCLE_H

#include <iostream>

class Circle {
public:
  Circle( int radius, int x_coord = 0, int y_coord = 0, const char * name =
  nullptr);
  ~Circle()= default;
  // copy constructor
  Circle(const Circle& src);
  // copy assignment
  Circle& operator=(const Circle& src);

  friend Circle operator+(const Circle& lhs,const Circle& rhs);
  friend std::ostream& operator<<(std::ostream& os,const Circle& circle);
  // prefix overload operator
  Circle& operator++();
  // postfix overload operator
  Circle operator++(int);
  friend void swap(Circle& lhs, Circle& rhs);

  int getX()const{ return _x_coord;}
  int getY()const{ return _y_coord;}
  int getRadius()const{ return _radius;}
  void setX(int x);
  void setY(int y);
  void setRadius(int radius);
  const char* getName()const{ return _name;}

private:
  int _x_coord;
  int _y_coord;
  int _radius;
  const char * _name;
};


#endif //TEMPLATECPP_CIRCLE_H
