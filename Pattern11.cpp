//Question 35 - Write program to print the pattern
            // * * * * * * * * *
            // * * * *   * * * *
            // * * *       * * *
            // * *           * *
            // *               *
            
#include<iostream>
using namespace std;


int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            if(j<=4-i || j>=i+4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}