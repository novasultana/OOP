#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter the number of Row and Collum:"<<endl;
    cin>>m>>n;
    int mat[m][n];
    cout<<"Enter the elements of First Matrix:"<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>mat[i][j];
        }
    }
    int m2,n2;
    m2=m;
    n2=n;
    int mat2[m2][n2];
    cout<<"Enter the element of Second Matrix: "<<endl;
    for(i=0; i<m2; i++)
    {
        for(j=0; j<n2; j++)
        {
            cin>>mat2[i][j];
        }
    }
    int a,b;
    a=m;
    b=n;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(mat[i][j]==mat2[i][j])
            {
                cout<<"The Elements are same!!"<<endl;
            }
            else{
                cout<<"The Elements are not same!"<<endl;
            }

        }
        cout<<endl;
    }

}
