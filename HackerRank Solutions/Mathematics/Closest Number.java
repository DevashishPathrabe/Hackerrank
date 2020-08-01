import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the closestNumber function below.
     */
    static int closestNumber(int a, int b, int x) {
        /*
         * Write your code here.
         */
        int leftDifference = (int)Math.floor(Math.pow(a,b)/x)*x;
        int rightDifference = (int)Math.ceil(Math.pow(a,b)/x)*x;
        if(Math.pow(a,b) - leftDifference < rightDifference - Math.pow(a,b)){
            return (leftDifference);
        }
        return (rightDifference);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = Integer.parseInt(scanner.nextLine().trim());

        for (int tItr = 0; tItr < t; tItr++) {
            String[] abx = scanner.nextLine().split(" ");

            int a = Integer.parseInt(abx[0].trim());

            int b = Integer.parseInt(abx[1].trim());

            int x = Integer.parseInt(abx[2].trim());

            int result = closestNumber(a, b, x);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();
    }
}
