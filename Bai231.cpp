#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; cin>>t; while(t--){ string s1,s2; cin>>s1>>s2; map<char,int>mp1,mp2; for(auto x:s2){ mp2[x]++; } int ans=1e9,ptr=0,pos=-1,cnt=0; for(int i=0;i<s1.size();i++){ mp1[s1[i]]++; if(mp1[s1[i]]<=mp2[s1[i]]) ++cnt; if(cnt==s2.size()){ while(mp1[s1[ptr]]>mp2[s1[ptr]]||mp2[s1[ptr]]==0){ if(mp1[s1[ptr]]>mp2[s1[ptr]]){ mp1[s1[ptr]]--; } ++ptr; } if(ans>i-ptr+1){ ans=i-ptr+1; pos=ptr; } } } if(pos==-1) cout<<"-1\n"; else cout<<s1.substr(pos,ans)<<endl; } }