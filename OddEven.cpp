//Question - Write program to check wether number is odd or even
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    
    //Simply dividing and checking
    if(a%2==0){
        printf("%d is even number",a);
    }
    else{
        printf("%d is odd number",a);
    }

    return 0;
}