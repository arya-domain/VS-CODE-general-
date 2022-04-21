#include <iostream>
using namespace std;

class MyClass 
{
  public:    
    int x = 0 ;   // Public attribute
  private:   
    int y = 0  ;   // Private attribute
  protected:
    int z = 0;  //Protected attribute
  public:
  int display ()
  {
    cout << x << " " <<  y << " " << z;
    return 0;
  }
};

int main() 
{
  MyClass myObj;

  myObj.x = 25;    // Allowed (public)
  // myObj.y = 50;   // Not allowed (private)
  // myObj.z = 20;   // Not allowed (protected)

  myObj.display();
  return 0;
}
