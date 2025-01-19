#include <iostream>
using namespace std;

bool isPrime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
} 

int main(){
    int a;
    cout<<"Till where you wanna print prime number"<<endl;
    cin>>a;
    // for(int i=1;i<=a;i++){
    //     if(isPrime(i)==true){
    //         cout<<i<<endl;
    //     }
    // }

    int i,j;
    for( i=2;i<=a;i++){
        for (j = 2; j <=i; j++)
        {
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<j<<endl;
        }
        
    }
    return 0;
} 