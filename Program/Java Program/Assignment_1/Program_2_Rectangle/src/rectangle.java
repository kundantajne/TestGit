public class rectangle {
    double height;
    double breath;

    rectangle() {
        height = 0;
        breath = 0;
    }

    rectangle(double h, double b) {
        height = h;
        breath = b;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public void setBreath(double breath) {
        this.breath = breath;
    }

    public double getHeight() {
        return height;
    }

    public double getBreath() {
        return breath;
    }

    double area() {
        return (height * breath);
    }

    void display() {
        System.out.println("Value of Height is :" + getHeight() + "Values of breath : " + getBreath() + "Area of Rectangle" + area());


    }
}


