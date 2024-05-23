package Others.inheritance_practise;

import java.util.ArrayList;

public class Main 
{
    public static void main(String[] args) 
    {
        ArrayList<Animal> animalList = new ArrayList<>();

        
        animalList.add(new Dog("Buddy"));
        animalList.add(new Cat("Whiskers"));
        animalList.add(new Fish("Nemo"));

        for (Animal animal : animalList) 
        {
            System.out.println(animal.getInfo());
        }
    }
}
