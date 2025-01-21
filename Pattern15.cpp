//Question 39 - Write program to print the pattern
                    // *********
                    // **** ****
                    // ***   ***
                    // **     **
                    // *       *
                    // **     **
                    // ***   ***
                    // **** ****
                    // *********
#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<=8;i++){
        for(int j=0;j<=8;j++){
            if(j<=4-i || j>=i+4 || j<=i-4 || j>=8-(i-4)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    //Another Approach
    int k=0;
    for(int i=0;i<=8;i++){
        i<=3?k++:k--;
        for(int j=0;j<=8;j++){
            if(j<=4-k || j>=4+k){           //Here k is working same as i but it is upgrading and degrading according to the condition such that we can remove other to condition 
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