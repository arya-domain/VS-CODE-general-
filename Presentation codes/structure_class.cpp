#include <iostream>
using namespace std;

// Declairing a structure
struct Test_1{
    int x; // Data members public by default
};

// Declairing a class
class Test_2{
    int y; // Data members private by default   
};

int main(){

    Test_1 t1; // Creating an object of Test_1 structure
    t1.x = 50;
    cout<<t1.x<<endl;

    Test_2 t2; // Creating an object of Test_2 class
    t2.y = 60;
    cout<<t2.y<<endl;
    return 0;

}