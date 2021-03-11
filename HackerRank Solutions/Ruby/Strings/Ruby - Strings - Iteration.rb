# Your code here
def count_multibyte_char(s)
    s.chars.count { |c| c.bytesize > 1 }
end