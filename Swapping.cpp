//Question - Write a program for swapping two number

#include <iostream>
using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int a=8;
    int b=10;
    /*
    printf("%d,%d",a,b);
    printf("\n");
    swap(a,b);
    printf("%d,%d",a,b);
    */

    //Swapping without 3rd variable 
    printf("%d,%d",a,b);
    printf("\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d,%d",a,b);
    return 0;
}