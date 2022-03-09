#include<iostream>
using namespace std;
int binarysearch(int a[],int l,int r,int key)
{
    while(l<=r)
    {
        int mid;
        mid=l+(r-1)/2;
        if(a[mid]==key)
            return mid;
         if(a[mid]>key)
            r=mid-1;
           else
            l=mid+1;
    }

        return -1;
}

int main()
{
    int n,key;
    cout<<"enter the size\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter the element to be  searched\n";
    cin>>key;
    int res=binarysearch(a,0,n-1,key);
    if(res==-1)
        cout<<"not present";
    else
        cout<<"present at index "<<res;

}
