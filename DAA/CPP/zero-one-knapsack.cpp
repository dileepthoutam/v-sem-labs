#include <bits/stdc++.h>
using namespace std;

int zero_one_knapsack(int values[], int weights[], int n, int W) {
	int dp[n+1][W+1];
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= W; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			} else if (weights[i-1] <= j) {
				dp[i][j] = max(values[i-1] + dp[i-1][j-weights[i-1]], dp[i-1][j]);
			} else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[n][W];
}

int main() {
	int n, W; 
	cin >> n >> W;
	int values[n], weights[n];
	for(int i=0; i<n; i++)
		cin >> values[i];
	for(int j=0; j<n; j++)
		cin >> weights[j];
	// 	int values[] = {60, 100, 120};
	// 	int weights[] = {10, 20, 30};
	// 	int n = sizeof(values)/sizeof(values[0]);
	// 	int W = 50;
	cout << zero_one_knapsack(values, weights, n, W) << endl;

	
	return 0;
}
