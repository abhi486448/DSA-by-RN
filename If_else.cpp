#include<iostream>
using namespace std;

int main(){
    //ex
    // int package;
    // cin>>package;

    // if(package>10){
    //     cout<<"accepted";
    // }
    // else{
    //     cout<<"rejected";
    // }

    //ex
    // int marks;
    // cin>>marks;

    // if(marks>33)
    // cout<<"Pass";
    // else
    // cout<<"Fail";// If there is single line code then {} is not compulsory to use

    // ex
    // int a,b;
    // cout<<"Enter first no. : ";
    // cin>>a;
    // cout<<"Enter Second no. :";
    // cin>>b;

    // if(a>b){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }

    //ex
    // int num;
    // cout<<"Enter Num: ";
    // cin>>num;

    // if((num%2)==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }

    //ex
    // int num;
    // cin>>num;

    // if(num>0){
    //     cout<<"+ve num";
    // }
    // else if(num==0){
    //     cout<<"0";
    // }
    // else{
    //     cout<<"-ve num";
    // }

    //ex
    // char c;
    // cin>>c;

    // if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')){
    //     cout<<"vowel";
    // }
    // else{
    //     cout<<"consonent";
    // }

    int n;
    cin>>n;

    if(n==1){
        cout<<"Mon";
    }
    else if(n==2){
        cout<<"Tue";
    }
    else if(n==3){
        cout<<"Wed";
    }
    else if(n==4){
        cout<<"Thu";
    }
    else if(n==5){
        cout<<"Fri";
    }
    else if(n==6){
        cout<<"Set";
    }
    else if(n==7){
        cout<<"Sun";
    }
    else{
        cout<<"Enter valid num!";
    }
    
    return 0;
}