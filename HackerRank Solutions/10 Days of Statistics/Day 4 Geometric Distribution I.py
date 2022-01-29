# Enter your code here. Read input from STDIN. Print output to STDOUT
in0 = list( map( float, input().strip().split(" ") ) )
n = int(input())

pf = in0[0] / in0[1]

p = (1-pf)**(n-1) * pf

print("%.3f" % p)