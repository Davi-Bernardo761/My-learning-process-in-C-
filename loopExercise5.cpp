//This program takes 3 numbers from the user and calculates it's avarage value.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int number = 0 ,storage = 0,avarage = 0;
    for (int counter = 0; counter < 3; counter++) {
        cout<<"Insert a value."<<endl;
        cin>>number;
        storage +=number;
    }
    avarage = storage/3.0;
    cout<<avarage;
    return 0;
}
