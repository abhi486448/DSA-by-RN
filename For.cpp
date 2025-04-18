#include <iostream>
using namespace std;

int main(){

    // print a-z
    // char name;

    // for ( name='a'; name<='z'; name++)
    // {
    //     cout<<" "<<name;
    // }
    
    // print numbers in revers order
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // for (int i = n; i >= 1; i--)
    // {
    //     cout<<i<<endl;
    // }

    // print 1 to 100 with diff of 3
    // for (int i = 1; i <=100; i=i+3)
    // {
    //     cout<<i<<endl;
    // }

    // print table of 6
    // int n;
    // cin>>n;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<< n * i <<endl;
    // }
    
    // calculate power of no.
    // int p,q,tem = 1;
    // cout<<"Enter number: ";
    // cin>>p;
    // cout<<"Enter power: ";
    // cin>>q;
    // for (int i = 1; i <= q; i++)
    // {
    //     tem = tem * p;
    // }
    // cout<<p<<" to the power "<<q<<" is: "<<tem<<endl;
    
    // sum of n natural no.
    // int n,sum = 0;
    // cin>>n;
    // for(int i = 1; i<= n; i++){
    //     sum = sum + i;
    // }
    // cout<<"sum: "<<sum<<endl;

    // sum of first n squar no.
    // int n;
    // cout<<"Enter value of n: ";
    // cin>>n;
    // int sum = 0;
    // for(int i = 1; i<=n; i++){
    //     sum = sum + (i*i);
    // }
    // cout<<"sum of square of "<<n<<" naturan no. is: "<<sum<<endl;

    // print fectorial of no.
    // int n,fact = 1;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // cout<<fact<<endl;
    
    // print Prime no.
    int n;
    cin>>n;

    if(n<2){
        cout<<"Not Prime";
        return 0;
    } else{
        for (int i = 2; i < n; i++)
        {
            if( (n%i) == 0 ){
                cout<<"Not Prime";
                return 0;
            }
        }
        cout<<n<<" is a Prime no.";  
    }

    

    return 0;
}