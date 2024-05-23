package LABTEST2_230214;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Flower> fList = new ArrayList<Flower>();
        fList.add(new Flower("Joba", "Red"));
        fList.add(new Tulip("Yellow"));
        fList.add(new Rose("Pink"));
        fList.add(new Rose());
        fList.add(new Flower());
        for(Flower f:fList){
           System.out.println(f);
        }
    }
}
