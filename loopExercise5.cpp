//This program takes 3 numbers from the user, calculates it's average value, and prints on the screen.
#include <iostream>
#include <string>
using namespace std;
int main(){
    double number = 0 ,storage = 0,avarage = 0;
    for (int counter = 0; counter < 3; counter++) {
        cout<<"Insert a value."<<endl;
        cin>>number;
        storage +=number;
    }
    avarage = storage/3.0;
    cout<<avarage;
    return 0;
}
