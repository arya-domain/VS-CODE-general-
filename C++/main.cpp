#include<iostream>
using namespace std;


class Wall 
{
  private:
    double length, height;
  public:
    // initialize variables with parameterized constructor
    Wall(double len, double hgt) 
    {
      length = len;
      height = hgt;
    }
    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj) 
    {
      length = obj.length;
      height = obj.height;
    }
    double calculateArea() 
    {
      return length * height;
    }
   
};
int main()
{
  Wall z;
  //Create an object of Wall Class
  Wall wall1(100.2, 45.6);
  //copy contents of wall1 to wall2
  Wall wall2 = wall1;
  //print areas of wall1 and wall2
  cout << "Area of Wall1:" << wall1.calculateArea() << endl;
  cout << "Area of Wall 2:" << wall2.calculateArea();
}