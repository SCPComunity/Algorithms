//https://codeforces.com/contest/1786/problem/A1
import java.util.Scanner;

public class NonAlternatingDeck {
      public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while (tc-- > 0) {
            int n = sc.nextInt() - 1, nxt = 5, p = 1;
            int[] arr = new int[2];
            arr[0] = 1;
            arr[1] = 0;
            while (nxt < n) {
                arr[p % 2] += nxt;
                n -= nxt;
                nxt += 4;
                p++;
            }
            arr[p % 2] += n;
            System.out.println(arr[0] + " " + arr[1]);
        }
    }
}