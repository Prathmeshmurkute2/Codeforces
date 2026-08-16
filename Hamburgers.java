import java.util.Scanner;

public class Hamburgers {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String recipe = sc.next();

        int nb = sc.nextInt();
        int ns = sc.nextInt();
        int nc = sc.nextInt();

        int pb = sc.nextInt();
        int ps = sc.nextInt();
        int pc = sc.nextInt();

        long r = sc.nextLong();

        // Count ingredients required for ONE hamburger
        int B = 0;
        int S = 0;
        int C = 0;

        for (int i = 0; i < recipe.length(); i++) {

            if (recipe.charAt(i) == 'B') {
                B++;
            } else if (recipe.charAt(i) == 'S') {
                S++;
            } else {
                C++;
            }
        }

        long low = 0;
        long high = 1_000_000_000_000L + 100;

        while (low <= high) {

            long mid = low + (high - low) / 2;

            // Ingredients needed for mid hamburgers
            long requiredB = B * mid;
            long requiredS = S * mid;
            long requiredC = C * mid;

            // Ingredients we have to buy
            long buyB = Math.max(0L, requiredB - nb);
            long buyS = Math.max(0L, requiredS - ns);
            long buyC = Math.max(0L, requiredC - nc);

            // Total money required
            long cost = buyB * pb
                      + buyS * ps
                      + buyC * pc;

            if (cost <= r) {
                // We can make mid hamburgers.
                // Try making more.
                low = mid + 1;
            } else {
                // Too expensive.
                // Try making fewer.
                high = mid - 1;
            }
        }

        System.out.println(high);
    }
}