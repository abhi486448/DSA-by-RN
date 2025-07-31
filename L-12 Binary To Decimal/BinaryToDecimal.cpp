#include<iostream>
using namespace std;

int main(){

    // Decimal To Binary

    // int num;
    // cin >> num;
    // int rem, ans=0, mul=1;

    // while(num>0){
    //     // reminder
    //     // rem = num % 2; or
    //     rem = num & 1; 

    //     // quotient
    //     // num = num / 2;
    //     // num /= 2; or
    //     num = num>>1;
    //     // ans
    //     // ans = rem * mul + ans;
    //     ans += rem * mul;
    //     // mul
    //     // mul = mul * 10;
    //     mul *= 10;
    // }

    // cout << "ans " << ans;


    // Binery To Decimal

    // int num;
    // cin >> num;
    // int rem, ans=0, mul=1, i=0;

    // while(num>0){
    //     // remander
    //     rem = num % 10;
    //     // Divide
    //     num /= 10;
    //     // ans
    //     ans += rem * mul;
    //     //mupdate mul
    //     mul *= 2;
    // }

    // Or with << "left sift"

    // while(num>0){  //her we can use num only insted of num>0 until number is non zero it will work and if it become zero condition brack
    //     // remander
    //     rem = num % 10;
    //     // Divide
    //     num /= 10;
    //     // ans
    //     ans += rem << i;
    //     //mupdate mul
    //     i++;
    // }

    // cout << "ans "<< ans;


    // Decimal to Octa

    // int num;
    // cin >> num;
    // int rem, ans=0, mul=1;

    // while(num>0){
    //     // reminder
    //     rem = num % 8;

    //     // quotient
    //     num /= 8;
    //     // ans
    //      ans += rem * mul;
    //     // mul
    //     mul *= 10;
    // }

    // cout << "ans " << ans;

    // Octa To Decimal

    // int num;
    // cin >> num;
    // int rem, ans=0, mul=1;

    // while(num>0){
    //     // remander
    //     rem = num % 10;
    //     // Divide
    //     num /= 10;
    //     // ans
    //     ans += rem * mul;
    //     //mupdate mul
    //     mul *=8;
    // }

    // cout << "ans "<< ans;

    // Octa to Binery
    // logic { Octa --> Decimal --> Binery }

    // --> Octa To Decimal

    int oct;
    cin >> oct;
    int orem, dec=0, mul=1;

    while(oct>0){
        // remander
        orem = oct % 10;
        // Divide
        oct /= 10;
        // ans
        dec += orem * mul;
        //mupdate mul
        mul *=8;
    }

    // --> Decimal To Binary

    int drem, bin=0, dmul=1;

    while(dec>0){
        // reminder
        // rem = num % 2; or
        drem = dec & 1; 

        // quotient
        // num = num / 2;
        // num /= 2; or
        dec = dec>>1;
        // ans
        // ans = rem * mul + ans;
        bin += drem * dmul;
        // mul
        // mul = mul * 10;
        dmul *= 10;
    }

    cout << "ans " << bin;

    return 0;
}