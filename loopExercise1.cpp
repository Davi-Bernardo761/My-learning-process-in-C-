//The objective of this code is to count one unity up to the number given by the user.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int number;
    cout<<"Give me a number."<<endl;
    cin>>number;
    for (int counter = 0; counter <= number; counter++ ) {
        cout<<counter<<endl;
    }
    return 0;
}
