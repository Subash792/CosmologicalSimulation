#include "galaxy.h"

galaxy::galaxy(int num){
    n = num;
    float m, x,y,vx,vy;
    for(int i=0;i<n;i++){
        cout<<"##### Star #"<<i<<" in Creation ######"<<"\n";
        cout<<"Enter mass: ";cin>>m;
        cout<<"Enter position's x coordinate: ";cin>>x;
        cout<<"Enter position's y coordinate: ";cin>>y;
        cout<<"Enter initial velocity's x component: ";cin>>vx;
        cout<<"Enter initial velocity's y component: ";cin>>vy;

       g.push_back(star(m,v2(x,y),v2(vx,vy)));
}
}
