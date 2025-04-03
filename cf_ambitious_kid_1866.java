import java.util.ArrayList;

public class cf_ambitious_kid_1866 {

    public static void main(String[] args) {
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int size=sc.nextInt();
        ArrayList<Integer> arr=new ArrayList<>(size);

        for(int i=0;i<size;i++){
            arr.add(sc.nextInt());
        }

        // System.out.println(arr);

        for(int i=0;i<size;i++){
            arr.set(i,Math.abs(arr.get(i)));
        }



        // System.out.println(arr);

        arr.sort(null);
        // System.out.println(arr);
        System.out.println(arr.get(0));




    }
}