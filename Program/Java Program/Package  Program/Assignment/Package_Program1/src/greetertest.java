import techm.itp.hyd10001.cs35123.Anu.*;

public class greetertest {
    public static void main(String[] args) {
        greeter g1 = new greeter("Kundan");
        greeter g2 = new greeter("Tushar");
        g1.sayHello();
        g2.sayHello();
        Advisor a = new Advisor();
        System.out.println(a.getAdvice());
        g2.sayGoodBye();
        g1.sayGoodBye();
    }
}