#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start + end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}

int binary_search_des(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start + end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key)
        end=mid-1;
        else
        start=mid+1;
    }
    return -1;
}
int main(){

    // // Binary Search
    // int arr[100];
    // int n;
    // cout<<"Enter no. of element: ";
    // cin>>n;
    // cout<<"Enter element: ";
    // for(int i=0; i<n; i++)
    // cin>>arr[i];

    // int key;
    // cout<<"Enter Key to Search: ";
    // cin>>key;

    // cout<<"Got it at: "<<binary_search(arr, n, key);


    // Impliment Biary Search in Descending ordered array
    int arr[100];
    int n;
    cout<<"Enter no. of element: ";
    cin>>n;
    cout<<"Enter element: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int key;
    cout<<"Enter Key to Search: ";
    cin>>key;

    cout<<"Got it at: "<<binary_search_des(arr, n, key);

    return 0;
}