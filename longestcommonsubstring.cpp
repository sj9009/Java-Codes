#include<iostream>
using namespace std;
int lcs(string a,string b,int m,int n)
{
int lcsarr[m+1][n+1];
int result=0;
cout<<"  ";
for(int i=0;i<m;i++)
{
  cout<<a[i]<<" ";
}
cout<<endl;
for(int i=0;i<=m;i++)
{    cout<<b[i]<<" ";
      for(int j=0;j<n;j++)
      {
        if(i==0||j==0)
        lcsarr[i][j]=0;

        else if(a[i-1]==b[j-1])
        {
        lcsarr[i][j]=lcsarr[i-1][j-1]+1;
        result=max(result,lcsarr[i][j]);
        }
        else 
        lcsarr[i][j]=max(lcsarr[i][j-1],lcsarr[i-1][j]);
       
        cout<<lcsarr[i][j]<<" ";
      }
      cout<<endl;
      

}

return result;
}
int main()
{
string a="abcde";
string b="dabce";
cout<<lcs(a,b,5,5)<<endl;





}

