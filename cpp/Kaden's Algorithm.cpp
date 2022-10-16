// problem is maximum subarray sum in an array.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//optimal approach :
// tc : o(n)
// sc : o(1)


// kaden's algorithm : 
int check(int a[],int n)
{
    int currsum =0;int maxsum=0;
    for(int i=0;i<n;i++)
    {
        currsum = currsum+a[i];
      // negative sum wil not contribute to the maximum subarray sum
        if(currsum<0)
       {
           currsum=0;
       }
        if(maxsum<currsum)
        {
            maxsum = currsum;
        }
      
    } return maxsum;

}
