#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c,p,t,a[100];
    cout<< "Enter the range of the array :"<< endl;
    cin >> n;
    cout<< "Enter the element of the array :"<< endl;
    for ( i=0; i<n; i++)
    {
        cin>> a[i];
    }
    cout << "After traversing:"<<endl;
    for ( i=0; i<n; i++)
    {
        cout>> a[i];
    }
    for( p= n-1; p > 0; p-- )
    
        for(c=0; c < p; c++)
        
           if(a[c]>a[c+1])
              {
                t=a[c];
                a[c]=a[c+1];
                a[c+1]=p;
              }
        
    
    cout<<" After sorting:"<< " "<<endl;
    for ( i=0; i<n; i++)
    {
        cout>> a[i];
    }

    return 0;
}
