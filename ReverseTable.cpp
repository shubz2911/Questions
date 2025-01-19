//Question - Print table in reverse order
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Which table you want to print"<<endl;
    cin>>a;
    int i;
    for(i=10;i>0;i--){
        //cout<<i<<endl;
        printf("%d X %d = %d",a,i,i*a);
        printf("\n");
    }
    return 0;
}