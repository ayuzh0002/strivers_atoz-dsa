#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;

    //pre-compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    cout<<"Enter no of checking you wish to perform"<<endl;
    int q; //q is the no the characters to check
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<< hash[c-'a']<<endl;
    }
    return 0;
}