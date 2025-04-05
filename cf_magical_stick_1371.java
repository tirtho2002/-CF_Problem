public class cf_magical_stick_1371 {
    public static void main(String[] args) {
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int t=sc.nextInt();

        while (t-->0) {
            long n=sc.nextLong();
            if(n%2==0){
                System.out.println(((n-2)/2)+1);
            }
            else{
                System.out.println(((n-1)/2)+1);
            }
        }
    }
    
}
