#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// int sqrRoot(int n) {
//   int s = 0;
//   int e = n;
//   int mid = s + (e - s) / 2;
//   int ans = -1;
//   while (s <= e) {
//     if (mid * mid == n) {
//       return mid;
//     } else if (mid * mid > n) {
//       e = mid - 1;
//     } else if (mid * mid < n) {
//       ans = mid;
//       s = mid + 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return ans;
// }

// bool search2d(int arr[][3], int target, int rows, int cols) {
//   int s = 0;
//   int e = rows * cols - 1;
//   int mid = s + (e - s) / 2;
//   while (s <= e) {
//     int rowIndex = mid / cols;
//     int colIndex = mid % cols;
//     if (arr[rowIndex][colIndex] == target) {
//       return true;
//     } else if (arr[rowIndex][colIndex] < target) {
//       s = mid + 1;
//     } else {
//       e = mid - 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return false;
// }

// int binarySearch(vector<int> arr, int target) {
//   int s = 0;
//   int e = arr.size() - 1;
//   int mid = s + (e - s) / 2;

//   while (s <= e) {
//     if (arr[mid] == target || arr[mid - 1] == target || arr[mid + 1] ==
//     target) {
//       return mid;
//     } else if (arr[mid] < target) {
//       s = mid + 1;
//     } else {
//       e = mid - 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return -1;
// }

// int pivot(vector<int> arr) {
//   int s = 0;
//   int e = arr.size() - 1;
//   int mid = s + (e - s) / 2;

//   while (s < e) {
//     if (arr[mid] < arr[mid + 1]) {
//       s = mid + 1;
//     } else {
//       e = mid;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return s;
// }

// int firstOcc(vector<int> arr, int target) {
//   int s = 0;
//   int e = arr.size() - 1;
//   int mid = s + (e - s) / 2;
//   int ans;

//   while (s <= e) {
//     if (arr[mid] == target) {
//       ans = mid;
//       e = mid - 1;
//     } else if (arr[mid] > target) {
//       e = mid - 1;
//     } else {

//       s = mid + 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return ans;
// }

// int lastOcc(vector<int> arr, int target) {
//   int s = 0;
//   int e = arr.size() - 1;
//   int mid = s + (e - s) / 2;
//   int ans;

//   while (s <= e) {
//     if (arr[mid] == target) {
//       ans = mid;
//       s = mid + 1;
//     } else if (arr[mid] < target) {
//       s = mid + 1;
//     } else {
//       e = mid - 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return ans;
// }

// int bs(int arr[], int s, int e, int x) {
//   int mid = s + (e - s) / 2;
//   while (s <= e) {
//     if (arr[mid] == x) {
//       return mid;
//     } else if (arr[mid] < x) {
//       s = mid + 1;
//     } else {
//       e = mid - 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return 0;
// }
// int expo(int arr[], int n, int x) {
//   if (arr[0] == x)
//     return 0;
//   int i = 1;
//   while (i < n && arr[i] <= x) {
//     i = i * 2;
//   }
//   return bs(arr, i / 2,i, x);
// }

int main() {

  // square root of number by binary search
  //   vector<int> arr{10};
  //   cout << "enter number" << endl;
  //   int n;
  //   cin >> n;
  // int result = sqrRoot(n);
  //   cout<<"answer is :"<<result;

  //  binary search in a 2-d array
  // int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
  // int target = 20;
  // int rows = 3;
  // int cols = 3;
  // bool ans = search2d(arr, target, rows, cols);

  // if (ans) {
  //   cout << "found";
  // } else {
  //   cout << "no found";
  // }

  //  bibnary search in neatrly sorted or rotated array
  // vector<int> arr{10, 3, 40, 20, 50, 80, 70};
  // int target = 40;
  // int ans = binarySearch(arr, target);
  // cout << "index of " << target << " is at :" << ans;

  //  finding peak element by binary search
  // vector<int> arr{0, 10, 5, 2};
  // int ans = pivot(arr);
  // cout << "peak element is "<<arr[ans]<<" at index "<<ans;

  //  total occurence of element in array by binary search
  // vector<int> arr{1, 3, 3, 3, 3, 3, 3, 4};
  // int target = 3;
  // int ans = firstOcc(arr, target);
  // cout << "first occurence of " << target << " is " << ans << endl;
  // int ans2 = lastOcc(arr, target);
  // cout << "last occurence of " << target << " is " << ans2 << endl;
  // int total = ans2 - ans + 1;
  // cout << "total occurence of " << target << " is " << total;

  // /find k diff paris in array
  // vector<int> arr{3, 1, 4, 1, 5};
  // int k = 2;
  // sort(arr.begin(), arr.end());

  // int i = 0;
  // int j = 1;
  // while (j < arr.size()) {
  //   if (arr[j] - arr[i] == k) {
  //     cout << arr[i] << " " << arr[j] << endl;
  //     i++;
  //     j++;
  //   } else if (arr[j] - arr[i] < k) {
  //     j++;
  //   } else {
  //     i++;
  //   }
  // }

  //  exponential search in large sorted arrays
  // int arr[] = {3, 5, 6, 11, 13, 14, 15, 56, 70};
  // int n = sizeof(arr) / sizeof(int);
  // int x = 13;
  // int ans = expo(arr, n, x);
  // cout << "answer is ;" << ans;

  return 0;
}