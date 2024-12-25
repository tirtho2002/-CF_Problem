import java.util.Scanner;

public class CF_2_too_long {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int iter = sc.nextInt();
        for (int i = 0; i < iter; i++) {
            String wrd = sc.next();
            int ln = wrd.length();
            if (ln > 10) {
                System.out.println("" + wrd.charAt(0) + (ln - 2) + wrd.charAt(ln - 1));
            } else {
                System.out.println(wrd);
            }
        }

    }
}
