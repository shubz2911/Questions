#include <iostream>
using namespace std;

int factorial(int x){
    if(x==1||x==0){
        return 1;
    }
    return x*factorial(x-1);
}
int Combination(int n,int r){
    //nCr=n!/r!*(n-r)!
    //t1=n! , t2=r! , t3=(n-r)!
    int t1,t2,t3;
    t1=factorial(n);
    t2=factorial(r);
    t3=factorial(n-r);
    return t1/(t2*t3);
}

int main(){
    cout<<Combination(5,3)<<endl;
    return 0;
}