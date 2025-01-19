//Question - Write calculator program using fuction 

#include <iostream>
using namespace std;

void add(int x,int y){
    cout<<x+y<<endl;
}
void subtract(int x,int y){
    cout<<x-y<<endl;
}
int multiply(int x,int y){
    return x*y;
}
int divide(int x,int y){
    if(y==0){
        cout<<"Cannot divide by zero "<<endl;
        return 0;
    }
    return x/y;
}
int main(){
    int a,b;
    string c;

    cout<<"Enter number 1"<<endl;
    cin>>a;

    cout<<"Enter number 2"<<endl;
    cin>>b;

    cout<<"Operation you want to perform(eg:add,subtract,multiply,divide)"<<endl;
    cin>>c;

  if(c=="add"){
    add(a,b);
  }
  else if(c=="subtract"){
    subtract(a,b);
  }
  else if(c=="multiply"){
    cout<<multiply(a,b)<<endl;
  }
  else if(c=="divide"){
    cout<<divide(a,b)<<endl;
  }
  else{
    cout<<"Enter a valid operator"<<endl;
  }



    return 0;
}