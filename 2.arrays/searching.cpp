#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// int binarySearch(int arr[], int size, int target) {
//   int start = 0;
//   int end = size - 1;
//   int mid = start + (end - start) / 2;

//   while (start <= end) {
//     int element = arr[mid];
//     if (element == target) {
//       return mid;
//     } else if (target < element) {
//       end = mid - 1;
//     } else {
//       start = mid + 1;
//     }
//     mid = start + (end - start) / 2;
//   }
//   return -1;
// }

// int firstOccurence(vector<int> v, int target) {
//   int s = 0;
//   int e = v.size() - 1;
//   int mid = s + (e - s) / 2;
//   int index = -1;
//   while (s <= e) {
//     if (v[mid] == target) {
//       index = mid;
//       e = mid - 1;
//     } else if (target > v[mid]) {
//       s = mid + 1;
//     } else if (target < v[mid]) {
//       e = mid - 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return index;
// }

// int lastOcc(vector<int>arr ,int target){
//   int s = 0;
//   int e = arr.size() - 1;
//   int mid = s+ (e-s)/2;
//   int ans = -1;
//   while(s<=e){
//     if(arr[mid] == target){
//       // store ans
//       ans = mid;
//       // right  search kro
//       s = mid +1;
//     }
//     else if(target < arr[mid]){
//       e = mid -1;
//     }
//     else if (target > arr[mid]){
//       s = mid +1;
//     }
//     mid = s+ (e-s)/2;
//   }
//   return ans;
// }

// int binarySearch(vector<int> arr, int target) {
//   int s = 0;
//   int e = arr.size() - 1;
//   int mid = s + (e - s) / 2;

//   while (s <= e) {
//     if (arr[mid] == target) {
//       return mid;
//     }
//     if (mid + 1 < arr.size() && arr[mid + 1] == target) {
//       return mid + 1;
//     }
//     if (mid - 1 > 0 && arr[mid - 1] == target) {
//       return mid - 1;
//     }
//     if (target > arr[mid]) {
//       s = mid + 2;
//     }
//     if (target < arr[mid]) {
//       e = mid - 2;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return -1;
// }

// int solve(int dividend, int divisor) {
//   int s = 0;
//   int e = abs(dividend);
//   int mid = s + (e - s) / 2;
//   int ans;

//   while (s <= e) {
//     if (abs(mid * divisor) == abs(dividend)) {
//       ans = mid;
//       break;
//     } else if (abs(mid * divisor) > abs(dividend)) {
//       e = mid - 1;
//     } else {
//       ans = mid;
//       s = mid + 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)) {
//     return ans;
//   } else {
//     return -ans;
//   }
// }

int main() {

  // binary search in 2-d arrays
  // int arr[] = {2, 4, 6, 8, 10, 12, 16};
  // int target = 16;
  // int size = 7;

  // int index = binarySearch(arr, size, target);
  // if (index == -1) {
  //   cout << "not found";
  // } else {
  //   cout << "target found at index :" << index;
  // }

  // binary search using stl function
  // vector<int>v{1,3,4,5,6};
  // if(binary_search(v.begin() , v.end() , 40)){
  //   cout<<"found";
  // }
  // else{
  //   cout<<"not found";
  // }

  //  find first occurence of element using  binarysearch
  // vector<int> v{1, 3, 4, 4, 4, 4, 6, 7};
  // int target = 4;
  // int indexFirstOccurence = firstOccurence(v, target);
  // cout << "first occurence of " << target
  //      << " is at index :" << indexFirstOccurence;

  //  last occurence of element by binarysearch
  // vector<int>arr{1,3,6,6,6,6,6,6,7};
  // int target = 6;
  // int indexLast = lastOcc(arr , target);
  // cout<<"last occurence is at: "<<indexLast;

  //  total occurence of element by binarysearch
  // vector<int>arr{1,2,3,4,4,4,4};
  // int target = 4;
  // / last occurence - first occurence + 1;

  //  binary search in a nearly sorted array
  // vector<int> arr{10, 3, 40, 20, 50, 80, 70};
  // int target = 50;
  // int ans = binarySearch(arr, target);
  // cout << "index of " << target << "is :" << ans;

  //  dividing numbers by binary search
  // int dividend = 22;
  // int divisor = 7;
  // int ans = solve(dividend, divisor);
  // cout << "ans is " << ans;

  return 0;
}
