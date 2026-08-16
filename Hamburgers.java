import java.util.Scanner;

public class Hamburgers {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        int nb = sc.nextInt();
        int ns = sc.nextInt();
        int nc = sc.nextInt();

        int pb = sc.nextInt();
        int ps = sc.nextInt();
        int pc = sc.nextInt();

        long rubles = sc.nextLong();   // IMPORTANT

        int B = 0;
        int S = 0;
        int C = 0;

        for (int i = 0; i < s.length(); i++) {

            char c = s.charAt(i);

            if (c == 'B')
                B++;
            else if (c == 'S')
                S++;
            else
                C++;
        }

        long low = 0;
        long high = 1_000_000_000_000L;

        while (low <= high) {

            long mid = low + (high - low) / 2;

            long needB = Math.max(0L, B * mid - nb);
            long needS = Math.max(0L, S * mid - ns);
            long needC = Math.max(0L, C * mid - nc);

            long cost = needB * pb
                      + needS * ps
                      + needC * pc;

            if (cost <= rubles) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        System.out.println(high);
    }
}