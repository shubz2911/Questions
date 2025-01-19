//Question - Write Program to find HCF of two number.
//Solution - HCF of two number is the heighest number that divide both the number so the number which divide both the number will be less then Smaller number.
#include <iostream>
using namespace std;

int main(){
    int a,b,result;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"Enter another number"<<endl;
    cin>>b;
    result=min(a,b);
    while(result>0){
        if(a%result==0 && b%result==0){
            cout<<"HCF is "<<result<<endl;
            break;
        }
        result--;
    }

    return 0;
}