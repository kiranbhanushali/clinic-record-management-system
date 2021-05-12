#ifndef CLINIC_CLASS_H
#define CLINIC_CLASS_H

#include "Doctor.hpp"
#include "Patient.hpp"

#include<iomanip>
#include<iostream>
#include<vector>
using namespace std;
class Clinic{
private:
    vector<Patient> patientList;
    vector<Doctor> doctorList;

public:
    Clinic();
    void addPatient(Patient);
    void addDoctor(Doctor);
    void assignDoctor(string,string);
    void printData();

};

#endif
