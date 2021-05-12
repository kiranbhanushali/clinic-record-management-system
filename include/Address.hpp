#ifndef ADDRESS_CLASS_H
#define ADDRESS_CLASS_H

#include<string>
using namespace std;

class Address{

    private:
        string street;
        string city;
        int pincode;
        string state;

    public:
        Address(string street_t,string city_t,int pincode_t,string state_t) ;

        Address(const Address & a) ;
        string getAddress() ;
};

#endif
