package Labtest03_230214;
class Rectangle extends Shape {
    protected double l;
    private double w;

    public Rectangle(double l, double w) {
        this.l = l;
        this.w = w;
    }

    public double getArea() {
        return l * w;
    }

    public String toString() {
        return "Rectangle{Length: " + l + " Width: " + w + "}";
    }
}
    

