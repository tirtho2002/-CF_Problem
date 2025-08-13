package codeForcesFiles;
import java.util.*;

public class Codeforces141A {
    public static void main(String[] args) {
    
        java.util.Scanner sc=new java.util.Scanner(System.in);
        String guest=sc.nextLine().trim();
        String host=sc.nextLine().trim();
        String pile=sc.nextLine().trim();
        
        String combined=guest + host;
        
        char[] combineArr=combined.toCharArray();
        char[] pileArr=pile.toCharArray();
        Arrays.sort(combineArr);
        Arrays.sort(pileArr);
        
        if(Arrays.equals(combineArr, pileArr)) {
        	System.out.println("YES");
        }
        else {
        	System.out.println("NO");
        }
        
        sc.close();
    }
}
 