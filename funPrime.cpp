#include<iostream>
using namespace std;
bool Prime(int i)
{
    int c,j;

    c=0;

    for(j=1; j<=i; j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }

    if(c==2)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    int n,i;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<"Numbers are:"<<endl;
    for(i=0; i<n; i++)
    {
        bool isprime=Prime(i);
        if(isprime)
        {
            cout<<i<<endl;
        }
    }

}
