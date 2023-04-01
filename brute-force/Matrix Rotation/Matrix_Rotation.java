//https://codeforces.com/contest/1772/problem/B

import java.util.Scanner;

public class Matrix_Rotation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int s1 = sc.nextInt();
            int s2 = sc.nextInt();
            int s3 = sc.nextInt();
            int s4 = sc.nextInt();
            if ((s1 < s2 && s3 < s4 && s1 < s3 && s2 < s4) ||
                    (s3 < s1 && s4 < s2 && s3 < s4 && s1 < s2) ||
                    (s4 < s3 && s2 < s1 && s4 < s2 && s3 < s1) ||
                    (s2 < s4 && s1 < s3 && s2 < s1 && s4 < s3))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}

// solved by : Naif AlQahtani
 
