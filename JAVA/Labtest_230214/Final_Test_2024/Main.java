package Final_Test_2024;

public class Main {
    public static void main(String[] args) {
       Date d = new Date(22, 2, 2024);
       Place pl = new Place("Khulna University", "Khulna");
       Event e = new Event("Fresher's Receiption", new Date(22, 2, 2024), pl);
       OrganizedEvent p = new OrganizedEvent("CSE Discipline", "Farewell", d, pl);
       System.out.println(e.getName()+ " and " + p.getName()+ " are two events.");
       System.out.println(p.getName()+ " event was organized by "+p.getOrganizer()+" at "+p.getP()+".");
       if(e.getD().equals(p.getD()))
           System.out.println("Both the events held on " + e.getD()+".");
       else
           System.out.println("The two events held on different days.");
       e=p;
    } 
}

