#include <bits/stdc++.h>
using namespace std;

string check(int start, int end, string &str){
    if(start > end) return "Palindrome";
    if(str[start] != str[end]) return "Not Palindrome";
    return check(start+1, end-1, str);
}

int main(){
    string str = "madam";
    int n = str.size();
    cout << check(0, n-1, str) << endl;
}