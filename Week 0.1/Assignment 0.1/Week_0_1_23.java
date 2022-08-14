import java.util.Scanner;

public class Week_0_1_23 {
	public static void main(String str[]) {
		Scanner sc=new Scanner(System.in);
		Array arr=new Array();
		
		System.out.println("Enter the Array Limit");
		int limit=sc.nextInt();
		System.out.println("Enter The values in "+limit+"x"+limit+"Metrix:");	
		arr.displayArray(limit);
		
	}
}