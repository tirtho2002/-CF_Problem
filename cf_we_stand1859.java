import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;

public class cf_we_stand1859 {
    
    public static void main(String[] args) {
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int t=sc.nextInt();

        while (t-->0) {
            int s=sc.nextInt();


            Queue <Integer> aa = new LinkedList<>();
            Stack<Integer> b = new Stack<>();
            Stack<Integer> c = new Stack<>();
            

            for(int i=0;i<s;i++){
                aa.add(sc.nextInt());
            }

            List<Integer> aaa=new ArrayList<>(aa);

            aaa.sort(null);
            Queue <Integer> a = new LinkedList<>(aaa);

            int a_0 = a.peek();
            // a.poll();
            // System.out.println(a);
            // System.out.println(a.size());



            for(int i=0;i<s;i++){
                if(a_0==a.peek()){
                    b.push(a.poll());
                }
                else{
                    break;
                }

            }
            int a_size=a.size();



            if(!a.isEmpty()){
                for(int k=0;k<a_size;k++){
                    c.push(a.poll());
                }
                System.out.println(b.size()+" "+c.size());
                int bs=b.size();
                int cs=c.size();
                for(int k=0;k<bs;k++){

                    System.out.print(b.get(k)+" ");
                    if(k==(bs-1)){
                        System.out.println("");
                    }
                }

                for(int k=0;k<cs;k++){
                    
                    System.out.print(c.get(k)+" ");
                    if(k==(cs-1)){
                        System.out.println("");
                    }
                    
                }
            }
             else{
                System.out.println(-1);
   
            }



        }

        
    }
}
