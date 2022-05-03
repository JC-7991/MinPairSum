#include <bits/stdc++.h>

int smallest_pair(int a[], int n){

  int min = INT_MAX;
  int secondMin = INT_MAX;
  
  for(int j = 0; j < n; j++){
    
    if(a[j] < min) {
      secondMin = min;
      min = a[j];
    }

    else if((a[j] < secondMin) && a[j] != min){
      secondMin = a[j];
    }

  }

  return (secondMin + min);

}
 
int main(){

  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
 
  std::cout << smallest_pair(arr, n);
 
  return 0;

}