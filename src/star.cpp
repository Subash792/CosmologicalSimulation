#include "star.h"

star::star(){
   mass =0;v=v2(0,0); pos=v2(0,0);
};

star::star(float m,v2 position, v2 velocity){
    mass = m;
    pos = position;
    v = velocity;
    a =v2(0,0);
}

void star::update_v(float step,v2 prev_a){
    v = v + (a+prev_a)*(step)*0.5;
}

void star::update_pos(float step){
    pos = pos + (v*step) + (a*step*step)*0.5;
}
