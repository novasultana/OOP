#include<iostream>
using namespace std;
int Factorial(int n)
{
    int i,fact;
    fact=1;
    for(i=1; i<=n; i++)
    {
        fact=i*fact;
    }
    return fact;

}
int main()
{
    int n,tempFact;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<"The factorial is: "<<Factorial(n);;
    return 0;


}

