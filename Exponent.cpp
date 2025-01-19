//Question - Wite a program to find exponent of entered number. 
#include <iostream>
using namespace std;

int power(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power(m*m,n/2);
    }
    else{
        return m*power(m*m,(n-1)/2);
    }
}

int main(){
    int a=4;
    cout<<power(a,3)<<endl;
    return 0;
}