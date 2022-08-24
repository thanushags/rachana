package Shape;

public class Pack_Demo_main {
    public static void main(String[] args) {
        Circle cr=new Circle();
        Square sq=new Square();
        Triangle tr=new Triangle();
        cr.getData(3);
        System.out.println("Area of Circle :"+cr.area());
        sq.getdata(4);
        System.out.println("Area of Square :"+sq.area());
        tr.getData(4,6 );
        System.out.println("Area of Triangle :"+tr.area());
    }
}
