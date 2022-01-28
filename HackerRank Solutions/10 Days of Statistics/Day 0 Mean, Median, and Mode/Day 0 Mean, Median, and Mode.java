import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args){
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int [] a = new int[size]; 
        for (int i=0; i<size; i++){
            a[i] = scan.nextInt();
        }
        System.out.println(getMean(a));
        System.out.println(getMedian(a));
        System.out.println(getMode(a));
    }
    public static double getMean(int[] a){
        double mean = 0;
        int sum = 0;
        for (int i : a){
            sum += i;
        }
        mean = (double)sum / a.length;
        return mean;
    }
    private static double getMedian(int[] a){
        double median = 0;
        int [] copy = a.clone();
        Arrays.sort(copy);
        if (a.length % 2 == 0){
            median = (double)(copy[a.length/2 - 1] + copy[a.length/2]) / 2;
        }else {
            median = (double)copy[(a.length-1)/2];
        }
        return median;
    }
    private static int getMode(int[] a){
        int mode = 0;
        int [] copy = a.clone();
        Arrays.sort(copy);
        int count = 0, max = 0;
        int current = copy[0];
        for (int i=0; i<a.length; i++){
            if (copy[i] == current){
                count++;
            } else{
                count = 1;
                current = copy[i];
            }
            if (count > max){
                max = count;
                mode = copy[i];
            }
        }
        return mode;
    }
}