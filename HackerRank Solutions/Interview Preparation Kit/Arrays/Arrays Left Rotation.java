import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the rotLeft function below.
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int n = scan.nextInt();
        int[] arr = new int[size];
        for(int i=0; i<size; i++){
            if(n>i){
                arr[size-n+i] = scan.nextInt();
            } else{
                arr[i-n] = scan.nextInt();
            }
        }
        for(int i=0; i<size; i++){
            System.out.print(arr[i] + " ");
        }
    }
}