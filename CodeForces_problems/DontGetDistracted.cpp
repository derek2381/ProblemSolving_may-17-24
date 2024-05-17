// problem link
// https://codeforces.com/problemset/problem/1520/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, i;
        cin >> n;
        string str;
        cin >> str;
        set<char> s;
        int flag = 1;

        for(i = 0; i <n-1;i++){
            if(str[i] != str[i+1]){
                if(s.find(str[i]) != s.end()){
                    flag = 0;
                    break;
                }
                s.insert(str[i]);
            }
        }

        if(s.find(str[i]) == s.end() && flag == 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
