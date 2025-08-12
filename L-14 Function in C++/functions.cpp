#include<iostream>
using namespace std;

// int Sum(int m, int n){ // Function declare
//     int ans = m+n; // Function define
//     return ans;
// }

// int Mul(int m, int n){
//     int ans = m*n;
//     return ans;
// }

// void fun(){
//     cout<<"Hello Coder Army"<<endl;
// }

// bool Prime(int n){
//     if(n<2){
//         return 0;
//     }
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int Fact(int n=3){ // Default parameter
//     if(n<1){
//         return 0;
//     }
//     int ans=1;
//     for(int i=1; i<=n; i++){
//         ans*=i;
//     }
//     return ans;
// }

void Swap(int a, int b){
    int c = a;
    a=b;
    b=c;
}

void SwapWithRef(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}

void SwapWithRef(float &a, float &b){ //Function Overloding
    float c=a;
    a=b;
    b=c;
}

int main(){

    // //Sum of two no.
    // int a,b;
    // cin >>a >>b;
    // //function call
    // cout<<"Sum: "<<Sum(a,b)<<endl;
    // cout<<"Mul: "<<Mul(a,b)<<endl;
    // fun();

    // // Prime and Fctorial
    // int A,B;
    // cin >>A >>B;
    // cout<<Fact()<<endl;
    // // A is prime or not
    // if(Prime(A)){
    //     cout<<"A is Prime"<<endl;
    // }
    // else{
    //     cout<<"A is not Prime"<<endl;
    // }
    // // A ka Factorial
    // cout<<"Fact Of A: "<<Fact(A)<<endl;
    // // B is prime or not
    // if(Prime(B)){
    //     cout<<"B is Prime"<<endl;
    // }
    // else{
    //     cout<<"B is not Prime"<<endl;
    // }
    // // B ka Factorial
    // cout<<"Fact Of B: "<<Fact(B)<<endl;
    // // B-A is prime or not
    // if(Prime(B-A)){
    //     cout<<"B-A is Prime"<<endl;
    // }
    // else{
    //     cout<<"B-A is not Prime"<<endl;
    // }
    // // B-A ka factorial
    // cout<<"Fact Of B-A: "<<Fact(B-A)<<endl;

    // Swap tewo no without refrance.
    int a,b;
    cin>>a>>b;
    swap(a,b); // Inbuild function of c++
    cout<<a<<" "<<b<<endl; // there will be no change
    SwapWithRef(a,b);
    cout<<a<<" "<<b<<endl; // it will do
    float f1=4.8, f2=2.4;
    SwapWithRef(f1,f2);
    cout<<f1<<" "<<f2<<endl;
    return 0;
}