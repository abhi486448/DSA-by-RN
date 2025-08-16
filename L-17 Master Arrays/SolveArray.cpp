#include<iostream>
using namespace std;

void fun(int a[], int n){  // here a[] work as a pointer it takes address of arr 
    cout<<sizeof(a)<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}

int main(){

    // // Reverse Array
    // int arr[6] = {1,2,3,4,5,6};

    // int start=0,end=5;
    // while(start<end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }

    // // Fibonacci Series
    // int arr[50] = {0,1};
    // int n;

    // cout<<"Value of n: "<<endl;
    // cin>>n;

    // for(int i=2; i<n; i++){
    //     arr[i]=arr[i-1]+arr[i-2];
    // }
    // cout<<arr[n-1];

    // Pass arr in function
    int arr[5] = {3,2,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);


    return 0;
}