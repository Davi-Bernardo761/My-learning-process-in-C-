//This program receives the lenghts of 3 sides of a triangle and tells the user which type of triangle it is.
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"This program will receive the value of each side of a triangle and inform the user if the triangle is scalene,equilateral or isosceles."<<endl;
    double side1 = 0, side2 = 0, side3 = 0;
    cout<<"What is the value of the first side?"<<endl;
    cin>>side1;
    cout<<"What is the value of the second side?"<<endl;
    cin>>side2;
    cout<<"What is the value of the third side?"<<endl;
    cin>>side3;
    if (side1 + side2 <=side3 || side2 + side3 <=side1 || side3 + side1 <=side2){
        cout<<"This triangle is impossible."<<endl;
        exit(0);
    } 
    else if (side1 == side2 && side2 == side3 && side1 == side3)
    {
        cout<<"This triangle is equilateral."<<endl;
    }
    else if (side1 != side2 && side2 != side3 && side1 != side3)
    {
        cout<<"This triangle is scalene."<<endl;
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        cout<<"The triangle is isosceles."<<endl;
    }
    return 0;
}
