import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> l = new ArrayList<>();
        for (int i=0;i<n;i++){
            int a = sc.nextInt();
            l.add(a);
        }
        int no = sc.nextInt();
        for (int i=0;i<no;i++){
            String s = sc.next();
            if (s.equals("Insert")){
                int a, b;
                a = sc.nextInt();
                b = sc.nextInt();
                l.add(a, b);
            }
            else if (s.equals("Delete")){
                int a = sc.nextInt();
                l.remove(a);
            }
        }
        for (int a:l){
            System.out.print(a + " ");
        }
    }
}