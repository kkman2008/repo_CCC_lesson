// https://www.luogu.com.cn/problem/P9301
// Created by JaylonH on 2025/6/2.
// P9301 [CCC 2023 J3] Special Event
// https://dmoj.ca/problem/ccc23j3

/*
 输入 #1
3
YY.Y.
...Y.
.YYY.
输出 #1
4
 */

/*

 输入 #2
5
YY..Y
.YY.Y
.Y.Y.
.YY.Y
Y...Y
输出 #2

2,5
 */

#include <bits/stdc++.h>
#include <map>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<string> ve(n);
    for (int i = 0; i < n; i++) {
        cin >> ve[i];
    }
    int max_p = 0;
    map<int, int> day_event;
    for (int c = 0; c < 5; c++) {
        int current_column_count = 0;
        for (int r = 0; r < n; r++) {
            if ('y' == tolower(ve[r][c])) {
                current_column_count++;
            }
        }
        pair<int, int> pr;
        pr.first = c + 1;
        pr.second = current_column_count;
        max_p = max(max_p,current_column_count);
        day_event.insert(pr);
    }
    string res;

    for(auto pr : day_event){
        if( pr.second == max_p){
            res +=  to_string(pr.first)  +  "," ;
        }
    }
    res = res.substr(0,res.size()-1);
    cout << res << endl;
}
