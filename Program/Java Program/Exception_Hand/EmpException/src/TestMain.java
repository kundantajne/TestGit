public class TestMain {
    public static void main(String[] args) {
        System.out.println();
        Emp e1 = new Emp(2, "Kundan", "Manager", 50);
        e1.printDET();
        e1.calculateHRA();
        System.out.println();
        Emp e2=new Emp(3,"Akshay","officer",1000);
        e2.printDET();
        e2.calculateHRA();
        System.out.println();
        System.out.println();
        Emp e3=new Emp(4,"Gaurav","cleark",300);
        e3.printDET();
        e3.calculateHRA();

    }

}
