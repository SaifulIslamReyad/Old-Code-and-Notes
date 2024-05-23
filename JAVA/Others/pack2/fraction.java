package Others.pack2;
import java.util.*;

class fraction{
    static class fra
    {
        int n,d;
        fra(int n,int d)
        {
            this.n=n;
            this.d=d;
            System.out.println(n+"/"+d);
        }

    }
  public static void main(String args[])
  {
    fra a=new fra(2,5);
    System.out.println(a.n+"/"+a.d);
    
  }
}