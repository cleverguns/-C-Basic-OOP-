
#define _Name        "Jay Abogado"
#define _Address     "Taguig City"
#define _Gender      "Male"
#define _Age          18
#define _Occupation  "Lawyer"



#include <cstdio>
#include <cstdlib>
#include <iostream>

//header
#include "Person.h"

using namespace std;

int main () {

Person details(_Name,_Address,_Gender,_Age,_Occupation);

cout << "Person: " <<endl <<details.getPerson()<<endl;


    cout << endl;
    system("pause");
    return EXIT_SUCCESS;
}
