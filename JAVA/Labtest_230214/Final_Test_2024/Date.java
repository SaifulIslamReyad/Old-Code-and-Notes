package Final_Test_2024;

class Date {
    private int day;
    private int month;
    private int year;

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    @Override
    public String toString() {
        return day + "/" + month + "/" + year;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) return true;
        if (!(obj instanceof Date)) return false;
        Date xx = (Date) obj;
        return this.day == xx.day && this.month == xx.month && this.year == xx.year;
    }
}

