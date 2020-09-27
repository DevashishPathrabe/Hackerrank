import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int [] x = new int[n];
        for(int i=0; i<n; i++) {
            x[i] = scan.nextInt();
        }
        int sum = 0, cnt = 0, w;
        for(int i=0; i<n; i++) {
            w = scan.nextInt();
            sum += x[i] * w;
            cnt += w;
        }
        System.out.printf("%.1f\n", (double)sum/cnt);
    }
}
