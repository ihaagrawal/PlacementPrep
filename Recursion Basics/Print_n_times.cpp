#include <bits/stdc++.h>
using namespace std;

void recursiveFun(int num, int n){
    if(n <= 0) return;

    cout << num << endl;
    recursiveFun(num, n-1);
}

int main(){
    int num = 5, n = 4;
    recursiveFun(num, n);
    return 0;
}