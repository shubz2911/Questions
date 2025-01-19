#include <iostream>
using namespace std;

int main(){
    char x;
    cout<<"Enter a character "<<endl;
    cin>>x;
    x=tolower(x);
    /*
    //Using if and else if
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("%c is Vowel",x);
    }
    else{
        printf("%c is Consonant",x);
    }
    */

    //Using Switch Case

    switch (x){
        case 'a':printf("%c is Vowel",x);
        break;
        case 'e':printf("%c is Vowel",x);
        break;
        case 'i':printf("%c is Vowel",x);
        break;
        case 'o':printf("%c is Vowel",x);
        break;
        case 'u':printf("%c is Vowel",x);
        break;
        default:
        printf("%c is Consonant",x);
    }
    return 0;
}