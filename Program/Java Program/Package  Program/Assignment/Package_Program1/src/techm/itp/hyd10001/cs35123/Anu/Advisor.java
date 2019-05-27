package techm.itp.hyd10001.cs35123.Anu;
import java.util.*;
public class Advisor {
    String message[] = new String[5];

    public Advisor() {
        message[0] = "You are lucky";
        message[1] = "You get good job";
        message[2] = "Dont say no";
        message[3] = "Always keep smiling";
        message[4] = "Be happy";
    }

    public String getAdvice() {
        Random rnd = new Random();
        int n = rnd.nextInt(5);
        switch (n) {
            case 0:
                return message[0];
            case 1:
                return message[1];
            case 2:
                return message[2];
            case 3:
                return message[3];
            default:
                return message[4];
        }
    }
}