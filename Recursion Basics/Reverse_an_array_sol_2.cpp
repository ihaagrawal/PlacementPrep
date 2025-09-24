#include <bits/stdc++.h>
using namespace std;

void reverse(int n, vector<int> &arr){
    if(n < 0) return;
    cout << arr[n] << " ";
    reverse(n-1, arr);
}

int main(){
    int n = 6;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    reverse(n-1, arr);
    return 0;
}