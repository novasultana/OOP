#include<iostream>
using namespace std;
int main()
{
    int m ,n,i;
    cout<<"Enter the First Number:"<<endl;
    cin>>m;
    cout<<"Enter the second Number:"<<endl;
    cin>>n;
    for(i=m;i<n;i++)
    {
        if(i%5==2||i%5==3)
        {
            cout<<i<<" ";
        }
        else
        {
            continue;
        }
    }

}
