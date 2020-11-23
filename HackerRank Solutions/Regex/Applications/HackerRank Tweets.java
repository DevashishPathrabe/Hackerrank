import java.io.*;
import java.util.*;
import java.util.regex.Pattern;

public class Solution {
    static Pattern PATTERN = Pattern.compile("hackerrank", Pattern.CASE_INSENSITIVE);
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        scan.nextLine();
        int result = 0;
        for(int i=0; i<N; i++){
            String line = scan.nextLine();
            if(PATTERN.matcher(line).find()){
                result++;
            }
        }
        System.out.println(result);
        scan.close();
    }
}
