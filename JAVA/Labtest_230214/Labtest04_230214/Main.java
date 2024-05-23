package Labtest04_230214;

import java.util.*;



public class Main {
    public static void main(String[] args) {
        Rose r1 = new Rose(20);
        Rose r2 = new Rose(30);
        Tulip t1 = new Tulip(20);
        r1.Compare(r2);
        r1.Compare(t1);
        t1.Compare(r1);
        t1.Compare(t1);
    }
}

    
// output:
// Rose{20} has less petals than Rose{30}
// Rose{20} has equal petals as Tulip{20}
// Tulip{20} has equal petals as Rose{20}
// Tulip{20} has equal petals as Tulip{20}
