#include <bits/stdc++.h>
using namespace std;

void recursiveFun(int num, int n){
    if(num > n) return;

    cout << num << endl;
    recursiveFun(num + 1, n);
}

int main(){
    int n = 5;
    recursiveFun(1, n);
    return 0;
}