import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int first = sc.nextInt();
        arr[0] = first;
        int noOfSubarrays = first < 0 ? 1 : 0;
        for(int i=1; i<n; i++){
            int num = sc.nextInt();
            arr[i] = arr[i-1] + num;
            if(arr[i] < 0){
                noOfSubarrays++;
            }
            for(int j=0; j<i; j++){
                int result = arr[i] - arr[j];
                if(result < 0){
                    noOfSubarrays++;
                }
            }
        }
        System.out.println(noOfSubarrays);
    }
}
