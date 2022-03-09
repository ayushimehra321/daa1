#include<iostream>
#include<cmath>
using namespace std;
int jumpsearch(int a[],int n,int key)
{
    int s=0;
    int e=sqrt(n);
    while(a[e]<=key && e<n)
    {
        s=e;
        e+=sqrt(n);
        if(e>n-1)
            e=n;
    }
    for(int i=s;i<e;i++)
    {
        if(a[i]==key)
            return i;
    }
    return -1;

}
int main()
{
    int n,key,l;
    cout<<"enter the size\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be searched\n";
    cin>>key;
    if((l=jumpsearch(a,n,key))>=0)
        cout<<"element is found at location "<<l;
    else
        cout<<"not present";


}
