package Shape;

public class Triangle {
    int base;
   int height;
    public void getData(int i,int j)
    {
        base=i;
        height=j;
    }
    public double area()
    {
        return((1.0/2.0)*(base*height));
    }
}
