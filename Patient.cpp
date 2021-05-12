
#include "include/Patient.hpp"



Patient::Patient(string patientId_t, string fname_t,string lname_t , string gender_t , Address address_t,int weight_t,int height_t) : name(fname_t,lname_t),pHealth(weight_t,height_t),address(address_t){
    patientId =  patientId_t;
    gender =gender_t;

        } 


string Patient::getPatientId() 
{
    return patientId;
}
int Patient::getWeight() 
{
    return pHealth.getWeight();
}
int Patient::getHeight() 
{
    return pHealth.getHeight();
}
string Patient::getFullName() 
{
    return name.getFullName();
}
string Patient::getGender() 
{
    return gender;
}

int Patient::getAge() 
{
    return age;
}

Address Patient::getAddress() 
{
    return address;
}
Doctor Patient::getDoctor() 
{
    return doctor;
}
void Patient::attendBy(Doctor d) 
{
    doctor = d;
}

