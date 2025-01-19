//Question - Write a program to find factorial 
#include <iostream>
using namespace std;

//Function to calculate factorial
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    int i;
    int a=n;
    for(i=1;i<n;i++){
        a*=i;
    }
}

int main(){
    int n,i,a;
    cout<<"Enter a number"<<endl;
    cin>>n;
    a=n;
    for(i=1;i<n;i++){
        cout<<a<<"X"<<i<<"="<<a*i<<endl;
        a*=i;
    }
    printf("%d factorial is %d",n,a);
    return 0;
}