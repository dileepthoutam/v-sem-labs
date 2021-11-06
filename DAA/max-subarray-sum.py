
class Pair:
  def __init__(self, summ, first, second):
    self.summ = summ
    self.first = first 
    self.second = second

def maxSubarrayCrossingSum(arr, start, mid, end):
  leftSum = float('-inf')
  summ = 0
  maxLeft, maxRight = 0, 0
  for i in range(mid, -1, -1):
    summ += arr[i]
    if summ > leftSum:
      leftSum = summ
      maxLeft = i
  summ = 0
  rightSum = float('-inf')
  for j in range(mid + 1, end + 1):
    summ += arr[j]
    if summ > rightSum:
      rightSum = summ
      maxRight = j
  
  return Pair(leftSum + rightSum, maxLeft, maxRight)

def maxSubarraySum(arr, start, end):
  if (start == end):
    return Pair(arr[start], start, end) 
  else:
    mid = start + (end-start) // 2

    left = maxSubarraySum(arr, start, mid)
    right = maxSubarraySum(arr, mid + 1, end)
    cross = maxSubarrayCrossingSum(arr, start, mid, end)

    if left.summ > right.summ and left.summ > cross.summ:
      return left
    elif right.summ > left.summ and right.summ > cross.summ:
      return right
    else:
      return cross


arr = [1,2,3,-4]
start = 0
end = len(arr) - 1

result = maxSubarraySum(arr, start, end)

print(result.summ)
for i in range(result.first, result.second + 1):
  print(arr[i], end = " ")
print()






