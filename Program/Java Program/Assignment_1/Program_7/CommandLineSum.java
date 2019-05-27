public class CommandLineSum {
    public static void main(String[] args) {
        int t1 = Integer.parseInt(args[0]);
        int t2=Integer.parseInt(args[1]);
        System.out.println("T1 = "+t1+"T2 = "+t2);

	for (int i =0; i <13; ++i)
        {
            System.out.print(t1+" ");

            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }

    }
}
