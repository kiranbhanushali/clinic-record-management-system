#include "include/Name.hpp"

Name::Name() {
}

Name::Name(string fName ,string lName) {
    firstName = fName;
    lastName = lName;
}
Name::Name(const Name &n){
    firstName = n.firstName;
    lastName = n.lastName;
}

string Name::getFullName() {
   return firstName+ " " + lastName;
}
