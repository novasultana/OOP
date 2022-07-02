#include<iostream>
using namespace std;
int main(){
int ar[]={16,5871,8525,8152,5225,15};
int tempMin=ar[0];
int n=sizeof(ar)/sizeof(ar[0]);/// total bits in array  / int bit
int idx;
for(int i=0;i<n;i++){
    if(tempMin>ar[i]){
        tempMin=ar[i];
        idx=i;
    }
}
cout<<tempMin<<endl;
cout<<idx<<endl;


}
