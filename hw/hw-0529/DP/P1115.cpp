// P1115 最大子段和
// Created by JaylonH on 2025/5/26.
// https://www.luogu.com.cn/problem/P1115

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // 初始化当前最大和与全局最大和为第一个元素（处理全负数情况）
    int current_max = a[0];
    int global_max = a[0];

    for (int i = 1; i < n; ++i) {
        // 状态转移：当前最大和 = max(当前元素单独成段，当前元素与前一段连接)
        current_max = max(a[i], current_max + a[i]);
        // 更新全局最大和
        global_max = max(global_max, current_max);
    }

    cout << global_max << endl;
    return 0;
}