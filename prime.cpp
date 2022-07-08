#include<iostream>
using namespace std;
int main()
{
    int n,c,i;
    cout<<"Enter the Number:";
    cin>>n;
    c=0;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

        if(c==2)
        {
            cout<<n<<" "<<"The number is Prime";
        }
        else
        {
            cout<<n<<" "<<"The number is not prime";
        }

    return 0;

}
