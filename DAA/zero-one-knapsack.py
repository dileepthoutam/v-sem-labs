
def zeroOneKnapsack(weights, values, N, W):
  # N is not of weights and values
  # W is knapsack capacity
  dp = [[0 for _ in range(W+1)] for _ in range(N+1)]
  for i in range(1, N+1):
    for j in range(1, W+1):
      if (weights[i-1] <= j):
        dp[i][j] = max(values[i-1] + dp[i-1][j-weights[i-1]], dp[i-1][j])
      else:
        dp[i][j] = dp[i-1][j]
  
  return dp[N][W]
  
weights = [10, 20, 30]
values = [60, 100, 120]
N = 3
W = 50

result = zeroOneKnapsack(weights, values, N, W)

print(result)
