package Others.pack4;
import java.util.*;

public class ArrayListExamples {
    public static void main(String args[]) {
        // Creating an empty array list
        ArrayList<String> list = new ArrayList<String>();
        // Adding items to arrayList
        list.add("Item1");
        list.add("Item2");
        list.add(2, "Item3"); // it will add Item3 to the third position of array list
        list.add("Item4");
        // Display the contents of the array list
        System.out.println("The arraylist contains the following elements: "
                + list);
        // Checking index of an item
        int pos = list.indexOf("Item2");
        System.out.println("The index of Item2 is: " + pos);
        // Checking if array list is empty
        boolean check = list.isEmpty();
        System.out.println("Checking if the arraylist is empty: " + check);
        // Getting the size of the list
        int size = list.size();
        System.out.println("The size of the list is: " + size);
        // Checking if an element is included to the list
        boolean element = list.contains("Item5");
        System.out.println("Checking if the arraylist contains the object Item5: "
                + element);
        // Getting the element in a specific position
        String item = list.get(0);
        System.out.println("The item is the index 0 is: " + item);
        // Retrieve elements from the arraylist
        // 1st way: loop using index and size list
        System.out
                .println("Retrieving items with loop using index and size list");
        for (int i = 0; i < list.size(); i++) {
            System.out.println("Index: " + i + " - Item: " + list.get(i));
        }
        // 2nd way:using foreach loop
        System.out.println("Retrieving items using foreach loop");
        for (String str : list) {
            System.out.println("Item is: " + str);
        }
        // 3rd way:using iterator
        // hasNext(): returns true if there are more elements
        // next(): returns the next element
        System.out.println("Retrieving items using iterator");
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            System.out.println("Item is: " + it.next());
        }
        // Replacing an element
        list.set(1, "NewItem");
        System.out.println("The arraylist after the replacement is: " + list);
        // Removing items
        // removing the item in index 0
        list.remove(0);
        // removing the first occurrence of item "Item3"
        list.remove("Item3");
        System.out.println("The final contents of the arraylist are: " + list);
        // Converting ArrayList to Array
        String[] simpleArray = list.toArray(new String[list.size()]);
        System.out.println("The array created after the conversion of our arraylist is: "
                + Arrays.toString(simpleArray));
        









            //     System.out.println("Reversed ArrayList: " + arrayList);
        
            //     // Accessing elements by index
            //     System.out.println("Element at index 2: " + getElementAtIndex(arrayList, 2));
        
            //     // Modifying an element
            //     modifyElementAtIndex(arrayList, 1, Integer.valueOf(10));
            //     System.out.println("Modified ArrayList: " + arrayList);
        
            //     // Removing an element by index
            //     removeElementAtIndex(arrayList, 0);
            //     System.out.println("ArrayList after removing element at index 0: " + arrayList);
        
            //     // Removing an element by value
            //     removeElementByValue(arrayList, Integer.valueOf(4));
            //     System.out.println("ArrayList after removing '4': " + arrayList);
        
            //     // Checking if an element exists
            //     System.out.println("Does '3' exist in ArrayList? " + containsElement(arrayList, Integer.valueOf(3)));
        
            //     // Getting the size of the ArrayList
            //     System.out.println("Size of ArrayList: " + getSize(arrayList));
        
            //     // Checking if the ArrayList is empty
            //     System.out.println("Is ArrayList empty? " + isEmpty(arrayList));
        
            //     // Clearing the ArrayList
            //     clearArrayList(arrayList);
            //     System.out.println("ArrayList after clearing: " + arrayList);
            // }
        
            // public static void reverseArrayList(ArrayList<?> list) {
            //     // Using Collections.reverse() to reverse the list
            //     Collections.reverse(list);
            // }
            
            // public static <T> T getElementAtIndex(ArrayList<T> list, int index) {
            //     // Getting the element at the specified index
            //     return list.get(index);
            // }
            
            // public static <T> void modifyElementAtIndex(ArrayList<T> list, int index, T element) {
            //     // Modifying the element at the specified index
            //     list.set(index, element);
            // }
            
            // public static void removeElementAtIndex(ArrayList<?> list, int index) {
            //     // Removing the element at the specified index
            //     list.remove(index);
            // }
            
            // public static boolean removeElementByValue(ArrayList<?> list, Object value) {
            //     // Removing the first occurrence of the specified element from the ArrayList
            //     return list.remove(value);
            // }
            
            // public static boolean containsElement(ArrayList<?> list, Object value) {
            //     // Checking if the ArrayList contains the specified element
            //     return list.contains(value);
            // }
            
            // public static int getSize(ArrayList<?> list) {
            //     // Getting the size of the ArrayList
            //     return list.size();
            // }
            
            // public static boolean isEmpty(ArrayList<?> list) {
            //     // Checking if the ArrayList is empty
            //     return list.isEmpty();
            // }
            
            // public static void clearArrayList(ArrayList<?> list) {
            //     // Clearing the ArrayList
            //     list.clear();
    }
}
