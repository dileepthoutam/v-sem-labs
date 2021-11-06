
def placeQueens(Q, r):
  if r == len(Q):
    for x in Q:
      print(x+1, end = " ")
    print()
  else:
    for j in range(len(Q)):
      legal = True
      for i in range(r): 
        if (Q[i] == j or Q[i] == j - r + i or Q[i] == j + r - i):
          legal = False
          break
      if legal:
        Q[r] = j
        placeQueens(Q, r+1)

Q = [0] * 4
r = 0

placeQueens(Q, r)


      
