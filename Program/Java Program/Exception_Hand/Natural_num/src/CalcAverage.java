import java.util.Scanner;

public class CalcAverage  {
    Scanner sc=new Scanner(System.in);
    int number=sc.nextInt();

    public int getNumber() {
        return number;
    }

    public void setNumber(int number) {
        this.number = number;
    }


    public double avgFirstN (int N)
    {
        int sum=0;
        if (number<0)
        {
            try {
                throw new illegalArgumentException();
            }
            catch (illegalArgumentException e)
            {
                System.out.println(e);
            }
        }
        else
        {

            for (int i=0;i<=number;i++)
            {
                 sum=sum+i;

            }
            System.out.println(sum);


        }
        return (sum/number);

    }

}
