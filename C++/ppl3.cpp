#include<bits/stdc++.h>
using namespace std;

string reverseString(string s,int n){
    char c[n];
    for(int i=0;i<n;i++){
        c[i] = s[i];
    }
    string ans;
    for(int i=n-1;i>=0;i--){
        ans.push_back(*(c+i));
    }
    return ans;
}

string Convert(string s,int n){
    string ans  = "";
    char c[n];
    for(int i=0;i<n;i++){
        c[i] = s[i];
    }
    string word = "";
    for(int i=0;i<n;i++){
        if(*(c+i) == ' '){
            ans += (reverseString(word,word.length()) + " ");
            word="";
        }else{
            word.push_back(*(c+i));
        }
    }
    ans += (reverseString(word,word.length()) + " ");
    return ans;
}

int main(){
    string s;
    cout<<"Enter the sentence.\n";
    getline(cin,s);
    cout<<"\nFinal sentence : "<<Convert(s,s.length())<<endl;
    return 0;
}