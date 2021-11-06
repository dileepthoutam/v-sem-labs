
def minAndMax(arr, start, end):
  if (start == end):
    return (arr[start], arr[end])
  elif (end == start + 1): 
    return (min(arr[start], arr[end]), max(arr[start], arr[end]))
  else:
    mid = start + (end-start) // 2
    mn1, mx1 = minAndMax(arr, start, mid)
    mn2, mx2 = minAndMax(arr, mid + 1, end)

    return (min(mn1, mn2), max(mx1, mx2))
    
arr = [1,2,-3,4,5]
result = minAndMax(arr, 0, len(arr) - 1)
print(result)

