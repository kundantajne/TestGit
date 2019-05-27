public class BankAccount  {
    int acc_no;
    String cust_name;
    String acc_type;
    float balance;

    //Constructor;


    public BankAccount(int acc_no, String cust_name, String acc_type, float balance) {
        this.acc_no = acc_no;
        this.cust_name = cust_name;
        this.acc_type = acc_type;
        this.balance = balance;
    }

    public int getAcc_no() {
        return acc_no;
    }

    public void setAcc_no(int acc_no) {
        this.acc_no = acc_no;
    }

    public String getCust_name() {
        return cust_name;
    }

    public void setCust_name(String cust_name) {
        this.cust_name = cust_name;
    }

    public String getAcc_type() {
        return acc_type;
    }

    public void setAcc_type(String acc_type) {
        this.acc_type = acc_type;
    }

    public float getBalance() {
        return balance;
    }

    public void setBalance(float balance) {
        this.balance = balance;
    }


    void deposit(float amt) {
        try {
            if (amt<0)
                throw new NegativeAmountException();
            balance +=amt;

        }
        catch (NegativeAmountException e){
            System.out.println(e);

        }

    }

    void withdraw(float amt) {

    }

}
