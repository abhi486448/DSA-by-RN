#include<iostream>
using namespace std;

int main (){

    //Q print 
    //     *
    //    **
    //   ***
    //  ****
    // *****

    // int n;
    // cout << "Enter n: ";
    // cin >> n;
    // for( int r=1; r<=n; r++)
    // {
    //     for( int c=1; c<=n-r; c++)
    //     {
    //         cout << "  ";
    //     }
    //     for( int c=1; c<=r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     cout <<endl;
    // }

    //Q print
    //     1
    //    22
    //   333
    //  4444

    // int n;
    // cout << "Enter n: ";
    // cin >> n;
    // for( int r=1; r<=n; r++)
    // {
    //     for( int c=1; c<=n-r; c++)
    //     {
    //         cout << "  ";
    //     }
    //     for( int c=1; c<=r; c++)
    //     {
    //         cout <<r<<" ";
    //     }
    //     cout <<endl;
    // }


    //Q print
    //        1
    //      1 2
    //    1 2 3
    //  1 2 3 4
    //1 2 3 4 5

    // int n;
    // cout << "Enter n: ";
    // cin >> n;
    // for( int r=1; r<=n; r++)
    // {
    //     for( int c=1; c<=n-r; c++)
    //     {
    //         cout << "  ";
    //     }
    //     for( int c=1; c<=r; c++)
    //     {
    //         cout <<c<<" ";
    //     }
    //     cout <<endl;
    // }


    //Q print
    //          A
    //        A B
    //      A B C
    //    A B C D
    //  A B C D E

    // int n;
    // cout << "Enter n: ";
    // cin >> n;
    // for( int r=1; r<=n; r++)
    // {
    //     char a='A';
    //     for( int c=1; c<=n-r; c++)
    //     {
    //         cout << "  ";
    //     }
    //     for( int c=1; c<=r; c++)
    //     {
    //         cout <<a<<" ";
    //         a++;
    //     }
    //     cout <<endl;
    // }


    //Q print
    //        1   
    //      2 1
    //    3 2 1
    //  4 3 2 1
    //5 4 3 2 1

    // int n;
    // cout << "Enter n: ";
    // cin >> n;
    // for( int r=1; r<=n; r++)
    // {
    //     for( int c=1; c<=n-r; c++)
    //     {
    //         cout << "  ";
    //     }
    //     for( int c=r; c>=1; c--)
    //     {
    //         cout <<c<<" ";
    //     }
    //     cout <<endl;
    // }


    //Q print
    //       *
    //      * *
    //     * * *
    //    * * * * 
    //   * * * * *

    int n;
    cout << "Enter n: ";
    cin >> n;
    for( int r=1; r<=n; r++)
    {
        for( int c=1; c<=n-r; c++)
        {
            cout << " ";
        }
        for( int c=1; c<=r; c++)
        {
            cout << "* ";
        }
        cout <<endl;
    }

    return 0;
}