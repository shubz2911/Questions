//Question - Write a program to check whether entred number is palindrome or not
#include <iostream>
using namespace std;

int main(){
    int num,cnum,r,revnum=0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cnum=num;
    while(cnum!=0){
        r=cnum%10;
        revnum=revnum*10+r;
        cnum=cnum/10;
    }
    if(num==revnum){
        cout<<num<<" is palindrome"<<endl;
    }
    else{
    cout<<num<<" is not palindrome"<<endl;
    }
    
    return 0;
}