#include <bits/stdc++.h>
using namespace std;

void recursiveFun(int num, int n, int &sum){
    if(num > n) return;
    sum += num;
    recursiveFun(num + 1, n, sum);
}

int main(){
    int n = 7, sum = 0;
    recursiveFun(1, n, sum);
    cout << sum << endl;
    return 0;
}