package DB;

import Model.User;

public class DAO {

    static User arr[];
    static int counter;
    int i;

    static {
        arr = new User[50];
        counter = -1;

    }

    public void insert(User ur) {
        // System.out.println("Insert Called");
        //System.out.println(ur.getUsername());

        counter++;
        System.out.println("Insert Called");
        for (i = 0; i <= counter; i++) {
            if (arr[i] == null) {
                arr[i] = ur;
            }

        }

    }

    public void display() {
        System.out.println("Display");
        for (i = 0; i <= counter; i++) {

            System.out.println(arr[i]);
        }
    }

    public int validate(String usr, String pass) {
        int b = 0;
        for (i = 0; i <= counter; i++) {
            if (usr.equals(arr[i].getUsername()) && (pass.equals(arr[i].getPassword()))) {
                b = 1;
            }
        }
        return b;
    }
}
