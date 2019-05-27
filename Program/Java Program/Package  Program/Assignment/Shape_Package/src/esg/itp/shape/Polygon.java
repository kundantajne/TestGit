package esg.itp.shape;

public interface Polygon {
    float area=0;
    float perimeter=0;

    abstract  void calcArea( );
    void calcPeri( );
    void display( );
}
