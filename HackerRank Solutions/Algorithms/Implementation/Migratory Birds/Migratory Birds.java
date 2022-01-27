import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    static int migratoryBirds(int n, int[] arr) {
        int arr_count[] = new int[6];
        int mostNoOfCommonBird = 1; 
        int max = 0;
        for (int i=0; i<n; i++){
            arr_count[arr[i]]++;
        }
        for (int i=1; i<=5; i++){
            if (arr_count[i] > max){
                mostNoOfCommonBird = i;
                max = arr_count[i];
            }
        }
        return mostNoOfCommonBird;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] ar = new int[n];
        for(int i=0;i<n;i++){
            ar[i] = input.nextInt();
        }
        int mostNoOfCommonBird = migratoryBirds(n, ar);
        System.out.println(mostNoOfCommonBird);
    }
}