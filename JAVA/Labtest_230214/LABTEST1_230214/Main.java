package LABTEST1_230214;

public class Main {
    public static void main(String[] args) {
        Cat tom = new Cat("Donald Trump");
        Mouse jerry = new Mouse("Biden");
        System.out.println(tom);
        System.out.println(jerry);
        tom.Catch(jerry);
    }
}
