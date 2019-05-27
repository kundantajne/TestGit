public class Date {
    int day;
    int month;
    int year;

    Date() {
        day = 12;
        month = 8;
        year = 1996;
    }

    public void setDay(int day) {
        if (day > 0 && day <= 31)
            this.day = day;
        else
            System.out.println("invalid");
    }

    public void setMonth(int month) {
        if (month > 0 && month <= 12)
            this.month = month;
        else
            System.out.println("invalid");
    }

    public void setYear(int year) {
        this.year = year;
    }

    public int getDay() {
        return day;
    }

    public int getMonth() {
        return month;
    }

    public int getYear() {
        return year;
    }

    void display() {
        System.out.println("Date is : "+getDay()+"/"+getMonth()+"/"+getYear());
    }

}
