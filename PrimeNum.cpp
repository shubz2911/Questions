//Question - Write a program to find whether a number is prime or not
#include <iostream> 
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number you want to check"<<endl;
    cin>>n;
    //bool a=true;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is Not prime"<<endl;
            //a=false;
            break;
        }
    }
    if(i==n){
        cout<<n<<" is prime"<<endl;
    }
    
    return 0;
}