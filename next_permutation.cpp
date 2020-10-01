#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
       
       int n;
       cin>>n;
       vector<int>v(n,0);
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       int d=-1;
       for(int i=n-2;i>=0;i--)
       {
           if(v[i]<v[i+1])
           {
                d=i;
               break;
           }
       }
           if(d==-1)
           {
               cout<<"Not Possible"<<endl;
           }
       else{
           int min_d=100000000;
           int min_i=0;
          for(int i=d+1;i<n;i++)
          {
              if(v[i]>v[d] && v[i]<min_d)
              {
                  min_d=v[i];
                  min_i=i;
              }
          }
          int temp = v[d];
          v[d]=v[min_i];
          v[min_i]=temp;
          
          int arr[n];
          for(int i=0;i<n;i++)
          {
              arr[i]=v[i];
          }
          sort(arr+d+1,arr+n);
          for(int i=0;i<n;i++)
          {
              cout<<arr[i]<<" ";
          }
          cout<<endl;
       }
   }
}
