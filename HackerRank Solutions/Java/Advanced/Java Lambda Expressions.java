import java.io.*;
import java.util.*;
interface PerformOperation {
 boolean check(int a);
}
class MyMath {
 public static boolean checker(PerformOperation p, int num) {
  return p.check(num);
 }

   // Write your code here
    public static PerformOperation isOdd() {
        return n -> (n & 1) == 1;
    }

    public static PerformOperation isPrime() {
        // O(n^(1/2)) runtime
        return n -> {
            if (n < 2){
                return false;
            }
            int sqrt = (int) Math.sqrt(n);
            for (int i=2;i<=sqrt;i++){
                if (n % i == 0){
                    return false;
                }
            }
            return true;
        };
    }

    public static PerformOperation isPalindrome() {
        return n -> {
            String original = Integer.toString(n);
            String reversed = new StringBuilder(Integer.toString(n)).reverse().toString();
            return original.equals(reversed);
        };
    }
}

public class Solution {