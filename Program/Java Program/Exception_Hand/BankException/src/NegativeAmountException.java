public class NegativeAmountException extends Exception {
    @Override
    public String toString() {
        return "NegativeAmount to block the operation from being performed";
    }
}

