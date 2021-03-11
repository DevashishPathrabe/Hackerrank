# Your code here
def serial_average s
   s.sub(/(.{5})-(.{5})$/){"%.2f" % (($2.to_f + $1.to_f)/2).round(2)}
end