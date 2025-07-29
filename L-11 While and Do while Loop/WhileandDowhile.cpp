#include<iostream>
using namespace std;

int main (){

    // while loop
    

    // Print n no.

    // int n;
    // int i=1; //Initalize
    // cin >> n;
    // while(i<=n){ // Beack
    //     cout<<i<<" ";
    //     i++;  // Update
    // }

    // Print Table

    // int n;
    // int i=1;  // Initalize
    // cin >> n;

    // while(i<=10){  // Brack
    //     cout<< i*n << " ";
    //     i++;  // Update
    // }

    // Print Even no till n.
    // int n;
    // int i=1; //initalize
    // cin >> n;

    // while(i<=n){ //Brack
    //     if(i%2 == 0){
    //         cout << i << " ";
    //     }
    //     i++;  //Update
    // }

    // Print Odd no.
    // int n;
    // int i=1; // Initalize
    // cin >> n;

    // while(i<=n){  //Brack
    //     if(i%2 != 0){
    //         cout << i << " ";
    //     }
    //     i++;  // Update
    // }


    // do while loop

    // Print n no.

    // int n;
    // int i=1;
    // cin >> n; //Initialize
    // do{
    //     cout<<i<<" ";
    //     i++;  // Update
    // }while(i<=n);  //Brack

    // Print Table

    // int n;
    // int i=1;  //Initialize
    // cin >> n;

    // do{
    //     cout<< n*i << " ";
    //     i++;  // Update
    // }while(i<=10);  //Brack

    // ex
    // int n;
    // int i=1;
    // cin >> n;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // }while(i<=n);

    // if we inter input 0 it will print 1 which it shouldn't print
    // it print because of its defult behaviour


    // Brack

    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     if(i==4){
    //         break;
    //     }
    //     cout<< i << " ";
    // }

    // Continue

    // int n;
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     if(i%4 == 0){
    //         continue;
    //     }
    //     cout<< i << " ";
    // }

    // Switch

    // int i;
    // cin >>i;

    // switch(i){
    //     case 1:
    //         cout<<"Rohit";
    //     case 2:
    //         cout<<"Mohit";
    //         break;
    //     default:
    //         cout<<"Sohit";
    // }

    // print name of week with no.

    // int i;
    // cin >>i;

    // switch(i){
    //     case 1:
    //     cout<< "Mon";
    //     break;

    //     case 2:
    //     cout<< "Tue";
    //     break;

    //     case 3:
    //     cout<< "Wed";
    //     break;

    //     case 4:
    //     cout<< "Thu";
    //     break;

    //     case 5:
    //     cout<< "Fri";
    //     break;

    //     case 6:
    //     cout<< "Sat";
    //     break;

    //     case 7:
    //     cout<< "Sun";
    //     break;

    //     default:
    //     cout<< "Enter valid no!";

    // }

    // Scope of varible

    // {int n = 10;

    // cout << n;

    // int n = 30; // this will show error because redefintion is not allowed

    // cout<< n;}

    // {
    //     cout<< n; //this also show error because we can use varible before decleration
    //     int n = 10;
    // }

    //ex
    // int n = 10;
    // int i = 30;

    // if(i==30){
    //     int n=20; // valid
    //     cout<<n;
    // }


    //ex
    // int i=20;
    // for(int i=15; i<=20; i++){  //allowed
    //     cout<< i<< " ";
    // }

    // int i=20;
    // for( i=15; i<=20; i++){  //allowed this will update value of i
    //     cout<< i<< " ";
    // }

    int i=20;
    for(; i<=30; i++){  //allowed
        cout<< i<< " ";
    }
    return 0;
}