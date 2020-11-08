import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the maximumToys function below.
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] prices = new int[n];
        for(int i=0; i<n; i++){
            prices[i] = input.nextInt();
        }
        Arrays.sort(prices);
        int maxNoOfToys = 0;
        for(int i=0; i<n; i++){
            k -= prices[i];
            if(k > 0){
                maxNoOfToys++;
            }
            if(k <= 0){
                break;
            }
        }
        System.out.println(maxNoOfToys);
    }
}
