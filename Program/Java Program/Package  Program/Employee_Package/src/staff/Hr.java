package staff;

public class Hr extends staff.Employee
{

    public double comission  ;


    public void setComission(double co)
    {
        this.comission = co;
    }

    public double  getCommission()
    {
        return this.comission;
    }

    public Hr()
    {
        super();
        this.comission=0;
    }
    public Hr(String s, int a,double sa,double co)
    {
        super(s,a,sa);
        this.comission=co;

    }

    public double calSalary()
    {
        return (this.salary + this.comission);
    }
    public void display()
    {
        super.display();
        System.out.println("comission   of HR  is: "+ this.comission);

    }
}//HR class ends here