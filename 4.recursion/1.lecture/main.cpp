#include<iostream>
#include<vector>
#include<limits.h>
#include<string>
using namespace std;

void printSub(string s , string output , int i){

// base
 if(i >= s.length()){
 	cout<<output<<endl;
	return;
 }

 // exclude wala case
 printSub(s , output , i+1);

 // include wala case
 output.push_back(s[i]);
 printSub(s , output , i+1);

}

int coinChain(vector<int>v , int target){
// base
 if(target == 0){
	return 0 ;
 }
 if(target <0){
 	return INT_MAX;
 }
	
 // traverse arr and make calls
 int mini = INT_MAX;
 for(int i=0;i<v.size() ; i++){
 	int ans =  coinChain(v , target - v[i]);
	if(ans != INT_MAX)
		mini = min(ans+1 , mini);
 }
 return mini;

}


int segment(int n,int x , int y , int z){
if(n==0) return 0;
if(n<0) return INT_MIN;
int a = segment(n-x ,x,y,z) + 1;
int b = segment(n-y,x,y,z) + 1 ; 	
int c = segment(n-z,x,y,z) + 1;

int ans = max(a,max(b,c));
//if(ans <0) return 0;
return  ans ;

}


int main(){

// basic recursion questions


/* print all substrings of a given string
string s = "ab";
string output = "";
int i = 0;
printSub(s , output , i);
*/


/* coin chain problem
vector<int>v = {1,2};
int target = 5;
int ans =  coinChain(v ,target );
cout<<ans<<endl;
*/



/* cut into segment
int n=7;int x= 5;int y=2;int z =2;
int ans = segment(n ,x,y,z);
if(ans <0) cout<<0<<endl;
else
	cout<<ans<<endl;
*/






return 0;
}
