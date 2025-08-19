#include<iostream>
using namespace std;

int main(){

    // int arr[5]; //array decleration

    // int arr[5]= {1, 2, 3, 4, 5};
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[]= {1, 2, 3, 4, 5, 6};
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[6]= {1, 2, 3};
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[6]= {0};
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[6]= {0};
    // for(int i=0; i<6; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int size;
    // cin>>size;
    // int arr[size];  // This is not good habit to use varable in size of array it will give errors for big values so ayways use a const type value
    // for(int i=0; i<size; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[5]= {1,2,3,4,5};
    // cout<<arr[5]; // Since array locate from 0 not from 1 so it will show any randum value

    // int arr[5]= {1,2,3,4,5};
    // cout<<sizeof(arr)<<" "; // Because int = 4 byte, 4*5 = 20;
    // cout<<sizeof(arr)/sizeof(arr[0])<<" "<<endl; // This will show no. of elements stored in arr;
    // int a;
    // char b;
    // float c;
    // bool d;
    // double e;
    // long int f;
    // cout<<sizeof(a)<<" "<<sizeof(b)<<" "<<sizeof(c)<<" "<<sizeof(d)<<" "<<sizeof(e)<<" "<<sizeof(f)<<endl;


    // // Find minimum value
    // int arr[5]= {2,3,1,7,8};
    // int ans= INT8_MAX; // Or use firse element of arr
    
    // for(int i=0; i<5; i++){
    //     if(arr[i]<ans)
    //         ans=arr[i];
    // }
    // cout<<ans;


    // // Find maximum value
    // int arr[5]= {2,3,1,7,8};
    // int ans= arr[0]; // or use INT8_MIN
    
    // for(int i=0; i<5; i++){
    //     if(arr[i]>ans)
    //         ans=arr[i];
    // }
    // cout<<ans;
    // return 0;


    // Sum of n element
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
}