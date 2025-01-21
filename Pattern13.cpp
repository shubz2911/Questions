//Question 37 - Write program to print the pattern
                    // *****
                    // ****
                    // ***
                    // **
                    // *
                    // **
                    // ***
                    // ****
                    // *****
#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<=8;i++){
        for(int j=0;j<=4;j++){
            if(j<=4-i || j<=i-4){
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}