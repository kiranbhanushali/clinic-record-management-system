#include "include/Doctor.hpp"
#include "include/Name.hpp"

Doctor::Doctor(){

}

Doctor::Doctor(string staffId_t , string fname_t,string lname_t): name(fname_t,lname_t) {
    staffId = staffId_t ; 
}

string Doctor::getFullName(){
    return name.getFullName();
} 

string Doctor::getStaffId(){
    return staffId;
} 

Doctor::Doctor(const Doctor &d) :name(d.name){
    staffId = d.staffId;
}
