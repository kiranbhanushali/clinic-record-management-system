
#include "include/Address.hpp"

Address::Address(string street_t,string city_t,int pincode_t,string state_t) {
    street = street_t ;
    city = city_t ;
    pincode = pincode_t;
    state = street_t;
}
Address::Address( const  Address &a){
    street = a.street ;
    city = a.city ;
    pincode = a.pincode;
    state = a.street;

}

        string Address::getAddress() {

            return street + ", " + city +  ", " + to_string(pincode) + ", " + street ;
        }
