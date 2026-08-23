#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print name count times
    void printName(int N,int count) {
        // Base case: if count equals N, stop recursion
        if(count>N)
        return;

        cout<<count<<endl;

        printName(N,count+1);

    }
};

int main() {
    Solution sol;
    int N = 5;
    sol.printName(N,1);

    return 0;
}
