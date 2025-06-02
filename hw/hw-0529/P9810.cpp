// P9810 [CCC 2015 S1] Zero That Out
// Created by JaylonH on 2025/6/2.
// https://www.luogu.com.cn/problem/P9810

#include <bits/stdc++.h>
using namespace std;

/*
Sample Input 1
4
3
0
4
0

Sample Output 1
0
 */

int main(){
    int k,num;
    unsigned long long sum = 0;
    cin >> k;
    vector<int> ve;
    for(int i=0;i<k;i++){
        cin >> num;
        if( num !=0){
            ve.push_back(num);
        }else{
            ve.erase(ve.begin()+ve.size()-1);
        }
    }
    for(int i=0;i<ve.size();i++){
        sum+= ve[i];
    }
    cout << sum <<endl;
}
