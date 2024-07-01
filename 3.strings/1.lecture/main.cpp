#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;

string removeAdjacent(string s){
	string ans = "" ;
	int n = s.size();
	for(int i=0;i<n;i++){
		int ansSize = ans.size();
		if(ans[ansSize -1] == s[i])
			ans.pop_back();
		else{
			ans.push_back(s[i]);
		}
	}
      	int nn = ans.size();
    	ans = ans.substr(1 , nn);
	return ans;
}


string removeOcc(string s , string sub){
	 while(s.find(sub) != string::npos){
                int idx = s.find(sub);
                s.erase(idx , sub.size());
        }
	return s;
}


        bool checkPalindrome(string s , int i , int j){
		cout<<"in fn string"<<s<<endl;
		cout<<" in fn i val :"<<i<<endl;
            while(i<=j){
                if (s[i] != s[j]) return false;
                i++;
                j--;
            }
            return true;
        }


        bool validPalindrome(string s){
        int i = 0;
        int j =  s.size() -1;
        while(i<=j){
                if(s[i] != s[j]){
                return checkPalindrome(s ,i+1,j) || checkPalindrome(s , i , j-1);
                }
                else{
                    i++;
                    j--;
                }
          
        }
  return true;
           
}


int findMinDiff(vector<string> timePoints){
	vector<int>minutes;
	for(int i=0;i<timePoints.size();i++){
		string curr = timePoints[i];
		int hours = stoi(curr.substr(0,2));
		int min = stoi(curr.substr(3,2));
		int totalMinutes = 60 * hours + min;
		minutes.push_back(totalMinutes);
	}
	sort(minutes.begin() , minutes.end());
	int mini = INT_MAX;
	for(int i=0;i<minutes.size()-1;i++){
		int diff = minutes[i+1] - minutes[i];
		mini = min(mini , diff);

	}

	int lastDiff = 	(minutes[0] + 1440 ) - minutes[minutes.size() - 1 ];
	mini = min(mini , lastDiff);
	return mini;
}


   int countSubstrings(string s){
        int count = 0;
        for(int i=0;i<s.size();i++){
                for( int j=i;j<s.size();j++){
//                      cout<<s[j];

                        bool isPalin = checkPalindrome(s ,i ,  j);
                        // cout<<"is palindrome : "<<isPalin<<endl;
                        if(isPalin) count ++;

                }
                // cout<<endl;
        }
        // cout<<"no of palindrome substrings : "<<count<<endl;
        return count;
}




int main(){

// adjacent char removal of string
/*
//string s = "azxxzy";
//string ans = removeAdjacent(s);
//cout<<"ans : "<<ans<<endl;
*/

// remove all occurences of a substr in str
/*
string s = "daabcbaabcbc";
string sub = "abc";
string ans = removeOcc(s , sub);
cout<<"ans : "<<ans<<endl;
*/

// valid palindrome version 2
/*
string s ="abca";
bool ans = validPalindrome(s);
ans == true ? cout<<"yes" : cout<<"no" ;
*/

// 539 leetcode
// return minimum minutes from the timepoint array


// 647 leetcode
// palindromic substrings
/*
string s = "abc";
countSubstrings(s);
*/

	
// complete




return ;


}

