#ifndef galaxy_h
#define galaxy_h

#include <vector>
#include "star.h"
#include <math.h>

class galaxy{
    double G=50;
    public:
    galaxy();
    galaxy(int num);
    void update_a(){
     for(int i=0;i<n;i++){
        v2 a1 = v2(0,0);
        for(int j=0;j<n;j++){
            if(j!=i){
                a1 = a1 + ((g[j]).pos-(g[i]).pos)*((G*((g[j]).mass))/pow(((g[j]).pos-(g[i]).pos).mod(),3));
            }
        }
        (g[i]).a = a1;

     }
}
    int n;
    vector<star> g;
};





#endif