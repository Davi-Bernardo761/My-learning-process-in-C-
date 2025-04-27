#include <string>
#include <iostream>
using namespace std;
int main(){
    string name;
    double mass = 0;
    int age = 0;
    char firstLetter;
    bool american;
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"What is your weight?"<<endl;
    cin>>mass;
    cout<<"What is your age?"<<endl;
    cin>>age;
    cout<<"What is the first letter of your name?"<<endl;
    cin>>firstLetter;
    cout<<"Are you american?(answer whit true or false)"<<endl;
    cin>>american;
    cout<<"Your name is "<<name<<endl;
    cout<<"Your weight is "<<mass<<endl;
    cout<<"Your age is "<<age<<endl;
    cout<<"The first letter of your name is "<<firstLetter<<endl;
    if (american) {
        cout<<"You are american."<<endl;
    }
    else
    {
        cout<<"You are not american."<<endl;
    }
    return 0;
}