#ifndef NAME_CLASS_H
#define NAME_CLASS_H

using namespace std;
#include<string>

class Name{

    private:
        string firstName;
        string lastName;

    public:
        Name();
        Name(string fName ,string lName) ;
        Name(const Name &n);
        
        string getFullName() ;
};

#endif
