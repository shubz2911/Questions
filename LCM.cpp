//Question - Write program to find LCM of two number
//Solution - HCF/GCD(a,b) * LCM(a,b) = a*b   LCM of two numbers is the smallest number which can be divided by both numbers. 
#include<iostream>
using namespace std;


int main()
{
    int a,b,HCF,LCM;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    HCF=min(a,b);
    while (HCF>0){
        if(a%HCF==0 && b%HCF==0){
            //cout<<HCF<<endl;
            break;
        }
        HCF--;
    }
    LCM=(a*b)/HCF;
    cout<<"LCM is "<<LCM<<endl;


    return 0;
}