
class Item:
  def __init__(self, value, weight):
    self.value = value
    self.weight = weight
    self.cost = value // weight
  def __lt__(self, other):  
    return self.cost < other.cost 

def fractionalKnapsack(values, weights, capacity):
  items = []
  for i in range(len(values)):
    items.append(Item(values[i], weights[i]))
  
  items.sort(reverse=True)

  currentWeight = 0
  totalValue = 0.0

  for item in items:
    if currentWeight + item.weight <= capacity:
      currentWeight += item.weight
      totalValue += item.value
    else:
      remain = capacity - currentWeight
      totalValue = totalValue + item.value * float(remain/item.weight)
      break
  
  return totalValue 

n, capacity = 3, 50
values = [60, 100, 120]
weights = [10, 20, 30] 

result = fractionalKnapsack(values, weights, capacity)
print(result)

