//Question - Write a program to print the pattern 
            //     *
            //    **
            //   ***
            //  ****
            // *****    
#include <iostream>
using namespace std;

int main(){
    //One Approach
    for(int i=5;i>0;i--){
        for(int j=0;j<=5;j++){
            if(j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }

cout<<"\n";

    //Another Approach
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j>=4-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
    //      Logic behind above code is

    //      i,j 0 1 2 3 4 
    //      0           *  (4-0)=4 j=4          print = *
    //      1         * *  (4-1)=3 j=3,4        print = *
    //      2       * * *  (4-2)=2 j>=2
    //      3     * * * *  (4-3)=1 j>=1
    //      4   * * * * *  (4-4)=0 j>=0
    return 0;
}