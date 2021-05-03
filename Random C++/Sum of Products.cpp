#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

void sum_of_products(int a[],int n,int i,int sum){
 int j=i+1;
if(i==n){cout<<sum;}
 else{
    while (j<n) {

       sum=sum+(a[i]*a[j]);
        j++;
    }

   sum_of_products(a,n,i+1,sum);

 }



}
int main()
{
int a[]={1, 3, 4};// only 55 asa ucit result as a sub array

  int n=sizeof(a)/sizeof(a[0]);

  sum_of_products(a,n,0,0);

}
