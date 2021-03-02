def sum_terms(n)
  # your code here
    (1..n).reduce(0) {|sum, val| sum += (val * val + 1)}
end