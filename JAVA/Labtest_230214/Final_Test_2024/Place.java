package Final_Test_2024;

class Place {
    private String name;
    private String location;

    public Place(String name, String location) {
        this.name = name;
        this.location = location;
    }

    @Override
    public String toString() {
        return name + ", " + location;
    }
}
