public class cf_medium_number {
    public static void bubbleSort(int[] arr){
        int n=arr.length;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                }
            }
        }

    }
    public static void main(String[] args) {
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int t=sc.nextInt();

        while (t-->0) {
            
  

        int arr[]=new int[3];
        for(int i=0;i<3;i++){
            arr[i]=sc.nextInt();
        }
        bubbleSort(arr);
        System.out.println(arr[1]);
        
    }
}
}
