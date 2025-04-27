#include <iostream>
#include <string>
using namespace std;
int main (){
    double side1 = 0, side2 = 0, area = 0;
    cout<<"Give me the value of the two sides of a rectangle and i will calculate the area."<<endl;
    cout <<"What is the value of the first side?"<<endl;
    cin>>side1;
    cout<<"What is the value of the second side?"<<endl;
    cin>>side2;
    area = side1*side2;
    cout <<"The area of your rectangle is: "<<area<<" square meters"<<endl;
    return 0;
}