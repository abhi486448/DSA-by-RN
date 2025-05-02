#include<iostream>
using namespace std;

int main (){

    // Q print
    //   *
    //   * *
    //   * * *
    //   * * * *
    //   * * * * *
    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=r; c++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Q printf
    //   1
    //   1 2
    //   1 2 3
    //   1 2 3 4
    //   1 2 3 4 5
    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=r; c++){
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }

    // Q printf
    //   1
    //   2 2
    //   3 3 3
    //   4 4 4 4
    //   5 5 5 5 5
    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=r; c++){
    //         cout<<r<<" ";
    //     }
    //     cout<<endl;
    // }

    // Q print
    //   1
    //   2 1
    //   3 2 1
    //   4 3 2 1
    //   5 4 3 2 1
    // for(int r=1; r<=5; r++){
    //     for(int c=r; c>=1; c--){
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }

    // Q printf
    //   a
    //   b b
    //   c c c 
    //   d d d d 
    //   e e e e e 
    // char a = 'a';
    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=r; c++){
    //         cout<<a<<" ";
    //     }
    //     cout<<endl;
    //     a++;
    // }

    // Q print 
    //   * * * * * 
    //   * * * *
    //   * * *
    //   * *
    //   * 
    // for(int r=5; r>=1; r--){
    //     for(int c=1; c<=r; c++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    

    // Q print 
    //   1 2 3 4 5
    //   1 2 3 4
    //   1 2 3
    //   1 2
    //   1
    // for(int r=5; r>=1; r--){
    //     for(int c=1; c<=r; c++){
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }


    // Q print 
    //   5
    //   5 4
    //   5 4 3
    //   5 4 3 2
    //   5 4 3 2 1
    for(int r=1; r<=5; r++){
        for(int c=1; c<=r; c++){
            int num=5-(c-1);
            cout<<num<<" ";
        }
        cout<<endl;
    }

    return 0;
}