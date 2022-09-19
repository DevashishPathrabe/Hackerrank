    import java.util.*;
    public class test {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            Deque deque = new ArrayDeque<>();
            int n = in.nextInt();
            int m = in.nextInt();
            Set<Integer> set = new HashSet<>();
            int max_count = 0;
            for (int i=0;i<n;i++){
                int num = in.nextInt();
                deque.add(num);
                set.add(num);
                if (deque.size() == m){
                    if (max_count<set.size()) max_count = set.size();
                    //System.out.println(set);
                    //System.out.println(deque);
                    Object removed_val = deque.pollFirst();
                    if (!deque.contains(removed_val)){
                        set.remove(removed_val);
                    }
                }
            }
            System.out.println(max_count);
        }
    }



