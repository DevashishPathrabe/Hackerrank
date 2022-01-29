import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        double defP = 1d/3;
        System.out.println(Math.round(1000 * Math.pow(1-defP, 4) * defP) / 1000d);
    }
}