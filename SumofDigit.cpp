//Question-Write program to find out sum of digits of a entered number
#include <iostream>
using namespace std;

int main(){
    int a,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>a;
    while(a!=0){
            sum+=a%10;
            a=a/10;
    }
    cout<<sum;
    return 0;
}