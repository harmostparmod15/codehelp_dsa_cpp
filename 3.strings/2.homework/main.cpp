#include<iostream>
#include<string.h>
using namespace std;

    bool isAnagram(string s, string t) {
	// brute o(n*m + m)    
       /* int i=0;
        int n = s.size();
        int m = t.size();
        if(n != m) return false;
        while(i<n){
            for(int j=0;j<m;j++){
                // cout<<"s :"<<s[i]<<" t : "<<t[j]<<endl;
                if(s[i] == t[j]) {
                    t[j] = '1';
                    break;
                    }
            }
            i++;
        }
        // count the 1s and match with size of str
        int count = 0;
        for(int i=0;i<m;i++){
            if(t[i] == '1') count ++;
        }
        cout<<count<<endl;
        // count cond check
        if(count == m) return true;
        else return false;
   */
	
	    // optimal or better T.C = o(n + m) ~= o(n) S.C = o(n)
        int i=0;
        int n = s.size();
        int m = t.size();
        map<char , int>mpp;
        bool flag = false;
        // map<char , int>mpp2;
        if(n != m) return false;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        // traverse t string
        for(int j=0;j<m;j++){
            if(mpp.find(t[j]) != mpp.end())
                    {
                         auto it = mpp.find(t[j]);
                        if(it->second == 0) return false;
                        flag = true;
                        it->second --;

                    }
            // else if ()
            else return false;
        }
        return flag;

    	}

    bool isValidChar(char ch){
        int asci = (int)ch;
        // cout<<ch<<asci<<endl;
        if((asci >=65 && asci <=90) || (asci >=97 && asci <= 122)) return true;
        else return false;
    }

    string reverseOnlyLetters(string s) {
      int i=0;
      int n =s.size();
      int j =n-1;
      while(i<j){
            if(isValidChar(s[i]) && isValidChar(s[j])){
                swap(s[i] , s[j]);
                i++;
                j--;
            }
            else if (!isValidChar(s[i]) && isValidChar(s[j])) i++;
            else if (isValidChar(s[i]) && !isValidChar(s[j])) j--;
            else {
                i++;
                j--;
            }
      }   
      return s;
    }



    string longestCommonPrefix(vector<string>& strs) {
        string  ans;
        int i=0;
        while(true){
            char curr = 0;
            for(auto str : strs){
                if(i>=str.size()){
                    curr =0;break;
                }
                if(curr == 0)
                        curr = str[i];
                else if (str[i] != curr){
                    curr =0;
                    break;
                }
            }
            if(curr == 0) break;
            ans.push_back(curr);
            i++;
        }
        return  ans;
    }


    bool isVow(char ch){
        bool flag = false;
        if( (ch == 'a') || (ch=='A') || (ch=='e') || (ch=='E') || (ch=='i') || (ch=='I') || (ch=='o') || (ch=='O') || (ch=='u') || (ch == 'U')) {
                flag = true;
        }
        return flag;
    }

    string reverseVowels(string s) {
        int n = s.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(isVow(s[i]) && isVow(s[j])){
                swap(s[i] , s[j]);
                i++;j--;
            }
            else if (!isVow(s[i]) && isVow(s[j])) i++;
            else if (isVow(s[i]) && !isVow(s[j])) j--;
            else {
                i++;j--;
            }
        }   
        return s;
    }


    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool mapped[256] = {0};

        for(int i=0;i<s.size();i++){
            if( hash[s[i]] == 0 && mapped[t[i]] == 0){
                hash[s[i]]  = t[i];
                mapped[t[i]] = true;
            }

        }
        for(int i=0;i<s.size();i++){
            if(char(hash[ s[i]]) != t[i]){
                return false;
            }
        }
        return true;
    }






int main(){

// 1:
/*  valid anagram leetcode 242
 string s = "anagram";
 string t = "nagaram";
 bool ans =  isAnagram(s , t);
 cout<<ans;
*/

// 2:
// reverse only letter 917
/* string s = "7_28]";
   string ans =  reverseOnlyLetters(s);
  */

// 3 :
// longest common prefix leetcode 14
// vector<string> strs = ["flower","flow","flight"]


// 4:
// reverse vowels of a string leetcode 345
/* string s ="hello";
  string ans = reverseVowels(s);
  cout<<ans;
*/

// 5:
/* isomorphic string leetcode 205
// string  s = "egg"; string t = "add"
// bool ans = isIsomorphic(s , t);
*/ cout<<ans;
