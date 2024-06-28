#include <iostream>
#include <string.h>
#include <utility>
using namespace std;

// int getLength(char arr[]) {
//   int length = 0;
//   int i = 0;
//   while (arr[i] != '\0') {
//     length++;
//     i++;
//   }
//   return length;
// }

// void reverseChar(char arr[]) {
//   int i = 0;
//   int n = getLength(arr);
//   int j = n - 1;
//   while (i <= j) {
//     swap(arr[i], arr[j]);
//     i++;
//     j--;
//   }
//
// }

// void replaceSpace(char arr[]) {
//   int i = 0;
//   int n = strlen(arr);
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == ' ') {
//       arr[i] = '@';
//     }
//   }
// }

// bool checkPalindrome(char arr[]){
// int i=0;
//   int j = strlen(arr)-1;
//   while(i<=j){
//     if(arr[i]==arr[j]){
//        return true;
//       i++;
//       j--;
//     }
//     else{
//       return false;
//     }
//   }

// }

// void convertUpper(char arr[]) {
//   int n = strlen(arr);
//   for (int i = 0; i < n; i++) {
//     arr[i] = arr[i] - 'a' + 'A';
//   }
// }

// void convertLower(char arr[]) {
//   int n = strlen(arr);
//   for (int i = 0; i < n; i++) {
//     arr[i] = arr[i] - 'A' + 'a';
//   }
// }

int main() {

  // creating a character array
  // char ch[4];
  // cout << "enter name" << endl;
  // cin >> ch;
  // cout << ch;
  // char ch[100];
  //  cout<<"enter name"<<endl;
  //  cin.getline(ch,50);
  //  cout<<ch;

  //  counting length of char array
  // char arr[50];
  // cout<<"enter name"<<endl;
  // cin >> arr;
  // int ans = getLength(arr);
  // cout<<"length of arrays is :"<<ans;

  //  reverse a string
  // char arr[50];
  // cout << "enter name" << endl;
  // cin >> arr;
  // cout << "initially is :" << arr << endl;
  // reverseChar(arr);
  // cout << "reversed array is :" << arr << endl;

  //  replace space of string
  // char arr[100];
  // cin.getline(arr, 80);
  // cout << "array with spaces :" << arr << endl;
  // replaceSpace(arr);
  // cout << "array without spaces :" << arr;

  //  checking of palindrome
  // char arr[100];
  // cout<<"enter word";
  // cin>>arr;
  // bool result = checkPalindrome(arr);
  // if(result){
  //   cout<<"is a palindrome";
  // }
  // else{
  //   cout<<"not a palindorme";
  // }

  //  converting lowercase to uppercase
  // char arr[100] = "babbar";
  // convertUpper(arr);
  // cout << "upper cased :" << arr;
  // convertLower(arr);
  // cout << "lower cased :" << arr;

  //  **** STRINGS ******
  //   string str;
  //   cout<<"enter any string"<<endl;
  //   cin>>str;
  // cout<<str;

  return 0;
}