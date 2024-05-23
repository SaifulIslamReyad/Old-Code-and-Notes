package Final_Test_2024;

class OrganizedEvent extends Event {
    private String org;

    public OrganizedEvent(String org, String name, Date date, Place place) {
        super(name, date, place);
        this.org = org;
    }

    public String getOrganizer() {
        return org;
    }
}