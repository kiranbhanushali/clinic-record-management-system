#ifndef HEALTH_INFO_CLASS_H
#define HEALTH_INFO_CLASS_H

#include<string>
using namespace std;

class HealthInfo{

    private:
        int height;
        int weight;

    public:
        HealthInfo( int height_t , int weight_t) ;
        int getHeight() ;
        int getWeight() ;
        
};

#endif
