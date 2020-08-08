import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] arr = new int[n];
        int first = scan.nextInt();
        arr[0] = first;
        int noOfSubarrays = first < 0 ? 1 : 0;
        for(int i=1; i<n; i++){
            int number = scan.nextInt();
            arr[i] = arr[i-1] + number;
            if(arr[i] < 0){
                noOfSubarrays++;
            }
            for(int j=0; j<i; j++){
                int sum = arr[i] - arr[j];
                if(sum < 0){
                    noOfSubarrays++;
                }
            }
        }
        System.out.println(noOfSubarrays);
    }
}