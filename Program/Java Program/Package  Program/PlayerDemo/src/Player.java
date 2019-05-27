public class Player {
    String name;
    int jer_no;

    public Player() {
        super();
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setJer_no(int jer_no) {
        this.jer_no = jer_no;
    }


    public String getName() {
        return name;
    }

    public int getJer_no() {
        return jer_no;
    }
//    public String toString()

    @Override
    public String toString() {
        return "Player{" +
                "name='" + name + '\'' +
                ", jer_no=" + jer_no +
                '}';
    }
//    {
//        return "Player[\"\\n Jersy no is :\"+this.getJer_no()+\" Name is : \"+this.getName()]";
//    }
}

class PlayerDemo
{
    public static void main(String[] args) {

        Player p1=new Player();
        System.out.println(p1);
        p1.setJer_no(10);
        p1.setName("Kundan");
        System.out.println(p1);
        System.out.println(p1.toString());



    }
}
