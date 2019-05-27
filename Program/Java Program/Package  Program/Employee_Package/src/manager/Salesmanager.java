package manager;


public class Salesmanager extends staff.Employee
{

    public double incentive ;
    public int target;

    public void setIncentive(double a)
    {
        this.incentive = a;
    }
    public  double  getIncentive()
    {
        return this.incentive;
    }


    public void setTarget(int t)
    {
        this.target=t;

    }
    public int getTarget()
    {
        return  this.target;

    }
    public Salesmanager()
    {
        super();
        this.incentive=0;
        this.target=0;
    }
    public Salesmanager(String s, int a,double sa,double in,int tar)
    {
        super(s,a,sa);
        this.incentive=in;
        this.target=tar;

    }

    public double calSalary()
    {
        return (this.salary + this.incentive);
    }
    public void display()
    {
        super.display();
        System.out.println("Target  of Salesmanager  is: "+this.target);
        System.out.println("Incentive  of Salesmanager  is: "+ this.incentive);

    }
}// class salesmanager ends here
