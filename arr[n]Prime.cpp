#include<iostream>
using namespace std;
int main()
{
    int n,i,c,j;
    cout<<"Enter the Number:";
    cin>>n;
     cout<<"Prime numbers are:"<<endl;
    for(i=1; i<=n; i++)
    {
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
                cout<<i<<endl;
            }


    }
}
