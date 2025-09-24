#include <bits/stdc++.h>
using namespace std;

void recursiveFun(int num, int n){
    if(num > n) return;
    recursiveFun(num + 1, n);
    cout << num << endl;
}

int main(){
    int n = 5;
    recursiveFun(1, n);
    return 0;
}