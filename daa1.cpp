#include<iostream>
using namespace std;
void linear(int [],int ,int );
int main()
{
    int n,key,t;
    cout<<"enter the no of test cases\n";
    cin>>t;

    while(t)
    {
    cout<<"enter the size of an array\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
         cout<<"enter the element to be searched\n";
         cin>>key;
          linear(a,n,key);
          t--;
    }

}
void linear(int a[],int n,int key)
{
    int j,i;
    for( i=0;i<n;i++)
    {
        if(a[i]==key)
           {
               j=1;
              break;
           }
        else
        j=0;
    }
    if(j==1)
        cout<<i+1;
    else
        cout<<"not present";
        cout<<"\n";

}
