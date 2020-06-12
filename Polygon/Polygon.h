#include <string>
#include <sstream>

using namespace std;

class Polygon{

    public:
    string mName, mColor;
    short mSides;

    Polygon(string name, short sides, string color){
    mName       =name;
    mSides      =sides;
    mColor     =color;

    }

string getPolygon(){
    ostringstream ss;
    ss<<endl << "Name: " <<mName;
    ss<<endl << "Number of Sides: " <<mSides;
    ss<<endl << "color: " <<mColor;
    

        return ss.str();
}

};

