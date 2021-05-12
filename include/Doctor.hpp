#ifndef DOCTOR_CLASS_H
#define DOCTOR_CLASS_H

#include<string>
#include "Name.hpp"
using namespace std;
class Doctor{

    private:
        string staffId;
        Name name;

    public:
        Doctor() ;
        Doctor(string staffId_t , string fname_t,string lname_t) ;
        Doctor(const Doctor & d) ;

string getFullName() ;
        string getStaffId() ;
};

#endif
