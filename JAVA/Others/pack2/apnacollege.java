package Others.pack2;
class pen
    {
        String name;
        int cost;
        void printname()
        {
            System.out.println(this.name);
            // this দেলেও হয় না দেলেও হয়
        }
        pen()
        {
            //বানাইসি নাইলে pen a= new pen(); কাজ করেনা
        }
        pen (pen x)
        {
            this.name=x.name;
            this.cost= x.cost;
            //এখানে this=b
            //x=a
        }

    }
public class apnacollege
{
    
    public static void main(String[] args) 
    {
        
        pen a= new pen();
        a.name= "geel";
        a.cost=5;
        a.printname();
        pen b=new pen(a);
        System.out.println(b.name);

    }
    
}
