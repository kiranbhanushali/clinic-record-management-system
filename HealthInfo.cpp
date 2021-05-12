#include "include/HealthInfo.hpp"



HealthInfo::HealthInfo( int height_t , int weight_t) {

    height = height_t;
    weight = weight_t;
}
int HealthInfo::getHeight() {
    return height;
}
int HealthInfo::getWeight(){
    return weight;
}
