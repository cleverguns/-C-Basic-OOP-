#define _Legs 4
#define _Fur "Calico"
#define _Tail true 


#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "Mammal.h"

using namespace std;

int main () {


Mammal details(_Legs,_Fur,_Tail);

cout << endl << "Mammal: " <<endl <<details.getMammal()<<endl;

    cout << endl;
    system("pause");
    return EXIT_SUCCESS;
}
