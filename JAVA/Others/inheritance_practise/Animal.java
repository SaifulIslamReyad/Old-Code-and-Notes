package Others.inheritance_practise;

public class Animal {
    String name;
    String a;
    String b;
    Animal(String name,String a,String b)
    {
        this.name=name;
        this.a=a;
        this.b=b;

    }
    public String getInfo()
    {
        return this.name+": "+ this.a + " says " + this.b;
    }
}
