import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        BigInteger b1 = new BigInteger(scan.next());
        BigInteger b2 = new BigInteger(scan.next());
        System.out.println(b1.add(b2));
        System.out.println(b1.multiply(b2));
    }
}