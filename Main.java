import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {

            int n = sc.nextInt();
            int m = sc.nextInt();

            char[][] ar = new char[n][m];

            for (int i = 0; i < n; i++) {

                String s = sc.next();

                for (int j = 0; j < m; j++) {
                    ar[i][j] = s.charAt(j);
                }
            }

            int answer = 0;

            // Last column must contain only D
            for (int i = 0; i < n - 1; i++) {
                if (ar[i][m - 1] == 'R') {
                    answer++;
                }
            }

            // Last row must contain only R
            for (int j = 0; j < m - 1; j++) {
                if (ar[n - 1][j] == 'D') {
                    answer++;
                }
            }

            System.out.println(answer);
        }

        sc.close();
    }
}