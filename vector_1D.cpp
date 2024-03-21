#include <iostream>
#include <vector>
using namespace std;

//  find unique elements in array
// int findUnique(vector<int>arr){
//   int ans = 0;
//   for(int i=0;i<arr.size();i++){
//     ans = ans^arr[i];
//   }
//   return ans;
// }

int main() {

  //  creating a vector, INSERTING AND DELETION FROM A VECTOR
  // vector<int> arr;
  // arr.push_back(5);
  // arr.push_back(7);
  // arr.pop_back();
  // for (int i = 0; i < arr.size(); i++) {
  //   cout << arr[i] << endl;
  // }

  // find unique elements in an array
  // int n;
  //   cin>>n;
  //   vector<int>arr(n);
  //   cout<<"enter the elements";
  //   for(int i=0;i<arr.size();i++){
  //     cin>>arr[i];
  //   }
  // int uniqueElement = findUnique(arr);
  //   cout<<"unique element is "<<uniqueElement;

  //  union of two arrays
  //  int arr[] = {1,3,5,7,9};
  //  int sizea = 5;
  //  int brr[] = {2,4,6,8};
  //  int sizeb = 4;
  //  vector<int>crr;

  //  for(int i=0;i<sizea;i++){
  //    crr.push_back(arr[i]);
  //  }
  //  for(int i=0;i<sizeb;i++){
  //    crr.push_back(brr[i]);
  //  }
  // for(int i=0;i<crr.size();i++){
  //   cout<<crr[i]<<" ";
  // }

  //  intersection of an array
  // vector<int>arr{1,2,3,4,6,8};
  // vector<int>brr{3,4,9,10};
  // vector<int>ans;
  // for(int i=0;i<arr.size();i++){
  //   for(int j=0;j<brr.size();j++){
  //     if(arr[i] == brr[j]){
  //    brr[j] = -1
  //       ans.push_back(arr[i]);
  //     }
  //   }
  // }
  // for(int i=0;i<ans.size();i++){
  //   cout<<ans[i]<<" ";
  // }
  // for each loop
  // for(auto value : ans){
  //   cout<<value<<" ";
  // }

  //  pair sum in an array
  // vector<int>arr{10,20,40,60,70};
  // for(int i=0;i<arr.size();i++){
  //   int element = arr[i];
  //   for(int j=i+1;j<arr.size();j++){
  //     if(element + arr[j] == 50){
  //       cout<<element<<" "<<arr[j];
  //     }
  //   }
  // }

  // triplet sum in an array
  // vector<int>arr{10,20,30,40};
  // int key = 80;
  // for(int i=0;i<arr.size();i++){
  //   int element = arr[i];
  //   for(int j=i+1;j<arr.size();j++){
  //     int element2 = arr[j];
  //     for(int k = j+1;k<arr.size();k++){
  //       if(element + element2 + arr[k] == key){
  //         cout<<element<<" ,"<<element2<<" ,"<<arr[k];
  //       }
  //     }
  //   }
  // }

  // sort 0s and 1s
//   vector<int> arr{0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0};
//   int start = 0;
//   int end = arr.size() - 1;
//   int i = 0;
//   while (start <= end) {
//     if (arr[i] == 0) {
//       swap(arr[i], arr[start]);
//       start++;
//       i++;
//     } else if (arr[i] == 1) {
//       swap(arr[i], arr[end]);
//       end--;
//     }
//   }

  // for(int i=0;i<arr.size();i++){
  //   if(arr[i] == 0){
  //     swap(arr[i] , arr[start]);
  //     start++;
  //   }
  //   else if(arr[i] == 1){
  //     swap(arr[i],arr[end]);
  //       end--;
  //   }
  // }

  // for (auto value : arr) {
  //   cout << value << endl;
  // }

  return 0;
}