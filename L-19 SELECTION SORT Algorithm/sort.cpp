#include<iostream>
using namespace std;

int main(){

    // // SELECTION SORT
    // int arr[6] = {10,4,1,3,2,7};
    // int index;

    // for(int i=0; i<6-1; i++){
    //     index=i;
    //     for(int j=i+1; j<6; j++){
    //         if(arr[j]<arr[index]){
    //             index=j;
    //         }
    //     }
    //     swap(arr[i],arr[index]);
    // }
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }


    // // Q. take no. from user then sort it
    // int arr[100];
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int index;

    // for(int i=0; i<n-1; i++){
    //     index=i;
    //     for(int j=i+1; j<n; j++){
    //         if(arr[j]<arr[index]){
    //             index=j;
    //         }
    //     }
    //     swap(arr[i],arr[index]);
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }


    // H.W Move bigest no. at last location of array
    int arr[6]={10,9,8,7,6,5};
    int index;
    for(int i=6-1; i>0; i--){
        index=i;
        for(int j=i-1; j>-1; j--){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}