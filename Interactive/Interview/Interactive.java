//https://codeforces.com/contest/1807/problem/E

import java.util.Scanner;
public class Interactive {
    public static void main(String[] args) {
        final int N = (int)2e5+10;
        int[] a = new int[N],s = new int[N];
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            for (int i = 1; i <= n; i++) {
                a[i] = sc.nextInt();
                s[i] = s[i - 1] + a[i];
            }
            int l = 1, r = n;
            while (l < r) {
                int mid = l + r >> 1;
                System.out.print("? " + (mid - l + 1) + " ");
                for (int i = l; i <= mid; i++) System.out.print(i + " ");
                System.out.println();
                int k = sc.nextInt();
                if (k != s[mid] - s[l - 1]) r = mid;
                else l = mid + 1;
            }
            System.out.println("! " + l);
        }
    }
}

// solved by : Naif AlQahtani 
