/*
Binary search is a 'divide and conquer' algorithm which requires the initial array to be sorted before searching. 
It is called binary because it splits the array into two halves as part of the algorithm. 
Initially, a binary search will look at the item in the middle of the array and compare it to the search terms
*/

#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int key){
    int low=0,high=7; //size of array is 8 hence (n-1)th index
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;

}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int key=4;
    int index=binarysearch(arr,key);
    if(index==-1)
        cout<<"Element is not present.\n";
    else
        cout<<"Element is present at index: "<<index<<endl;
    return 0;
}