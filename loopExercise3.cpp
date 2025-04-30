#include <iostream>
#include <string>
using namespace std;
int main(){
    int value, storage;
    for (int counter = 0; counter < 5; counter++) {
        cout<<"Insert a value."<<endl;
        cin>>value;
        storage +=value;
    }
    cout<<storage;
}