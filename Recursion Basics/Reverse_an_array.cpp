#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int n, vector<int> &arr){
    if(i >= n) return;
    reverse(i+1, n, arr);
    cout << arr[i] << " ";
}

int main(){
    int n = 6;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    reverse(1, n, arr);
    return 0;
}

