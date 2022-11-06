#ifndef star_h
#define star_h

#include "vector_class.h"
using namespace std;
class star{
   public:
   star();
   star(float m,v2 position, v2 velocity);
   void update_v(float,v2);
   void update_pos(float);
   v2 pos;
   v2 v;
   v2 a;
   float mass;
   string name;
   string color;

};
#endif