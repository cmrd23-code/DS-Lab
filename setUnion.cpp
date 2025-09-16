#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    vector<int>a(n1),b(n2),c(n1+n2);
    cout<<"enter the element of first array"<<endl;
    for(int i=0;i<n1;i++)
      {
       cin>>a[i];
      }
      cout<<"enter the element of second array"<<endl;
      for(int i=0;i<n2;i++)
      {
       cin>>b[i];
      }
      int i=0,j=0,k=0;
      while(i<n1 && j<n2)
      {
        if(a[i]<b[j])
        {
         c[k]=a[i];
         i++;
         k++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            k++;
        }
        else{
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
      }
      while(i<n1)
      {
        c[k]=a[i];
        i++;
        k++;
      }
      while(j<n2)
      {
        c[k]=b[j];
        j++;
        k++;
      }
      for(int i=0;i<k;i++)
       cout<<c[i]<<" ";

    return 0;
}