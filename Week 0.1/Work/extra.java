class A{

    int a=10;
    A(){
        System.out.println("Hi A");
    }
}
class B extends A{
    int a=20;
    
    B(){
        System.out.println("Hi B");
        System.out.println(super.a);
        System.out.println(a);
        //super.show();
    }
}


public class extra extends Thread{
    public static void main(String[] args) {
        
        

            System.out.println("Hello");
        B b=new B();
        }
        
        //b.show();
    }


