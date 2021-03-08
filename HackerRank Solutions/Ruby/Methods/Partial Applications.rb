combination = -> (n) do
    -> (r)do
    (n-r+1..n).reduce(:*)/(1..r).reduce(:*)
    end
end

n = gets.to_i
r = gets.to_i
nCr = combination.(n)
puts nCr.(r)