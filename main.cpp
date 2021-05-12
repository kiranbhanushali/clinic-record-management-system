#include<iostream>
using namespace std;

#include "include/Clinic.hpp"
#include "include/Doctor.hpp"
#include "include/Name.hpp"
#include "include/HealthInfo.hpp"
#include "include/Patient.hpp"

void showMenu(){
    cout<<"----Menu----"<<endl;
    cout<<"1.Add Patient"<<endl;
    cout<<"2.Add Doctor"<<endl;
    cout<<"3.Assign Doctor To Patient"<<endl;
    cout<<"4.Print Records"<<endl;
    cout<<"Default: quit"<<endl;
}

Patient input_patient(){
    cout<<"Enter Id , First Name , Last Name  , age , Gender , Street , City , Pincode , State  , Weight , Height  " <<endl;
    string patientId;
    string firstName , lastName;
    int age;
    string gender;
    string street;
    string city;
    int pincode;
    string state;
    int weight,height;
    cin>> patientId >> firstName >> lastName >> age >> gender >> street >> city >> pincode >> state >> weight>> height ;
    
    Name name(firstName , lastName);
    Address address(street , city , pincode , state);
    HealthInfo pHealth(weight,height);


    Patient p(patientId, firstName,lastName ,gender , address,weight,height) ;
    return p;
}

Doctor input_doctor(){
    cout<<"Enter staffId , First Name , Last Name "<<endl;
    string staffId , firstName, lastName;

    cin>>staffId>>firstName>>lastName;
    Doctor d(staffId,firstName , lastName);

    return d;
}
string input(string msg){
    cout<<" Enter "<<msg<<endl;
    string s ;
    cin>>s;
    return s;
}


int main(int argc , char*argv[]){
    
    Clinic c;

    int option;
    showMenu();
    cin>>option;
    while(1){
        switch(option){
            case 1:{
                Patient p = input_patient();
                c.addPatient(p);
                   }
                break;
            case 2:{
                Doctor d = input_doctor();
                c.addDoctor(d);
                   }
                break;
            case 3:{
                string patient_id = input("PatientId");
                string doctor_id = input("DoctorId");
                c.assignDoctor(patient_id,doctor_id);
                   }
                break;
            case 4:{
                c.printData();
                   }
                break;
            default:
                return 0;
        }
        showMenu();
        cin>>option;
    }
    return 0;
}
