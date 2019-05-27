public class rectangle {
    double length;
    double width;

    public void setLength(double length) {
        if (length >= 0 || length <= 20.0)
            length = length;
        else
            length = 1.0;
    }

    public void setWidth(double width) {
        if (width >= 0 || width <= 20.0)
            width = width;
        else
            width = 1.0;
    }

    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;
    }

    double area() {
        return (length * width);
    }

    double perimeter() {
        return 2 * (length + width);
    }

    void display() {
        System.out.println("Length is :" + getLength() + "Width is :" + getWidth() + "Area of rectangle is : " + area() + "Perimeter of Rectangle is :" + perimeter());
    }
}


