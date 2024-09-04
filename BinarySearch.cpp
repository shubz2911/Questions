#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int length;
    int size;
};

int BinarySearch(struct Array arr,int key){
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(arr.A[mid]==key){
            return mid;
        }
        else if(key<arr.A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

//Binary Search Using Recursion 
int RBinarySearch(int a[],int l,int h, int key){
    int mid;
    mid=(l+h)/2;
        if(key==a[mid]){
        return mid;
        }
        else if(key<a[mid]){
            return RBinarySearch(a,l,mid-1,key);
        }
        else{
            return RBinarySearch(a,mid+1,h,key);
        }
    return -1;
}

int main(){
    struct Array prr={{2,3,4,5,6},5,10};
    cout<<BinarySearch(prr,6);
    cout<<RBinarySearch(prr.A,0,prr.length,5);
    return 0;
}