//Question - Write a program to find whether a year is leap year or not 
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter year you wanna check for leap year"<<endl;
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
            cout<<"Leap Year"<<endl;
            }
            else{
                cout<<"Not Leap Year"<<endl;
            }
        }
        else{
            cout<<"Leap Year"<<endl;
        }
    }
    else{
        cout<<"Not Leap Year"<<endl;
    }
    

    return 0;
}