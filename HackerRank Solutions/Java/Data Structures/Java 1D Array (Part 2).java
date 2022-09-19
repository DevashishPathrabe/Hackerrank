import java.util.*;

public class Solution {

    public static boolean canWin(int leap, int[] game) {
        // Return true if you can win the game; otherwise, return false.
        boolean[] touched = new boolean[game.length];
        Arrays.fill(touched, false);
        return canWin(leap, game, 0, touched);
    }
    
    private static boolean canWin(int leap, int[] game, int start, boolean[] touched) {
        touched[start] = true;
        if (start+1 == game.length || start+leap >= game.length){
            return true;
        }
        if (leap > 1 && game[start+leap] == 0){
            boolean result = canWin(leap, game, start+leap, touched);
            if (result){
                return true;
            }
        }
        if (game[start+1] == 0 && !touched[start+1]){
            boolean result = canWin(leap, game, start+1, touched); 
            if (result){
                return true;
            }
        }
        if (start > 0 && !touched[start-1] && game[start-1] == 0){
            boolean result = canWin(leap, game, start-1, touched);
            if (result){
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        while (q-- > 0){
            int n = scan.nextInt();
            int leap = scan.nextInt();
            int[] game = new int[n];
            for (int i=0;i<n;i++){
                game[i] = scan.nextInt();
            }
            System.out.println( (canWin(leap, game)) ? "YES" : "NO" );
        }
        scan.close();
    }
}