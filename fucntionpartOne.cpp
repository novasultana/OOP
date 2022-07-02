#include<iostream>
using namespace std;
/**void add(int a ,int b,int c)//argumentare a,b,c
{
    c=a+b;
///because this fucntion dont return anything , so return type is void
}
//*/
int add2(int a ,int b)//argumentare a,b,c
{
    int ans=a+b;

    return ans;
///because this fucntion dont return anything , so return type is
}
int main()
{
    int a,b,c;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"Enter the number:"<<endl;
    cin>>b;
    c=add2(a,b);
    cout<<"The sum of the number is :"<<c<<endl;
    return 0;

}
