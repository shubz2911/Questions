//Question - Write a program to reverse a number
#include <iostream>
using namespace std;

int main(){
    int num,r,revnum=0;
    cout<<"Enter a number "<<endl;
    cin>>num;
    while(num!=0){
        r=num%10;
        revnum=revnum*10+r;
        num=num/10;
    }
    cout<<revnum;
    return 0;
}