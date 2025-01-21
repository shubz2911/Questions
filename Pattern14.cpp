//Question 38 - Write program to print the pattern
                    // *****
                    //  ****
                    //   ***
                    //    **
                    //     *
                    //    ** 
                    //   ***
                    //  ****
                    // *****  

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<=8;i++){
        for(int j=0;j<=4;j++){
            if(j>=i || j>=8-i){
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