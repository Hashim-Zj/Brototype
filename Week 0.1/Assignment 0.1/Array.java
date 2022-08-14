 import java.util.Scanner;

public class Array {
	Scanner sc=new Scanner(System.in);
	
	int[][] getArray(int l) {
		int[][] arr = new int[l][l];
		
		for(int i=0;i<l;i++) {
			for(int j=0;j<l;j++) {
				 arr[i][j]=sc.nextInt();
			}
		}
		return arr;
	}
	int[][] displayArray(int l) {
		
		int[][] arr=getArray(l);
		System.out.println(+l+"x"+l+"Metrix is :");
		for(int i=0;i<l;i++) {
			for(int j=0;j<l;j++) {
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		return arr;
	}
}


