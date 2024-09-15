#include<bits/stdc++.h>
using namespace std;

void merge(int l,int r,int mid)
{
  int left_size=mid -l+1;
  int left[left_size +1];
  int right_size=r-(mid+1)-1;
  int right[right_size+1];

  for (int i = l,j=0; i <=mid; i++,j++)
  {
    l[j]=a[i];

  }
  

}
void mergeSort(int l ,int r)
{
  if(l==r) return;
   int mid =(l+r)/2;
   mergeSort(l,mid);
   mergeSort(mid+1,r); 
   merge(l,r,mid);
}
int main(){
     
      int n;
      cin>>n;
      int a[n] ;
      for (int i = 0; i <n; i++)
      {
         cin>>a[i];
      }
      
     // sort(a.begin() ,a.end());
  mergeSort(0,n-1);
for(auto x: a)
{
   cout<<  x <<" ";
  
}
    

    return 0;
}
