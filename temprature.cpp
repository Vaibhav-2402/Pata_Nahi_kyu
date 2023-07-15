// demonstarates the use of cin

#include<iostream>
using namespace std;
int main()
{
    int f;
    int c;
    cout<<"Enter the temprature in farenheit \n";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"Equivalent temprature in celcius is "<<c<<'\n';
    return 0;

}