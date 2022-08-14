import java.util.Scanner;


public class w01_Exa_20 {
    // static int[] getLimit(){ 
    //     Scanner sc=new Scanner(System.in);
    //     int[] rc=new int[2];
    //     System.out.println("Enter matrix row number :");
    //     rc[0]=sc.nextInt();
    //     System.out.println("Enter matrix column number :");
    //     rc[1]=sc.nextInt();
        
    //     return rc;
    // }
    static int[][] getMatrix(int row,int col){ 
        Scanner sc=new Scanner(System.in);
        
        int[][] matrix=new int [row][col];
        System.out.println("Enter"+row+" x "+col+" matrix Elamans :");
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
        return matrix;
    }
    static int[][] addMatrix(int row,int col,int[][] mat1,int[][] mat2){ 
        Scanner sc=new Scanner(System.in);
        
        int[][] result=new int [row][col];
        for (int i=0;i<row;i++) {
            for (int j=0;j<col;j++) {
                result[i][j]=mat1[i][j]+mat2[i][j];                   
            }
        }
        return result;
    }
    static int[][] subMatrix(int row,int col,int[][] mat1,int[][] mat2){ 
        Scanner sc=new Scanner(System.in);
        
        int[][] result=new int [row][col];
        for (int i=0;i<row;i++) {
            for (int j=0;j<col;j++) {
                result[i][j]=mat1[i][j]-mat2[i][j];                   
            }
        }
        return result;
    }
    static int[][] mulMatrix(int row,int col,int[][] mat1,int[][] mat2){ 
        Scanner sc=new Scanner(System.in);
        
        int[][] result=new int [row][col];
        if(matrow==)
        for (int i=0;i<row;i++) {
            for (int j=0;j<col;j++) {
                result[i][j]=mat1[i][j]+mat2[i][j];                   
            }
        }
        return result;
    }
    static int[][] divMatrix(int row,int col,int[][] mat1,int[][] mat2){ 
        Scanner sc=new Scanner(System.in);
        
        int[][] result=new int [row][col];
        for (int i=0;i<row;i++) {
            for (int j=0;j<col;j++) {
                result[i][j]=mat1[i][j]/mat2[i][j];                   
            }
        }
        return result;
    }
    public static void main(String st) {
        Scanner sc=new Scanner(System.in);
        // int[] rc=new int[2];
        // rc=getLimit();
        System.out.println("Enter matrix row number :");
        row=sc.nextInt();
        int row=rc[0];
        int col=rc[1];
        
        int[][] matrix1=new int[row][];
        int[][] matrix2=new int[row][];
        
        int[][] result=new int[row][];
        // int[][] subMatrix=new int[row][];
        // int[][] mulMatrix=new int[row][];
        // int[][] divMatrix=new int[row][];

        matrix1=getMatrix(row,col);
        matrix2=getMatrix(row,col);
        boolean q=true;
        int option=0;
        while (q) {
            System.out.println("1:Matrix addition"+'\n'+"2:Matrix Substraction"+'\n'+"3:Matrix Multiplication"+'\n'+"4:Matrix Transpose"+'\n'+"5:Exit"+'\n');
            switch(option){
                case 1:
                result=addMatrix(mat1, mat2)

            }
            sumMetrix=addMatrix(row,col,matrix1,matrix2);
        }
        
    }
}
