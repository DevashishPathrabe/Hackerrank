import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {
    static int gcd(int a, int b) {
        int temp;
        while(a%b != 0){
            temp = a%b;
            a = b;
            b = temp;
        }
        return b;
    }
    // Complete the solve function below.
    static String solve(int a, int b, int c) {
        if(c <= Math.max(a,b) && c%gcd(a,b) == 0){
            return "YES";
        }
        return "NO";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            String[] abc = scanner.nextLine().split(" ");

            int a = Integer.parseInt(abc[0]);

            int b = Integer.parseInt(abc[1]);

            int c = Integer.parseInt(abc[2]);

            String result = solve(a, b, c);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
