#ifndef gameManager_h
#define gameManager_h

#include "simplecpp"
#include "galaxy.h"

void simulate(float step, galaxy g, int size){
    initCanvas("stars",800,800);
    Circle arr[g.n];
    for(int i =0;i<g.n;i++){
        arr[i] = Circle(g.g[i].pos.x, g.g[i].pos.y, size);
        size -= 2;
    }
     for(float time=0;time<100;time+=step){
        
        for(int i=0;i<g.n;i++){
             g.g[i].update_pos(step);
             g.g[i].update_v(step);
             arr[i].moveTo( g.g[i].pos.x,g.g[i].pos.y);
             arr[i].penDown();
        }
        wait(0.001);
        g.update_a();
    };
}


#endif