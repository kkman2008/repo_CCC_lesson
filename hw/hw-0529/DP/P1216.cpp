// P1216 [IOI 1994] 数字三角形（数字金字塔） Number Triangles
// https://zh.wikipedia.org/zh-hans/%E5%9B%BD%E9%99%85%E4%BF%A1%E6%81%AF%E5%AD%A6%E5%A5%A5%E6%9E%97%E5%8C%B9%E5%85%8B%E7%AB%9E%E8%B5%9B#:~:text=%E5%9B%BD%E9%99%85%E4%BF%A1%E6%81%AF%E5%AD%A6%E5%A5%A5%E6%9E%97%E5%8C%B9%E5%85%8B%E7%AB%9E%E8%B5%9B%EF%BC%88%E8%8B%B1%E8%AF%AD%EF%BC%9AInternational%20Olympiad%20in%20Informatics,%E8%A7%A3%E5%86%B3%E5%90%84%E7%B1%BB%E7%AE%97%E6%B3%95%E9%97%AE%E9%A2%98%E3%80%82
// Created by JaylonH on 2025/5/26.
// https://www.luogu.com.cn/problem/P1216

#include <bits/stdc++.h>
using namespace std;

int main() {
    int row;
    cin >> row;
    vector<vector<int> > pyramid(row);
    vector<vector<int> > dp(row);

    // 输入金字塔
    for (int i = 0; i < row; ++i) {
        pyramid[i].resize(i + 1);
        for (int j = 0; j <= i; ++j) {
            cin >> pyramid[i][j];
        }
    }

    // 初始化dp数组
    dp = pyramid;

    // 动态规划计算最大路径和
    for (int i = row - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    // 输出结果
    cout << dp[0][0] << endl;
    return 0;
}