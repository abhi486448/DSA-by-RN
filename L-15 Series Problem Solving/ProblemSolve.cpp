#include<iostream>
#include <cmath>
using namespace std;

// char convert(char input){
//     char ans = 'A'+ (input - 'a');
//     return ans;
// }

int countDigit(int n){
    int c=0;
    while(n){
        c++;
        n/=10;
    }
    return c;
}

bool Armstrong(int n, int d){
    int num=n;
    int ans=0,rem;
    while(num){
        rem = num%10;
        num/=10;
        double p = pow(rem,d); //in c++ pow() uses double, double overload by default. pow() work in floating-point math, so the result for pow(5,3) might be 124.99999999997 insted of 125.0 due to rounding erroe in binary representation. when we print or convert this to int, it truncates, giving 124 to fix use round() before casting;
        ans= ans + (int)round(p);
    }
    if(ans==n){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){

    // // Convert small letter to captel
    // char in;
    // cin >> in;

    // cout<<"Output: "<<convert(in)<<endl;

    // Armstrong No.
    int num;
    cin >> num;

    int digit = countDigit(num);

    cout<<Armstrong(num,digit)<<endl;

    return 0;
}