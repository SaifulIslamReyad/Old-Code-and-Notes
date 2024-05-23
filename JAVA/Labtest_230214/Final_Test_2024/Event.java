package Final_Test_2024;

class Event {
    private String name;
    private Date date;
    private Place place;

    public Event(String name, Date date, Place place) {
        this.name = name;
        this.date = date;
        this.place = place;
    }

    public String getName() {
        return name;
    }

    public Date getD() {
        return date;
    }

    public Place getP() {
        return place;
    }
}
