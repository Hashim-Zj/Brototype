import java.util.Scanner;

public class w01exa13 {
    public static void main(String st[]){
        Scanner sc=new Scanner(System.in);
        System.out.print('\n'+"The largest number of the array is :"+largestinArray());

    }
    static int largestinArray(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array limit:");
        int limit=sc.nextInt();
        int[] arr=new int[limit];
        System.out.println("Enter array elamants:");
        for(int i=0;i<limit;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<limit-1;i++){
            for(int j=i+1;j<limit;j++){
                if(arr[i]<arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        int larg=arr[0];

        return larg;
    }
}
