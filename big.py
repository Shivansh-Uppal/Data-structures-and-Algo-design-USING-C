from bigO import bigO

def testing(n):
                y=max(n)
                for i in range(y):
                  for j in range(y):
                   j=j*2

tester=bigO.bigO()

complexity,_=tester.test(testing,"random")

print(complexity)
