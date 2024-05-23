package Labtest03_230214;

class Circle extends Shape {
    private double r;

    public Circle(double r) {
        this.r = r;
    }

    public double getArea() {
        return 3.14 * r * r;
    }

    public String toString() {
        return "Circle{Radius: " + r + "}";
    }
}