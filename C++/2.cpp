//2
#include<iostream>
  #include<string>
  using namespace std;
  int main(){
  string s;
  cout<<"Enter the string of brackets :\n";
  cin>>s;
  int n;
  while(s[n]!='\0'){
      n++;
  }
int mid=(n-1)/2;
for(int i=0,j=n-1;(i<=mid && j>mid);i++,j--){
if(s[i]=='{'&&s[j]=='}')
continue;
else if(s[i]=='('&&s[j]==')')
continue;
else if(s[i]=='['&&s[j]==']')
continue;
else{
    cout<<"Unbalanced";
    exit(0);
}
}
    cout<<"Balanced";
    return 0;
}