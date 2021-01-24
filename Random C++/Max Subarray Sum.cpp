#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;



void sum_subarray(int a[],int n){

int max;int glob_max=0;int glob_end,glob_str=0;int end;
  int i=0;while(i<n){
   int sum=a[i]; max=a[i];
   int j=i+1; while(j<n){

   sum=sum+a[j]; if(sum>max) {max=sum;end=j;}

   j++;

   }
   if(max>glob_max){glob_max=max;glob_end=end;glob_str=i;}
  i++;

  }
  for(int i=glob_str;i<=glob_end;i++) {cout<<a[i]<<" ";}
  cout<<endl<<glob_max;}
int main()
{
  int a[]={-2, -5, -6, -2, 3, 1, -55, -6};// only 55 asa ucit result as a sub array

  int n=sizeof(a)/sizeof(a[0]);

  sum_subarray(a,n);
}
