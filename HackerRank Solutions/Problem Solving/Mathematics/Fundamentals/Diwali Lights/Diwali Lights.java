import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {
    static final int MODULUS = 100000;
    /*
     * Complete the lights function below.
     */
    static long lights(int n) {
        /*
         * Write your code here.
         */
        int numberOfPatterns = 1;
        for(int i=0; i<n; i++){
            numberOfPatterns = numberOfPatterns * 2 % MODULUS;
        }
        numberOfPatterns = (numberOfPatterns-1+MODULUS) % MODULUS;
        return numberOfPatterns;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])*");

        for (int tItr = 0; tItr < t; tItr++) {
            int n = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])*");

            long result = lights(n);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
