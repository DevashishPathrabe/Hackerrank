# Enter your code here. Read input from STDIN. Print output to STDOUT
require 'prime'
n = gets.to_i
p Prime.each.lazy.select {|i| i.to_s == i.to_s.reverse}.first(n)