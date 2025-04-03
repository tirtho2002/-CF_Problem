public class cf_target_practice_1873 {
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        int t = sc.nextInt();

        for(int i=0;i<t;i++){
            char matrix[][] = new char[10][10];

            for(int j=0;j<10;j++){
                String s = sc.next();

                for(int k=0;k<10;k++){
                    matrix[j][k] = s.charAt(k);
                }
            }

            int sum=0;

            for(int j=0;j<10;j++){
                for(int k=0;k<10;k++){
                    if(matrix[j][k]=='X'){
                        int a[]=new int[4];
                        a[0]=j;
                        a[1]=k;
                        a[2]=(9-j);
                        a[3]=(9-k);
                        int min=a[0];

                        for(int m=1;m<4;m++){
                            if(a[m]<min){
                                min=a[m];
                            }
                        }
                        sum +=(min+1);



                    }

                }
            }
            System.out.println(sum);


        }

    }

}
