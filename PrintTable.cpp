//Question - Make a program to print table
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Which table you want to print"<<endl;
    cin>>a;
    int i;
    for(i=a;i<=a*10;i+=a){
        cout<<i<<endl;
    }
    return 0;
}