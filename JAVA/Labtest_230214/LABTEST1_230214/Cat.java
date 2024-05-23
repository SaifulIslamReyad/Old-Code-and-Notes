package LABTEST1_230214;

public class Cat {
    String name;
    Cat(String nam)
    {
        name=nam;
    }
    public String toString()
    {
        return "There is a dog named "+ name ;
    }
    void Catch(Mouse x)
    {
        System.out.println(this.name + " caught " + x.name);
    } 
    
}
