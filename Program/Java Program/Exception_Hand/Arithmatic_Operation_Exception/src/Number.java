
public class Number {
    int first_number;
    int second_number;
    double result;

    public int getFirst_number() {
        return first_number;
    }

    public void setFirst_number(int first_number) {
        this.first_number = first_number;
    }

    public int getSecond_number() {
        return second_number;
    }

    public void setSecond_number(int second_number) {
        this.second_number = second_number;
    }

    public double getResult() {
        return result;
    }

    public void setResult(double result) {
        this.result = result;
    }

    public Number(int first_number, int second_number) {
        this.first_number = first_number;
        this.second_number = second_number;

    }

    void add() {
        result = first_number + second_number;
        System.out.println(result);
    }

    void sub() {
        result = first_number - second_number;
        System.out.println(result);

    }

    void mul() {
        result = first_number * second_number;
        System.out.println(result);
    }

    void div() {
        result = first_number / second_number;

        System.out.println(result);
    }

    public void display() {
        System.out.println("Result=" + result);

    }
}
