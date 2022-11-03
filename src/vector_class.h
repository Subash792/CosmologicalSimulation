#ifndef v2_h
#define v2_h

#include <iostream>
class v2{
    public:
    float x;
    float y;
    v2(float X, float Y){x=X;y=Y;}
    v2(){}
    void operator =(v2 a){x = a.x; y=a.y;}
    bool operator ==(v2 a){
    if(x == a.x && y == a.y)
    {return 1;}
    else{ return 0;}
    }
    float mod();
};

v2 operator+(v2,v2);
v2 operator-(v2,v2);
v2 operator*(v2 a,double b);
void print(v2 a);


#endif