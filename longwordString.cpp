#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,m,p,q,r;
    string str,newstr;
    cout<<"how many words You want to Enter:"<<endl;
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>str;
        n=str.size();
        newstr="";
        if(n>10)
        {

            newstr=str[0]+to_string(n-2)+str[n-1];

        }

            cout<<newstr<<endl;
    }
    }



