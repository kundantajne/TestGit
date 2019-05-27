import java.util.*;
public class evenNumber {
    public static void main(String[] args) {
       // int n;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter The value of a :");
        int a = in.nextInt();
        System.out.println("List Of Even Number Is : ");
       if (a>0)
       {
            for (int i=0;i<=a;i++)
            {
                if (i%2==0)
                    System.out.println("Even Number are :"+i);
            }
        }
       else
       {
           for (int i=a;i<=0;i++)
           {
               if (i%2==0)
               {
                   System.out.println("Negative Even Numbers are : "+i);
               }
           }
       }

    }
}
