package techm.itp.hyd10001.cs35123.Anu;

public class greeter {
    String name;

    public greeter(String aName) {
        name = aName;
    }

    public void sayHello() {
        System.out.println("Hello " + name);
    }

    public void sayGoodBye() {
        System.out.println("Good Bye " + name);
    }
}