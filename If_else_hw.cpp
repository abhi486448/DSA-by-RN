#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age<18){
        cout<<"Teenager";
    }
    else{
        cout<<"Adalt";
    }

    return 0;
}