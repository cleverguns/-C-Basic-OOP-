
#define _Name        "Decagon"
#define _Sides          10
#define _Color        "Red"
#define _Age          18
#define _Occupation  "Lawyer"



#include <cstdio>
#include <cstdlib>
#include <iostream>

//header
#include "Polygon.h"

using namespace std;

int main () {

Polygon details(_Name,_Sides,_Color);
 
cout << "Polygon Details: " <<endl <<details.getPolygon()<<endl;


    cout << endl;
    system("pause");
    return EXIT_SUCCESS;
}
