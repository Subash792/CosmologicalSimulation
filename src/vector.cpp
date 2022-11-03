#include "vector_class.h"
#include <cmath>

float v2::mod(){
    return sqrt(x*x + y*y);
}

v2 operator+(v2 a, v2 b){
    v2 c;
    c.x = a.x+b.x;
    c.y = a.y+b.y;
    return c;
}
v2 operator-(v2 a, v2 b){
    v2 c;
    c.x = a.x-b.x;
    c.y = a.y-b.y;
    return c;
}

v2 operator*(v2 a,double b){
    v2 c;
    c.x = (a.x)*b;
    c.y = (a.y)*b;
    return c;
}
void print(v2 a){
    std::cout<<"("<<a.x<<","<<a.y<<")";
}
