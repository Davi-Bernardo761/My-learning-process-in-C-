//This program takes a number from the user and prints it's first 5 multiples
#include <iostream>
#include <string>
using namespace std;
int main(){
    int number = 0;
    cout<<"Insert a value."<<endl;
    cin>>number;
    for (int multiplier = 1; multiplier <= 5; multiplier++) {
        cout<<number*multiplier<<endl;
    }
    return 0;
}
