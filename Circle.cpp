//
// Created by Marc Charbonneau on 5/26/17.
//

#include "Circle.h"
Circle::Circle(int radius, int x_coord, int y_coord, const char *name):
   _radius(radius),_x_coord(x_coord),_y_coord(y_coord),_name(name)
{
}


// copy assignment
Circle &Circle::operator=(const Circle &src) {
  Circle temp(src);
  swap(*this, temp);
  return *this;
}

// copy constructor
Circle::Circle(const Circle &src):
   _x_coord(src._x_coord), _y_coord(src._y_coord),_radius(src._radius),_name
   (src._name)
{
}

Circle operator+(const Circle &lhs, const Circle &rhs) {
  auto rad = lhs._radius +rhs._radius;
  return Circle(rad,0,0, nullptr);
}

void Circle::setX(int x) {
  _x_coord = x;
}

void Circle::setY(int y) {
  _y_coord = y;
}

void Circle::setRadius(int radius) {
  _radius=radius;
}

std::ostream& operator<<(std::ostream &os, const Circle &circle) {

  if(circle.getName()== nullptr){
    os<<"name not set, Xcoord: "<<circle.getX()<< ", Ycoord: "<<circle
       .getY()<< ", radius: "<<circle.getRadius();
  }
  else{
    auto temp = circle.getName();
    os<<"name: "<<circle.getName()<< ", Xcoord: "<<circle.getX()<<
      ", Ycoord: "<<circle.getY()<< ", radius: "<<circle.getRadius();
  }

  return os;
}

Circle &Circle::operator++() {
  ++_radius;

  return *this;
}

Circle Circle::operator++(int) {
  Circle circle(this->getRadius(),this->getX(),this->getY(),this->getName());
  this->setRadius(this->getRadius()+1);
  return circle;
}

void swap(Circle& lhs, Circle& rhs){
  using std::swap;

  swap(lhs._x_coord, rhs._x_coord);
  swap(lhs._y_coord, rhs._y_coord);
  swap(lhs._radius, rhs._radius);
  swap(lhs._name, rhs._name);
}