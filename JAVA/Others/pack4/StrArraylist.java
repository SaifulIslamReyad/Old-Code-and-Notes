package Others.pack4;
import java.util.*;


public class StrArraylist {
    public static void main(String[] args) {
        // Creating an ArrayList
        ArrayList<String> list = new ArrayList<>();

        // Adding elements to the ArrayList
        list.add("Apple");
        list.add("Banana");
        list.add("Orange");
        list.add("Mango");

        // Printing the ArrayList
        System.out.println("ArrayList: " + list);

        Collections.reverse(list);
        System.out.println("Reversed ArrayList: " + list);

        // Accessing elements by index
        System.out.println("Element at index 2: " + list.get(2));

        // Modifying an element
        list.set(1, "Grapes");
        System.out.println("Modified ArrayList: " + list);

        // Removing an element by index
        list.remove(0);
        System.out.println("ArrayList after removing element at index 0: " + list);

        // Removing an element by value
        list.remove("Mango");
        System.out.println("ArrayList after removing 'Mango': " + list);

        // Checking if an element exists
        System.out.println("Does 'Apple' exist in ArrayList? " + list.contains("Apple"));

        // Getting the size of the ArrayList
        System.out.println("Size of ArrayList: " + list.size());

        // Checking if the ArrayList is empty
        System.out.println("Is ArrayList empty? " + list.isEmpty());

        // Clearing the ArrayList
        list.clear();
        System.out.println("ArrayList after clearing: " + list);

        // Adding elements after clearing
        list.add("New Element");
        System.out.println("ArrayList after adding 'New Element': " + list);
    }
}
