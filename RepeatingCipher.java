import java.util.Scanner;

public class RepeatingCipher {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String t = sc.next();

        String ans = "";

        int index = 0;
        int groupSize = 1;

        while (index < n) {

            ans += t.charAt(index);

            index += groupSize;
            groupSize++;
        }

        System.out.println(ans);
    }
}