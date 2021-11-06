
class Job:
  def __init__(self, id, deadline, profit):
    self.id = id
    self.deadline = deadline
    self.profit = profit 
  def __lt__(self, other):
    return self.profit < other.profit 

def jobSequencing(ids, deadlines, profits):
  jobs = []
  for i in range(len(ids)):
    jobs.append(Job(ids[i], deadlines[i], profits[i]))
  jobs.sort(reverse=True)
  nax = 0
  for job in jobs:
    nax = max(nax, job.deadline)

  totalProfit = 0

  slots = [-1] * nax
  for i in range(len(jobs)):
    for j in range(jobs[i].deadline - 1, -1, -1):
      if slots[j] == -1:
        slots[j] = jobs[i].id
        totalProfit += jobs[i].profit
        break
 
  # print slots and profit
  print("profit: ", totalProfit)
  for slot in slots:
    if slot != -1:
      print(slot, end = " ")
  print()

ids = ['a', 'b', 'c', 'd']
deadlines = [4,1,1,1]
profits = [20,10,40,30]

jobSequencing(ids, deadlines, profits)  


