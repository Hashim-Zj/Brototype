import java.util.Scanner;

public class w01exa11 {
    public static void main(String st[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array limit:");
        int limit=sc.nextInt();
        System.out.println("Enter array elamants:");
        int[] num=new int[limit];
        for(int i=0;i<limit;i++){
            num[i]=sc.nextInt();
        }
        System.out.println("Repeating Elamants are :");
        for(int i=0;i<limit-1;i++){
            for(int j=i+1;j<limit;j++){
                if(num[i]==num[j]){
                    System.out.println(num[i]+" ");
                }
            }
        }
    }
}
