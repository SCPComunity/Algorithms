//https://codeforces.com/problemset/problem/282/A
import java.util.Scanner;

public class bit {
    static int n, x=0;
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        n = input.nextInt();

        while(n != 0){

            String str;

            str = input.next();

            if(str.charAt(1) == '+' ){
                x++;
            }else{
                x--;
            }

            n--;
        }

        System.out.println(x);

    }
}

// Solved by: Mozah Alismail