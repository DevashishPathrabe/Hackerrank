import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int [] x = new int[n];
        for(int i=0; i<n; i++){
            x[i] = scan.nextInt();
        }
        Arrays.sort(x);
        System.out.println(getMedian(x, 0, n/2 - 1));
        System.out.println(getMedian(x, 0, n-1));
        if(n%2 == 0){
            System.out.println(getMedian(x, n/2, n-1));
        } else{
            System.out.println(getMedian(x, n/2 + 1, n-1));
        }
    }
    private static int getMedian(int[] a, int start, int end){
        int median = 0;
        int size = end - start + 1;
        if(size%2 == 0){
            median = (a[start + size/2 - 1] + a[start + size/2]) / 2;
        } else{
            median = a[start + (size -1)/2];
        }
        return median;
    }
}