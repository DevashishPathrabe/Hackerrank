# Enter your code here
def strike(str)
    return "<strike>#{str}</strike>"
end
def mask_article(str, words)
    words.each{|to_rep| str.gsub!(to_rep, strike(to_rep))}
    return str
end