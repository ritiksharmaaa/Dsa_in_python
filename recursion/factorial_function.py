# what is factorial : mean if  factorial mean multiple of 5 * 4 * 3 * 2*1 
#  in formuly n! = n*(n-1)*(n-2)*(n-3)*(n-4) like that 
#  factorial help to find permutation and combination  if a password  a b c so how mnay combination it take to make so her 
# 3!= 3*2*1 = 6 there is total 6 combination made . 


def factorial(n):
    if n == 0 :
        return 1 
    else : 
         return n * factorial(n-1)


data = factorial(5)
print(data)
