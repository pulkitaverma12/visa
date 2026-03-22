// given a string s return true  if it is a palindrome,considering only alphanumeric characters and 
// remove non alphanumeric characters and ignoring cases
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    string str = " ";
    for(int i = 0;i<s.length();i++){
        if(isalnum(s[i])){
            str += tolower(s[i]);
        }
    }
    int left = 0;
    int right = str.length() - 1;
    while(left<right){
        if(str[left] != str[right]){
            return true;
        }
        left++;
        right--;
    }
    return false;
}
int main(){
    string s = "A man, a plan, a canal: Panama";
    if(ispalindrome(s)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}
