#include <iostream>
#include <limits.h>
using namespace std;

//  function for linear search
// bool find(int arr[], int size, int key) {
//   for (int i = 0; i < size; i++) {
//     if (arr[i] == key) {
//       return true;
//     }
//   }
//   return false;
// }
int main() {

  // taking input and displaying multiply by 2
  // int arr[5];
  // for(int i=0;i<5;i++){
  //   cin>>arr[i];
  // };

  // for(int i=0;i<5;i++){
  //   cout<<2*arr[i];
  // };

  //  change all values to 1
  // cout << "printnig 1";
  // int arr[5] = {1, 3, 5, 6, 7};
  // for (int i = 0; i < 5; i++) {
  //   arr[i] = 1;
  // }
  // for (int i = 0; i < 5; i++) {
  //   cout << arr[i];
  // }

  // linear search in array
  // int arr[5] = {1, 4, 5, 7, 6};
  // cout << "enter a key to find";
  // int key;
  // cin >> key;
  // int size = 5;
  // if (find(arr, size, key)) {
  //   cout << "found";
  // } else {
  //   cout << "not found";
  // }

  // count os and 1s in array
  // int arr[] = {0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1};
  // int size = 15;
  // int zeroes = 0;
  // int ones = 0;
  // for (int i = 0; i < size; i++) {
  //   if (arr[i] == 0) {
  //     zeroes += 1;
  //   } else if (arr[i] == 1) {
  //     ones += 1;
  //   }
  // }
  // cout << zeroes << " zeroes " << endl;
  // cout << ones << " ones " << endl;

  // find maximum number in array
  // int arr[] = {1, 2, 5, 8, 77, 4, 9, 5, 3};
  // int size = 9;
  // int mini = INT_MIN;

  // for(int i=0;i<size;i++){
  //   if(arr[i]>mini){
  //     mini = arr[i];
  //   }
  // }
  // cout<<mini;

  // find minimum number in array
  // int arr[] = {3,2,5,-6,2,3};
  // int size = 6;
  // int maxi = INT_MAX;

  // for(int i=0;i<size;i++){
  //   if(arr[i]<maxi){
  //     maxi = arr[i];
  //   }
  // }
  // cout<<"minimum number is: "<<maxi;

  // extreme prints in an array
  // int arr[] = {1, 3, 4, 5, 6, 3};
  // int size = 6;
  // int start = 0;
  // int end = size-1;
  // for(int i=0;i<=size;i++){
  // if(start>end){
  //   break;
  // }
  // else{
  //   cout<<arr[start];
  //   cout<<arr[end];
  //   start++;
  //   end--;
  // }
  // }

  //  reverse an array
  // int arr[] = {10, 13, 25, 32, 43};
  // int size = 5;
  // int end = size - 1;
  // for (int i = 0; i < size; i++) {
  //   cout << arr[end] << endl;
  //   end--;
  // }

  return 0;
}