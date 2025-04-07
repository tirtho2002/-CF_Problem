public class cf_AB_again {
    public static void main(String[] args) {
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int t=sc.nextInt();
        while (t-->0) {
            int num=sc.nextInt();
            num=(num/10)+(num%10);
            System.out.println(num);   
                
        }
    }
}
