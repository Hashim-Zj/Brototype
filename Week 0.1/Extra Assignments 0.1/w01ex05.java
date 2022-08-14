import java.util.Scanner;

public class w01ex05 {

    static String strcpy(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a String:");
        String str=sc.nextLine();

        String strcpy=str;
        return strcpy;
    }

    public static void main(String st[]){
        System.out.println("String in strcpy is:"+strcpy());
    }
}
