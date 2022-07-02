#include<iostream>
using namespace std;
void add(int a,int  b,int *c){
*c=a+b;

int x=*c;
}
int main(){
    int a=6;
    int b=6;
    int c;
    add(a,b,&c);
    cout<<c<<endl;
}
