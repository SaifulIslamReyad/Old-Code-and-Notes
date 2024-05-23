package Others.inheritance_practise_2;

public class Employee {
    String a;
    String b;
    double c;
    String d="Employee";
    Employee(String a, String b, double c)
    {
        this.a=a;
        this.b=b;
        this.c=c;
    }
    Employee(String a, String b, double c,String d)
    {
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
    }
    public String toString()
    {
        return d+a+b+c;
    } 
}
