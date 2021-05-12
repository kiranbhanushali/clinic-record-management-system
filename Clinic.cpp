#include "include/Clinic.hpp"



Clinic::Clinic(){}
void Clinic::addPatient(Patient patient){
    patientList.push_back(patient);
}
void Clinic::addDoctor(Doctor doctor){
    doctorList.push_back(doctor);
}
void Clinic::assignDoctor(string patient_id,string doctor_id){
    for(Patient p : patientList){
        if(p.getPatientId() == patient_id){

            for( Doctor d : doctorList){

                if( d.getStaffId() == doctor_id){
                    p.attendBy(d);
                    return ;
                }
            } 
            cout<<" No Doctor entery here ! "<<endl;
            break;
        }
    }
    cout<<"No patient entry here ! "<<endl;
}


void Clinic::printData(){
    cout << "----Records----" << endl;
    cout<< "================================" << endl ;
    cout<<  setw(10) << "PatientID" << setw(15) << "Name" << setw(5) << "Age" << setw(8) << "Gender" << setw(37) << "Address" << setw(8) << "Height" << setw(8) << "Weight" << setw(20) << "Attend By" << endl <<  setw(10) << "---------" << setw(15) << "----" << setw(5) << "---" << setw(8) << "------" << setw(37) << "-------" << setw(8) << "------" << setw(8) << "------" << setw(20) << "---------" << endl;

    for( Patient p : patientList ) {
        cout<<endl;
        cout <<  setw(10) << p.getPatientId() << setw(15) << p.getFullName() << setw(5) << p.getAge() << setw(8) << p.getGender() << setw(37) << p.getAddress().getAddress() << setw(8) << p.getHeight() << setw(8) << p.getWeight() << "Dr. " << p.getDoctor().getFullName() << endl;

    }
    

}
