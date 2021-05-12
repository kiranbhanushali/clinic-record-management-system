#ifndef PATIENT_CLASS_H
#define PATIENT_CLASS_H

#include<string>
#include "Name.hpp"
#include "HealthInfo.hpp"
#include "Address.hpp"
#include "Doctor.hpp"
using namespace std;

class Patient{

    private:
        
        string patientId;
        Name name;
        int age;
        string gender;
        Address address;
        HealthInfo pHealth;
        Doctor doctor;

    public:
        Patient(string patientId_t, string fname_t,string lname_t , string gender_t , Address address_t,int weight_t,int height_t) ;

        string getPatientId() ;
        int getWeight() ;
        int getHeight() ;
        string getFullName() ;
        string getGender() ;
        
        int getAge() ;

        Address getAddress() ;
        Doctor getDoctor() ;
        void attendBy(Doctor d) ;

};

#endif
