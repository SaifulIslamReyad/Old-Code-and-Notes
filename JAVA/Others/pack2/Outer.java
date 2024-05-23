package Others.pack2;

public class Outer 
{
    static int x=10;//static variable
    static void pmathod() //static function
    {
        System.out.println("haha");
    }



    static class Inner1 //static class
    {
        static int a;
        int b;
    }

    class Inner2
    {
        static int c;
        int d;
    }



    public static void main(String[] args)
    {
        Inner1.a++;
        System.out.println(Inner1.a);
        Inner1 obj1=new Inner1();
        

    }

        
}
