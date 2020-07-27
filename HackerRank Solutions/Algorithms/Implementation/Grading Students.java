import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static int getRoundedGrade(int grade) {
        if(grade >= 38){
            int mod = grade%5;
            if(mod > 2){
                grade += 5-mod;
            }
        }
        return grade;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i=0;i<n;i++){
            int grade = in.nextInt();
            System.out.println(getRoundedGrade(grade));
        }
        in.close();
    }
}
