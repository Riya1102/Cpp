#include<bits/stdc++.h>
using namespace std;

class Words{
    public:
    int size;
    string word;
};

int countNoOFWords(string s){
    int n = s.length(),ans=0;
    char c[n];
    for(int i=0;i<n;i++){
        c[i] = s[i];
    }
    for(int i=0;i<n;i++){
        if(*(c+i) == ' '){
            ans++;
        }
    }
    ans++;
    return ans;
}

string concatAscending(string s){
    int n = s.length(),cnt=0,size=0,wordElement=countNoOFWords(s),maxSize=0;
    Words w[wordElement];
    string ans="";
    char c[n];
    for(int i=0;i<n;i++){
        c[i] = s[i];
    }
    string word = "";
    for(int i=0;i<n;i++){
        if(*(c+i) == ' '){
            (w+cnt)->size = size;
            (w+cnt)->word = word;
            maxSize = max(maxSize,size);
            cnt++;
            word="";
            size=0;
        }else{
            word.push_back(*(c+i));
            size++;
        }
    }
    (w+cnt)->size = size;
    (w+cnt)->word = word;
    maxSize = max(maxSize,size);
    for(int i=1;i<=maxSize;i++){
        for(int j=0;j<wordElement;j++){
            if((w+j)->size==i){
                ans+=((w+j)->word + " ");
            }
        }
    }
    return ans;
    
}

int main(){
    string s1,s2;
    cout<<"Enter first string(without any extra space).\n";
    getline(cin,s1);
    fflush(stdin);
    cout<<"Enter second string(without any extra space).\n";
    getline(cin,s2);
    fflush(stdin);
    cout<<"\nFinal string : "<<concatAscending(s1+" "+s2)<<endl;
    return 0;
}