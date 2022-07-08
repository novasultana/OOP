#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,i;
    cout<<"Enter the num:";
    cin>>n;
    a=0;
    b=1;
    cout<<a;
    cout<<b;
    for(i=2;i<n;i++)
    {
        c=a+b;
        cout<<c;
        a=b;
        b=c;


    }

}


