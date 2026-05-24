import java.util.ArrayList;

public class cf_word_on_the_paper1850 {
    public static void main(String[] args) {
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();

        while(t-->0){
            ArrayList<Character> arr=new ArrayList<>();
            for(int i=0;i<8;i++){
                String input=sc.nextLine();
                char a[]=input.toCharArray();
                int b=a.length;
                for(int j=0;j<b;j++){
                    if(a[j]!='.'){
                        arr.add(a[j]);
                        continue;

                    }
                    else{
                        continue;
                    }
                }
            }
            StringBuilder sb=new StringBuilder();
            for(char a:arr){
                sb.append(a);
            }
            String result=sb.toString();
            System.out.println(result);

        }
    }
    
}
