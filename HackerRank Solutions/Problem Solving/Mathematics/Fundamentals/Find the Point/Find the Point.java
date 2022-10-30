import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the findPoint function below.
     */
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        for(int i=0; i<testCases; i++){
            int px = scan.nextInt();
            int py = scan.nextInt();
            int qx = scan.nextInt();
            int qy = scan.nextInt();
            int x = 2 * qx - px;
            int y = 2 * qy - py;
            System.out.println(x + " " + y);
        }
    }
}
