#include <iostream>
using namespace std;

int main()
{

    // Q print
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    //* * * * * * * * *

    // int n;
    // cout<<"Enter n: ";
    // cin>>n;

    // for(int r=1; r<=n; r++){
    //     for(int c=1; c<=n-r; c++){
    //         cout<<"  ";
    //     }
    //     for(int c=1; c<=2*r-1; c++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Q print
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1

    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // for (int r = 1; r <= n; r++)
    // {
    //     //print space
    //     for (int c = 1; c <= n - r; c++)
    //     {
    //         cout << "  ";
    //     }
    //     //print 1-r
    //     for (int c = 1; c <= r; c++)
    //     {
    //         cout << c << " ";
    //     }
    //     //print (r-1)-1
    //     for (int c = r - 1; c >= 1; c--)
    //     {
    //         cout << c << " ";
    //     }

    //     cout << endl;
    // }

    // Q print
    //* * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    // int n;
    // cout<<"Enter n: ";
    // cin>>n;

    // for (int r = n; r >= 1; r--)
    // {
    //     //print space
    //     for (int c = 1; c <= n-r; c++)
    //     {
    //         cout << "  ";
    //     }
    //     //print *
    //     for (int c = 1; c <= 2*r-1; c++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Q print
    //  * * * * * * * *
    //  * * *     * * *
    //  * *         * *
    //  *             *
    //  *             *
    //  * *         * *
    //  * * *     * * *
    //  * * * * * * * *

    // int n, r, c;
    // cout << "Enter n: ";
    // cin >> n;

    // for (r = n; r >= 1; r--)
    // {
    //     // print *
    //     for (c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     // print space
    //     for (c = 1; c <= ((2 * n) - (2 * r)); c++)
    //     {
    //         cout << "  ";
    //     }
    //     // print *
    //     for (c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (r = 1; r <= n; r++)
    // {
    //     // print *
    //     for (c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     // print space
    //     for (c = 1; c <= ((2 * n) - (2 * r)); c++)
    //     {
    //         cout << "  ";
    //     }
    //     // print *
    //     for (c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    //Q print 
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *

    // int r, c, n;
    // cout << "Enter n: ";
    // cin >> n;

    // for (r = 1; r <= n; r++)
    // {
    //     // print *
    //     for (c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     // print space
    //     for (c = 1; c <= ((2 * n) - (2 * r)); c++)
    //     {
    //         cout << "  ";
    //     }
    //     // print *
    //     for (c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (r = n-1; r >= 1; r--)
    // {
    //     // print *
    //     for (c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     // print space
    //     for (c = 1; c <= ((2 * n) - (2 * r)); c++)
    //     {
    //         cout << "  ";
    //     }
    //     // print *
    //     for (c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //Q print
    //    *
    //   * *
    //  * * *
    // * * * *
    // * * * *
    //  * * *
    //   * *
    //    *

    int r, c, n;
    cout << "Enter n: ";
    cin >> n;

    for ( r = 1; r <= n; r++)
    {
        //print space
        for ( c = 1; c <= n-r; c++)
        {
            cout << " ";
        }
        //print *
        for ( c = 1; c <= r; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for ( r = n; r >= 1; r--)
    {
        //print space
        for ( c = 1; c <= n-r; c++)
        {
            cout << " ";
        }
        //print *
        for ( c = 1; c <= r; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}