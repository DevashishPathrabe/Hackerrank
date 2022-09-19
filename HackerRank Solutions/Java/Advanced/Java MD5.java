import java.io.*;
import java.util.*;
import java.security.*;

public class Solution {

    public static void main(String[] args) throws NoSuchAlgorithmException {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        scan.close();
        /* Encode the String using MD5 */
        MessageDigest md = MessageDigest.getInstance("MD5");
        md.update(str.getBytes());
        byte[] digest = md.digest();
        /* Print the encoded value in hexadecimal */
        for (byte b : digest){
            System.out.format("%02x", b);
        }
    }
}