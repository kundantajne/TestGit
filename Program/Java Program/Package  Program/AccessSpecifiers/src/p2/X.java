package p2;

import p1.A;

class X {
    protected void myFunX()
     {
         System.out.println("Inside X Class");
         A objA=new A();
         objA.myFunA();
     }

}
class Y extends A
{
    void myFunY()
    {
        System.out.println("Inside Y ;Class");
        A objA=new A();
        objA.myFunA();
        super.myFunA();//with inheitance
        this.myFunA();//with inheitance
    }
  ;
}
