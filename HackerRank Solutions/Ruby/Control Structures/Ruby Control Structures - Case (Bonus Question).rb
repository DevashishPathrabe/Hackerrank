
def identify_class(obj)
    # write your case control structure here
    case obj
    when Hacker
        print("It\'s a Hacker!\n")
    when Submission
        print("It\'s a Submission!\n")
    when TestCase
        print("It\'s a TestCase!\n")
    when Contest
        print("It\'s a Contest!\n")
    else
        print("It\'s an unknown model\n")
    end
end