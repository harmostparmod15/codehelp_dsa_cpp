#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// void printRowSum(int arr[][3] , int rows , int cols){
//   for(int i=0;i<rows;i++){
//     int sum =0;
//     for(int j=0;j<cols;j++){
//       sum += arr[i][j];
//     }
//     cout<<sum<<endl;
//   }
// }

// void printColSum(int arr[][3] , int rows , int cols){
//   for(int i=0;i<rows;i++){
//     int sum = 0;
//     for(int j=0;j<cols;j++){
//       sum += arr[j][i];
//     }
//     cout<<sum<<endl;
//   }
// }

// bool findKey(int arr[][3] , int rows , int cols , int key){
//   for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//       if(arr[i][j] == key){
//         return true;
//       }
//     }
//   }
//   return false;
// }

// int findMax(int arr[][3] , int rows , int cols){
//   int maxi = INT_MIN;
//   for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//       if(arr[i][j] > maxi){
//         maxi =  arr[i][j];
//       }
//     }
//   }
//   return maxi;
// }

// int findMin(int arr[][3] , int rows , int cols){
//   int mini = INT_MAX;
//   for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//       if(arr[i][j] < mini){
//         mini = arr[i][j];
//       }
//     }
//   }
//   return mini;
// }

// void printArr(int arr[][3], int rows, int cols) {
//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }
// void transpose(int arr[][3], int transposeArr[][3], int rows, int cols) {
//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       transposeArr[j][i] = arr[i][j];
//     }
//   }
// }

int main() {
  // ** 2-d arrays **

  // declaring and accesing in 2-d arrays
  // int arr[3][3] = {{1,2,3},{4,3,2},{5,9,3},};
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // print sum of row-wise
  //   int arr[3][3] = {{1,2,3},{1,3,7},{4,6,8}};
  // int rows = 3;
  //   int cols = 3;
  //   printRowSum(arr ,rows, cols);

  // print sum of column-wise
  //   int arr[3][3] = {{1,2,3},{5,3,7},{4,6,8}};
  // int rows = 3;
  //   int cols = 3;
  //   printColSum(arr ,rows, cols);

  //  linear searching in 2-d arrays
  //  int arr[3][3] = {{1,4,8},{5,4,12},{43,21,4}};
  //  int rows = 3;
  //  int cols = 3;
  //  int key = 12;
  // if(findKey(arr,rows,cols,key)){
  //   cout<<"key found";
  // }
  //  else{
  //    cout<<"key not found";
  //  }

  // maximum number in 2-d array
  // int arr[3][3] = {{1,3,4},{4,30,5},{6,5,2}};
  // int rows = 3;
  // int cols = 3;
  // int result = findMax(arr,rows,cols);
  // cout<<"maximum number in array is :"<<result;

  //  minimum number in 2-d array
  // int arr[3][3] = {{1,-3,0},{-4,30,5},{6,5,2}};
  // int rows = 3;
  // int cols = 3;
  // int result = findMin(arr,rows,cols);
  // cout<<"minimum number in array is :"<<result;

  //  transposing an array rows=cols and cols= rows
  // int arr[3][3] = {{2, 4, 6}, {1, 3, 5}, {5, 11, 13}};
  // int rows = 3;
  // int cols = 3;
  // cout << "before transposing" << endl;
  // printArr(arr, rows, cols);
  // cout << "transposing started" << endl;
  // int transposeArr[3][3];
  // transpose(arr, transposeArr, rows, cols);
  // cout << "after transposing" << endl;
  // printArr(transposeArr, rows, cols);

  // ** 2-d vectors
  // declaring a 2-d vector
  // vector<vector<int> >arr(5 , vector<int>(5,-8));
  // for(int i=0;i<arr.size();i++){
  //   for(int j=0;j<arr[i].size();j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  return 0;
}