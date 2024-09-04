#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int length;
    int size;
};

void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}

// int LinearSearch(struct Array arr,int key){
//     for(int i=0;i<arr.length;i++){
//         if(key==arr.A[i]){
//             return i;
//         }
//     }
//     return -1;
// };

//Improved Linear Search
int LinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i-1;
        }
    }
    return -1;
}

void Display(struct Array *arr){
    for(int i=0;i<arr->length;i++){
        cout<<arr->A[i]<<",";
    }
}

int main(){
    struct Array prr={{2,4,7,9,3,5},6,10};
    Display(&prr);
    cout<<endl;
    cout<<LinearSearch(&prr,7)<<endl;
    Display(&prr);
    return 0;
}