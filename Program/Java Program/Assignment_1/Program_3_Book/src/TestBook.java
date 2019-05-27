public class TestBook {
    book boo;
    void createBook(String t,double p)
    {
        boo.setBook_title(t);
        boo.setBook_price(p);
    }

    void showBook()
    {
        System.out.println("Book Title : "+boo.getBook_title()+"Book Price is :"+boo.getBook_price());
    }
}
