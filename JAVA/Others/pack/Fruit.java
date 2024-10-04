package Others.pack;

public class Fruit 
{
    String name;
    int price;
    String taste="good";
        //value assign করার পর সব অব্জেক্ট এর জনয টেস্ট গুড

    String bangla="mojar fol";
    final int sold=20;
    //ফাইনাল এর কারনে কন্সট্রাক্টর ,গেটার সেটার কিছু দিয়াই এই মান বদলানো যাবেনা


    //constractor
    public Fruit(String name,int price,String taste)
    {
        this.name=name;
        this.price=price;
    }
    // public Fruit()
    // {
    //     //this a default constructor ,sets nulll,0,0.00,
    // }
    // in constrctr we can set 1 value also
    //কন্সট্রাক্টর বানালে উহা ব্যবহার করতেই হবে , নুব নিয়মে বানান যাবেনা


    //////to-string method
        public String toString()
        {
            return ("Fruit name: " +this.name+ "\t Price: "+this.price+ "\t taste: "+ this.taste);
        }


}
