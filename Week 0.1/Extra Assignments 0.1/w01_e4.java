import java.util.Scanner;

public class w01_e4 {

    static String getString(){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a String:");
        String name=sc.nextLine();
        return name;
    }

    static int strLength(String str){
        int i=0;
        char[] chr=str.toCharArray();
        boolean brk=true;
        try {
            for(i=0;brk;++i){
                if(chr[i]=='\0'){
                    brk=false;
                }
            }
        } catch (Exception e) {
        }
        return (i);
    }
    static String strCat(String str1,String str2){
        String str=str1+" "+str2;
        return str;
    }

    static void strre(){
        String str = getString();
        String revString ="";
        int l=strLength(str) - 1;
        for (int i = l; i >= 0; --i) {
            revString += str.charAt(i);
        }
        System.out.println('\n'+"Revers of '"+str+"' is :"+'\n'+revString);
    }
    

    public static  void main(String st[]){
        w01_e4 obj=new w01_e4();  
        Scanner sc=new Scanner(System.in);
        boolean exit=true;

        while(exit){
            System.out.println('\n'+"1:STRING LENGTH()"+'\n'+"2:STRING CONCATENATION()"+'\n'+"3:STRING REVERSE()"+'\n'+"4:Exit()"+'\n'+'\n'+"Enter your Choice :");
            int choice=sc.nextInt();
            String str1=new String();
            String str2=new String();
            switch (choice) {
                case 1:
                    str1=getString();
                    System.out.print("Length of '"+str1+"' is : "+(strLength(str1)));
                    break;
                case 2:
                    str1=getString();
                    str2=getString();
                    System.out.print("ConCatination of '"+str1+"' & '"+str2+"' is :"+'\n'+strCat(str1,str2));
                    break;
                case 3:                   
                    strre(); 
                    break;
                case 4:
                    exit=false;
                    break;
                default:
                    System.out.print("Enter a valied optsion"+'\n');
                    break;
            }
        }

    }
    
}
