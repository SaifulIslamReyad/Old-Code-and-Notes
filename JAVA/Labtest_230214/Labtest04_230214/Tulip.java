package Labtest04_230214;

public class Tulip 
{
    int petals;

    public Tulip(int petals) 
    {
        this.petals = petals;
    }

    public void Compare(Tulip x) 
    {
        if (this.petals < x.petals) {
            System.out.println(this + " has less petals than " + x);
        } else if (this.petals > x.petals) {
            System.out.println(this + " has more petals than " + x);
        } else {
            System.out.println(this + " has equal petals as " + x);
        }
    }
    public void Compare(Rose x) 
    
    {
        if (this.petals < x.petals) {
            System.out.println(this + " has less petals than " + x);
        } else if (this.petals > x.petals) {
            System.out.println(this + " has more petals than " + x);
        } else {
            System.out.println(this + " has equal petals as " + x);
        }
    }

    public String toString() 
    {
        return "Tulip{" + petals + "}";
    }
}
