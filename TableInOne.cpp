//Question - Write a program to print table of 2,3,4,5,6,7,8,9 in one console

#include <iostream>
using namespace std;

int main(){
    /*
    int i;
    int j;
    for(i=1;i<=9;i++){
        for(j=1;j<=10;j++){
            printf("%d X %d = %d",i,j,i*j);
            printf("\n");
        }
    }
    */
   int a=2,b=3,c=4,d=5,e=6,f=7,g=8,h=9;
   for(int i=1;i<=10;i++){
    cout<<a*i<<b*i<<c*i<<d*i<<e*i<<f*i<<g*i<<h*i<<endl;
   }

    return 0;
}