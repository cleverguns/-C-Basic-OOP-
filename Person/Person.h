#include <string>
#include <sstream>

using namespace std;

class Person{

    public:
    string mName, mAddress,mGender,mOccupation;
    short mAge;

    Person(string name, string address, string gender, short age, string occupation){
    mName       =name;
    mAddress    =address;
    mGender     =gender;
    mAge        =age;
    mOccupation =occupation;

    }

string getPerson(){
    ostringstream ss;
    ss<<endl << "Name: " <<mName;
    ss<<endl << "Address: " <<mAddress;
    ss<<endl << "gender: " <<mGender;
    ss<<endl << "Age: " <<mAge;
    ss<<endl << "Occupation: " <<mOccupation;

        return ss.str();
}

};

