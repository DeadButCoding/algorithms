#include<iostream>
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    
    int pi = partition(array, low, high);
    
    quickSort(array, low, pi - 1);
    
    quickSort(array, pi + 1, high);
  }
}

int main(){
    int ar[10] = {3,2,45,21,56,6,9,32,4,8};
    quickSort(ar, 0, 9);
    cout<<"\nSorted array: \n";
    for(int i=0; i<10; ++i){
        cout<<ar[i] <<" ";
    }
    return 0;
}