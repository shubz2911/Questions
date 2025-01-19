#include <iostream>
using namespace std;

int main(){
    int num,r,n,revnum=0;
    cout<<"Enter a number to check whether it is armstrong or not "<<endl;
    cin>>num;
    n=num;
    while(num!=0){
        r=num%10;
        revnum+=(r*r*r);
        num=num/10;
    }
    if(n==revnum){
        cout<<n<<" is Armstrong"<<endl;
    }
    else{
        cout<<n<<" is Not armstrong"<<endl;
    }
    return 0;
}