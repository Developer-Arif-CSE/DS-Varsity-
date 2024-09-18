#include<bits/stdc++.h>                        kjl
using namespace std;
int main()
{
    int i,n,p,a[100];
    cout<< "Enter the range of the array:"<<endl;
    cin>>n;
    cout<< "Enter the element of the array:"<<endl;
    for(i=0; i<n; i++)
     {
        cin>>a[i];
     }
    cout<<"After traversing:"<<" "<<endl;
    for(i=0; i<n; i++)
     {
        cout<<a[i]<<" "<<endl;
     }
      cout<< "Enter the element to delete:"<<endl;
    cin>>p;
    if (p<0|| p>n) 
    {
       cout<<"delete is impossible"<<endl;
    }
    else
    {
        for (i=p+1; i<n; i++)
        a[i-1]=a[i];
        n--;
    }
    cout<< "After Deleting:"<<endl;
    for(i=0; i<n; i++)
    cout<<a[i]<<" ";
    return 0;
}
