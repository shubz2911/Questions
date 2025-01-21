//Question  32 - Write program to print the pattern 
                        // *
                        // * *
                        // * * *
                        // * * * *
                        // * * * * *
                        // * * * *
                        // * * * 
                        // * *
                        // *
#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<9;i++){
        for(int j=0;j<5;j++){
            if(j<=i && j<9-i){
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}