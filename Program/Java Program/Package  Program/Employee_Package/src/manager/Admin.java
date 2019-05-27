package manager;
public class Admin extends staff.Employee
{

    public double allowance  ;




    public void setAllowance(double co)
    {
        this.allowance = co;
    }

    public double  getAllowance()
    {
        return this.allowance;
    }

    public Admin()
    {
        super();
        this.allowance=0;
    }
    public Admin(String s, int a,double sa,double co)
    {
        super(s,a,sa);
        this.allowance=co;

    }
    public   double calSalary()
    {
        return (this.salary + this.allowance);
    }
    public void display()
    {
        super.display();
        System.out.println("Allowance   of Admin  is: "+ this.allowance);

    }
}// class admin ends here
