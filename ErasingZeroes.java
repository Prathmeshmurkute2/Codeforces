import java.util.Scanner;

public class ErasingZeroes {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {

            String s = sc.next();

            int first = s.indexOf('1');
            int last = s.lastIndexOf('1');

            int count = 0;

            if (first != -1) {
                for (int i = first; i <= last; i++) {
                    if (s.charAt(i) == '0') {
                        count++;
                    }
                }
            }

            System.out.println(count);
        }

        sc.close();
    }
}