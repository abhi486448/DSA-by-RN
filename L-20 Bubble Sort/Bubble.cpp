#include<iostream>
using namespace std;

int main(){

    // // Bubble Sort
    // int arr[100];
    // int n;
    // cin>>n;
    // // Take array input
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // // Sort
    // for(int i=n-2; i>=0; i--){
    //     bool swapped=0;
    //     for(int j=0; j<=i; j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //             swapped=1;
    //         }
    //     }
    //     if(swapped==0){
    //         break;
    //     }
    // }
    // // Print
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }


    // Sort in Descending order
    // Bubble Sort
    int arr[100];
    int n;
    cin>>n;
    // Take array input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Sort
    for(int i=n-2; i>=0; i--){
        bool swapped=0;
        for(int j=0; j<=i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    // Print
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}