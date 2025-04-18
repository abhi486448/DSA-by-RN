#include <iostream>
using namespace std;

int main()
{
    int b = 1;
    int p = 0;
    int tem;

    int n;
    cin >> n;
    cout << "You entered n: " << n << endl;

    if (n == 1)
    {
        cout << "1: " << p << endl;
    }
    else if(n == 2){
        cout << "2: " << p << endl;
    }
    else if(n > 2){
        for (int i = 3; i <= n; i++)
        {
            tem = p + b;
            p = b;
            b = tem;
        }
        cout<<n<<": "<<b;
        
    }

    return 0;
}
