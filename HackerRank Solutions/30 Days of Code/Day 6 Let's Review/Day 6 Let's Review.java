import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        scan.nextLine();
        for (int i=0; i<T; i++){
            String string = scan.nextLine();
            char[] charArray = string.toCharArray();
            for (int j=0; j<charArray.length; j++){
                if (j % 2 == 0){
                    System.out.print(charArray[j]);
                }
            }
            System.out.print(" ");
            for (int j=0; j<charArray.length; j++){
                if (j % 2 != 0){
                    System.out.print(charArray[j]);
                }
            }
            System.out.println();
        }
        scan.close();
    }
}