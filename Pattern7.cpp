//Question - write a program to print the pattern 
                //           *
                //        *    *
                //       *   *   *
                //     *  *  *  *  *
                //    *  * * * *  *  * 
#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        int k=1;
        for(int j=0;j<9;j++){
            if(j>=4-i&&j<=4+i&&k==1){
                cout<<"*";
                k=0;
            }
            else{
                cout<<" ";
                k=1;
            }
                
        }
        cout<<"\n";
    }
    return 0;
}

