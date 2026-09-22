#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> quickSort(vector<int>& nums,int low,int high) {
        if(low<high){
            int pivotIndex=partition(nums,low,high);
            // Recursively sort elements before pivotIndex
            quickSort(nums,low,pivotIndex-1);
            // Recursively sort elements after pivotIndex
            quickSort(nums,pivotIndex+1,high);
        }
    }

    int partition(vector<int>& nums,int low, int high){
        // chooose last element as pivot
        int pivot = nums[high];
        // initialise i to place smaller elements
        int i=low-1;
        // transverse the array
        for(int j=low;j<high;j++){
            // if elements is smaller than or equal to pivot
            if(nums[j]<=pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }
    }
};

int main(){
    vector<int> arr={4,2,1,5,7};
    Solution sol;

    sol.quickSort(arr,0,arr.size()-1);
    for(int num:arr)
    cout<<num<<" ";

    return 0;
}