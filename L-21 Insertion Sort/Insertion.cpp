#include<iostream>
using namespace std;

int main(){

    // // Insertion Sort
    // int arr[100];
    // int n;
    // cin>>n;
    // // Insert array
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // // Sort
    // for(int i=1; i<n; i++){
    //     for(int j=i; j>0; j--){
    //         if(arr[j]<arr[j-1]){
    //             swap(arr[j],arr[j-1]);
    //         }
    //         else{
    //             break;
    //         }
    //     }
    // }
    // // Print
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }


    // // Insertion Sort in Decresing Order
    // int arr[100];
    // int n;
    // cin>>n;
    // // Insert array
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // // Sort
    // for(int i=1; i<n; i++){
    //     for(int j=i; j>0; j--){
    //         if(arr[j]>arr[j-1]){
    //             swap(arr[j],arr[j-1]);
    //         }
    //         else{
    //             break;
    //         }
    //     }
    // }
    // // Print
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }


    // Insertion Sort from last
    int arr[100];
    int n;
    cin>>n;
    // Insert array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Sort
    for(int i=n-2; i>=0; i--){
        for(int j=i; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            else{
                break;
            }
        }
    }
    // Print
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}