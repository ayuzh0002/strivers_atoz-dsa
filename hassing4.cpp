#include<bits/stdc++.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre-compute
    int high,low,high_value,low_value;
    int hash[50]={0};
    high=0;
    low=hash[arr[0]];
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
        if(hash[arr[i]]>high){
            high=hash[arr[i]];
            high_value=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(hash[arr[i]]<low){
            low=hash[arr[i]];
            low_value=arr[i];
        }
    }
    cout<<"Enter no of checking you wish to perform"<<endl;
    int q; //q is the no the characters to check
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<< hash[number]<<endl;
    }

    cout<<"Highest Frequency "<<high<<" of element "<<high_value<<endl;
    cout<<"Lowest Frequency "<<low<<" of element "<<low_value<<endl;
    
    return 0;
}