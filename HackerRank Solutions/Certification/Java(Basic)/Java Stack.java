import java.util.*;
import java.util.Scanner;

// Write your code here. DO NOT use an access modifier in your class declaration.
class Solution {
	
	public static void main(String []argh){
        Scanner scan = new Scanner(System.in);
        while (scan.hasNext()) {
            String input = scan.next();
                while(input.length() != (input = input.replaceAll("\\(\\)|\\[\\]|\\{\\}", "")).length());
            System.out.println(input.isEmpty());
        }
    }
}
