package p1;

public class A {
   protected void myFunA()
    {
        System.out.println("Inside A Class");
    }
}

class B
{
    void myFunB()
    {
        System.out.println("Inside B Class");
        A objA=new A();
        objA.myFunA();
    }

}
class C extends A
{
    void myFunB()
    {
        System.out.println("Inside C Class");
        A objA=new A();
        objA.myFunA();
    }

}
