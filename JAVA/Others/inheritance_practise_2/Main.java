package Others.inheritance_practise_2;
import java.util.*;
import java.util.ArrayList;

public class Main {
     public static void main(String[] args) {
        // Create an ArrayList to store a mix of employees and managers
        ArrayList<Employee> employeeList = new ArrayList<>();

        // Add instances of various employees and managers to the list
        employeeList.add(new Manager("Alice", "Engineering", 120000.0));
        employeeList.add(new Employee("Bob", "HR", 60000.0));
        employeeList.add(new Manager("Charlie", "Marketing", 110000.0));
        employeeList.add(new Employee("David", "Finance", 75000.0));

        // Display information about each employee and manager
        for (Employee employee : employeeList) {
            System.out.println(employee.toString());
        }
    }
}
