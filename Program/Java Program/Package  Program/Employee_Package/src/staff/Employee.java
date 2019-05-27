package staff;

public abstract class Employee
{
    public String name;
    public int id;
    public double salary;

    public void setName(String s)
    {
        this.name=s;
    }
    public  String getName()
    {
        return this.name;

    }
    public void setId(int a)
    {
        this.id = a;
    }
    public int getId()
    {
        return this.id;

    }
    public  void setSalary(double sa)
    {
        this.salary = sa;
    }

    public double  getSalary()
    {
        return this.salary;
    }

    public abstract  double calSalary();
   /*  {
          return this.salary;
      }*/


    public  Employee()
    {
        this.name="Not given";
        this.id = 0;
        this.salary = 0;


    }

    public Employee(String s, int a, double sa)
    {
        this.name=s;
        this.id = a;
        this.salary = sa;


    }

    public void display()
    {
        System.out.println("Name of Employee is: "+this.name);
        System.out.println("ID of Employee is: "+this.id);
        System.out.println("Salary of Employee is: "+this.salary);

    }
}//class employee ends here
