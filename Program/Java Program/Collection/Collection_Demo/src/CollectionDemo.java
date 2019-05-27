import java.util.*;


public class CollectionDemo {
    public static void main(String[] args) {
        System.out.println("---------------------------List------------------------------");
        List a1=new LinkedList();
        a1.add(20);
        a1.add(10);
        a1.add(30);
        System.out.println(a1);
        System.out.println("With iterator");
        Iterator i1=a1.iterator();
        while (i1.hasNext()){
            System.out.println(i1.next());
        }


        System.out.println("-------------------------SET---------------------------");
        System.out.println("--------------TreeSet--------------------");
        Set s1=new TreeSet();
        s1.add(20);
        s1.add(30);
        s1.add(10);
        System.out.println(s1);
        System.out.println("With iterator");
        Iterator i2=s1.iterator();
        while (i2.hasNext()){
            System.out.println(i2.next());
        }
        System.out.println("--------------HashSet--------------------");
        Set s3=new HashSet();
        s3.add(20);
        s3.add(30);
        s3.add(10);
        System.out.println(s1);
        System.out.println("With iterator");
        Iterator i3=s3.iterator();
        while (i3.hasNext()){
            System.out.println(i3.next());
        }


    }
}
