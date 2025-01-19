//Question - Write program to Print Fibonacci Series 
#include <iostream>
using namespace std;

//Function to print fibonacci series
int Fibonacci(int a){
    if(a<=1){
        return a;
    }
    return Fibonacci(a-2)+Fibonacci(a-1);
    }

int main(){
    int n;
    cout<<"How many fibonacci number you want to print";
    cin>>n;
    int x=0;
    int y=1;
    printf("%d,%d,",x,y);
    for(int i=1;i<n;i++){
        int z=x+y;
        printf("%d,",z);
        x=y;
        y=z;
    }

    cout<<Fibonacci(n)<<endl;
    return 0;
}