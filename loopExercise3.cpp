//This program adds up 4 integers given by the user and prints the result on screen.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int value = 0, storage = 0;
    for (int counter = 1; counter < 5; counter++) {
        cout<<"Insert a value."<<endl;
        cin>>value;
        storage +=value;
    }
    cout<<storage;
}
