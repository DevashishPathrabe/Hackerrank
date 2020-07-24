import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        try{
            Scanner scan = new Scanner(System.in);  
            int x=scan.nextInt();
            int y = scan.nextInt();    
            int ans = x/y;      
            System.out.println(ans);    
        } catch (InputMismatchException e){
            System.out.println("java.util.InputMismatchException");
        } catch (Exception e){
            System.out.println(e);
        }
    }
}