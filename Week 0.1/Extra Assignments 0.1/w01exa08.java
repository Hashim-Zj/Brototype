import java.util.Scanner;

public class w01exa08 {
    public static void main(String st[]){
        w01exa08 w01exa8=new w01exa08();
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter array limit: ");
        int limit=sc.nextInt();
        
        w01exa8.disandigarr(limit);
        
    }
    static  void disandigarr(int limit){
        Scanner sc=new Scanner(System.in);
       
        int[] arr=new int[limit];
        System.out.println("Enter a intiger Array: ");
        for(int i=0;i<limit;i++){
              arr[i]=sc.nextInt();
        }
        for(int i=0;i<limit-1;i++){
            for(int j=i+1;j<limit;j++)
                if(arr[i]<arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }
        System.out.println("Dissenting order is:");
        for(int i=0;i<limit;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
