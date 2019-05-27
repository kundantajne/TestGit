package demo;
import staff.Employee;
public class Testmain
{
    public static void main(String args[])
    {

        Employee e1 =new manager.Salesmanager("virat",10,20000,1200,14);
        e1.display();
        System.out.println("the salary of employee is "+e1.calSalary());
        System.out.println("\n");

        e1=new staff.Hr("Kundan",11,25000,1400);
        e1.display();
        System.out.println("the salary of employee is "+e1.calSalary());
        System.out.println("\n");


        e1=new manager.Admin("vishal",12,30000,500);
        System.out.println("the salary of employee is "+e1.calSalary());
        e1.display();

    }
}
