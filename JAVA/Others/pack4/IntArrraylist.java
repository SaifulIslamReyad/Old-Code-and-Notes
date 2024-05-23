package Others.pack4;
import java.util.ArrayList;
import java.util.Collections;

// ArrayList pythonlist = new ArrayList ();
// pythonlist.add("abc");
// pythonlist.add(5);
/*
 static void reverselist( ArrrayList<Integer> list)
 {
    int i=0;j= list.size()-1;
    while(i<j)
    {
        Integer temp= Integer.valueof(list.get(i));
        list.set(i,list.get(j));
        list.set(j,temp);
        i++;j--;
    }
 } 
 */

// for( Integer i : list )
// System.out.println( i );

//trimToSize(): Trims the capacity of the ArrayList to be the ArrayList's current size. This can be used to minimize the storage of an ArrayList instance.
//lastIndexOf(Object o): Returns the index of the last occurrence of the specified element, or -1 if the element is not present.
//removeRange(int fromIndex, int toIndex): Removes all elements within the specified range of indices.

// ArrayList<Integer> b = a.clone( );
// for( int k = 0; k < b.size( ); k++)
// b.set(k, a.get(k));

//ArrayList<Integer> b = a.clone( );  //different a,b pointing arraylist 
//ArrayList<Integer> b = a;       //different a,b pointing same arraylist
public class IntArrraylist {
    Integer ii= Integer.valueOf(9);
    public static void main(String[] args) {
        // Creating an ArrayList of Integers
        ArrayList<Integer> list = new ArrayList<>();
        list.add(1);
        list.add(27);
        list.add(3);
        list.add(4);

        System.out.println("Original ArrayList: " + list);
        Collections.sort(list);
        System.out.println(list.contains(Integer.valueOf(27)));
        //addAlll,containsAlll

        // Reversing the ArrayList
        Collections.reverse(list);
        System.out.println("Reversed ArrayList: " + list);
        
        // Accessing elements by index
        System.out.println("Element at index 2: " + list.get(2));

        // Modifying an element
        list.set(1, 10);
        System.out.println("Modified ArrayList: " + list);

        // Removing an element by index
        list.remove(0);
        System.out.println("ArrayList after removing element at index 0: " + list);

        // Removing an element by value
        list.remove(Integer.valueOf(4)); // Remove by value
        System.out.println("ArrayList after removing '4': " + list);

        // Checking if an element exists
        System.out.println("Does '3' exist in ArrayList? " + list.contains(3));

        // Getting the size of the ArrayList
        System.out.println("Size of ArrayList: " + list.size());

        // Checking if the ArrayList is empty
        System.out.println("Is ArrayList empty? " + list.isEmpty());

        // Clearing the ArrayList
        list.clear();
        System.out.println("ArrayList after clearing: " + list);
    }
}
