package LABTEST2_230214;

public class Flower {
    protected String Name;
    protected String Color;

    public Flower() {
        this.Name = "Unknown Flower";
        this.Color = "Unknown";
    }

    public Flower(String Name, String Color) {
        this.Name = Name;
        this.Color = Color;
    }

    public String toString() {
        return this.Name + "{color=" + this.Color + "}";
    }
}