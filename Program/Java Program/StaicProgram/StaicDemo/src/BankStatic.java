public class BankStatic {

    String bank_name;
    int acc_acc;
    static double intrest_rate;

    //Setter And Getters;
    public String getBank_name() {
        return bank_name;
    }

    public void setBank_name(String bank_name) {
        this.bank_name = bank_name;
    }

    public int getAcc_acc() {
        return acc_acc;
    }

    public void setAcc_acc(int acc_acc) {
        this.acc_acc = acc_acc;
    }

    double getIntrest_rate() {
        return intrest_rate;
    }

    static void setIntrest_rate(double ir) {
        intrest_rate = ir;
    }

    //Constructor;
    public BankStatic(String bank_name, int acc_acc) {
        this.bank_name = bank_name;
        this.acc_acc = acc_acc;

    }

    @Override
    public String toString() {
        return ("Account Number :" + getAcc_acc() + " \nBank Name :" + getBank_name() + "\nIntrest Rate :" + getIntrest_rate());
    }




}
//Main Method;
class MainDemo {
    public static void main(String[] args) {
        BankStatic.setIntrest_rate(9.8);
        BankStatic b1 = new BankStatic("SBI", 3251295);
        System.out.println(b1.toString());

    }
}


