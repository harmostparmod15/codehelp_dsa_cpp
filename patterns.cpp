#include <iostream>
using namespace std;

int main(){
  

   //  rectange pattern
  //   for(int i=0; i<3;i++){
  //     for(int j=0;j<5;j++){
  //       cout<<"*";
  //     }
  //     cout<<endl;
  //   }
  // }

  //  square  patterns
  // cout << "enter no of rows u want" << endl;
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // hollow recatangle
  // cout << "enter rows" << endl;
  // int rowCount, colCount;
  // cin >> rowCount;
  // cin >> colCount;
  // for (int i = 0; i < rowCount; i++) {
  //   if (i == 0 || i == rowCount -1) {
  //     for (int j = 0; j < colCount; j++) {
  //       cout << "*";
  //     }
  //   } else {
  //     cout << "*";
  //     for (int i = 0; i < colCount - 2; i++) {
  //       cout << " ";
  //     }
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  //  half pyramid
  // cout<<"enter n"<<endl;
  // int n;
  // cin>>n;

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i+1;j++){
  //     cout<<"* ";
  //   }
  // cout<<endl;
  // }

  //  inverted half pyramid
  // cout<<"enter n"<<endl;
  // int n;
  // cin>>n;

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<(n-i);j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //  numeric half pyramid
  // cout << "enter n";
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << j+1<<" ";
  //   }
  //   cout << endl;
  // }

  //  inverted numeric half pyramid
  // cout<<"enter n";
  // int n;
  // cin>>n;

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i;j++){
  //     cout<<j+1<<" ";
  //   }
  //   cout<<endl;
  // }

  //  full pyramid
  // cout<<"enter n";
  // int n;
  //   cin>>n;
  //   for(int i=0;i<n;i++){
  //     for(int space=0;space<n-(i+1);space++){
  //       cout<<" ";
  //     }
  //     for(int j=0;j<i+1;j++){
  //       cout<<"* ";
  //     }
  //     cout<<endl;
  //   }


  //  inverted full pyramid
  // cout << "enter n" << endl;
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int space = 0; space < i; space++) {
  //     cout << " ";
  //   }
  //   for (int j = 0; j < n - i; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  //

  //  hollow sqaure pattern
  // cout << "enter n";
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   if (i == 0 || i == n - 1) {
  //     for (int j = 0; j < n; j++) {
  //       cout << "* ";
  //     }
  //   } else {
  //     cout << "* ";
  //     for (int i = 0; i < n-2 ; i++) {
  //       cout << "  ";
  //     }
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // hollow inverted half pyramid
  // cout << "enter n";
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {

  // for(int j=0;j<n;j++){
  //   if(i==0 || j==0 ||j==n-i-1){
  //     cout<<"*";
  //   }
  //   else{
  //     cout<<" ";
  //   }
  // }

  //   cout << endl;
  // }

  // diamond patter
  // cout << "enter n for diamond pattern" << endl;
  // int n;
  // cin >> n;

  // for (int i = 0; i < n; i++) {
  //   for (int space = 0; space < n - i - 1; space++) {
  //     cout << " ";
  //   }
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < n; i++) {
  //   for (int space = 0; space < i; space++) {
  //     cout << " ";
  //   }
  //   for (int j = 0; j < n - i; j++) {
  //     cout << "* ";
  //   }

  //   cout << endl;
  // }

  // hollow full pyramid
  // cout << "enter n";
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int spc = 0; spc < n - i - 1; spc++) {
  //     cout << " ";
  //   }
  //   for (int j = 0; j < 2 * i + 1; j++) {
  //     if (j == 0) {
  //       cout << "*";
  //     } else if (j == 2 * i) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }

  //   cout << endl;
  // }
  // for (int i = 0; i < n; i++) {
  //   for (int spc = 0; spc < i; spc++) {
  //     cout << " ";
  //   }
  //   for (int j = 0; j < 2 * n - 2 * i - 1 ; j++) {
  //     if (j == 0 || j == 2 * n - 2 * i - 2) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // numeric half pyramid
  // cout<<"enter n";
  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int space=0;space<n-i-1;space++){
  //     cout<<" ";
  //   }
  //   for(int j=0;j<i+1;j++){
  //     cout<<j+1<<" ";
  //   }
  //   cout<<endl;

  // }

  //  flipped solid diamond
  // cout << "enter n";
  // int n;
  // cin >> n;
  // //  uper portion
  // //  stars
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n - i; j++) {
  //     cout << "*";
  //   }
  //   //  space pyramid

  //   for (int j = 0; j < 2 * i + 1; j++) {
  //     cout << " ";
  //   }

  //   // stars firse
  //   for (int j = 0; j < n - i; j++) {
  //     cout << "*";
  //   }

  //   cout << endl;
  // }
  // // lower portion
  // //  stars
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << "*";
  //   }

  //   // spaces pyramid
  //   for (int j = 0; j < 2 * n - 2 * i - 1;j++) {
  //     cout << " ";
  //   }

  //   // stars again
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << "*";
  //   }

  //   cout << endl;
  // }

  // fancy pattern2
  // cout<<"enter n";
  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i+1;j++){
  //     cout<<i+1;
  //     if(j!=i){
  //       cout<<"*";
  //     }
  //   }
  //   cout<<endl;
  // }
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i;j++){
  //     cout<<n-i;
  //     if(j!=n-i-1){
  //       cout<<"*";
  //     }
  //   }
  //   cout<<endl;
  // }

  // numeric half hollow pyramid
  // cout << "enter n";
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < i + 1; j++) {
  //     if (j == 0 || j ==i || i==n-1) {
  //       cout << j+1;
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  //  numeric inverted hollow half pyramid
  // cout << "enter n";
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = i + 1; j <= n; j++) {

  //     if (j == i+1 || i == 0 || j == n ) {
  //       cout << j;
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  //  numeric  fulll pyramid
  // cout<<"enter n";
  // int n;
  // cin>>n;
  // int k=n;

  // for(int i=0;i<n;i++){
  //     int c=1;
  //   for(int j=0;j<k;j++){
  //     if(j<n-i-1){
  //       cout<<" ";
  //     }
  //     else if(j<=n-1){
  //       cout<<c;
  //       c++;
  //     }
  //     else if(j==n){
  //       c=c-2;
  //       cout<<c;
  //       c--;
  //     }
  //     else{
  //       cout<<c;
  //       c--;
  //     }
  //   }
  //   k++;
  //   cout<<endl;
  // }

  //  solid half diamond
  // cout<<"enter n";
  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i+1;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i-1;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // fancy pattern 1
  // cout<<"enter n";
  // int n;
  // cin>>n;
  // int c=1;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<17;j++){
  //     if(j<8-i){
  //       cout<<"*";
  //     }
  //     else if(j>=8-i && j<=8+i){
  //       cout<<c;
  //     }
  //     else{
  //       cout<<"*";
  //     }
  //   }
  //   c++;
  //   cout<<endl;
  // }

  // fancy patter n2
  // cout<<"enter n";
  // int n;
  // cin>>n;
  // int c=1;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i+1;j++){
  //     cout<<c;
  //     c++;
  //     if(j<i){
  //       cout<<"*";
  //     }
  //   }
  //   cout<<endl;
  // }
  // int start = c-n;
  // for(int i=0;i<n;i++){
  //   int k = start;

  //   for(int j=0;j<n-i;j++){
  //     cout<<k;
  //      k++;
  //     if(j<n-i-1){
  //       cout<<"*";
  //     }
  //   }
  //   start = start-(n-i-1);
  //   cout<<endl;
  // }

  // floyd's traingle pattern
  // cout<<"enter n";
  // int n;
  // cin>>n;
  // int c = 1;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i+1;j++){
  //     cout<<c<<" ";
  //     c++;
  //   }
  //   cout<<endl;
  // }

  //  pascal trinagle
  // cout << "enter n";
  // int n;
  // cin >> n;
  // for (int i = 1; i <= n; i++) {
  //   int C = 1;
  //   for (int j = 1; j <=i ; j++) {
  //     cout << C << " ";
  //     C = C * (i - j) / j;
  //   }
  //   cout << endl;
  // }

  //  fancy butterfly pattern
  // cout<<"enter n";
  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i+1;j++){
  //     cout<<"*";
  //   }
  //   for(int k=0;k<n-i;k++){
  //     cout<<"  ";
  //   }
  //   for(int l=0;l<i+1;l++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i;j++){
  //     cout<<"*";
  //   }
  //   for(int k=0;k<i+1;k++){
  //       cout<<"  ";
  //     }
  //     for(int l=0;l<n-i;l++){
  //       cout<<"*";
  //     }

  //   cout<<endl;
  // }

  return 0;
}
