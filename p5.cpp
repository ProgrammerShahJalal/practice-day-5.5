#include<iostream>
using namespace std;

int main()
{
  int m,n,i,j,flag;
  cin>>m;
  
  int a[m];
  for(i=0;i<m;i++)
  {
    cin>>a[i];
  }
  cin>>n;

  int b[n];
  for(i=0;i<n;i++)
  {
    cin>>b[i];
  }

  for(i=0;i<m;i++)
  {
    cout<<a[i]<<" ";
  }
  
  /* Then print all the elements that are in array2 but not in array1 */
  for(j=0;j<n;j++)
  {
    flag=0;
    for(i=0;i<m;i++)
    {
      if(a[i]==b[j])
      {
        flag=1;
        break;
      }
    }
    /* flag!=1 means element of array2 is not present in array1 */
    if(flag!=1)
    {
      cout<<b[j]<<" ";
    }
    
  }
  
  return 0;
}