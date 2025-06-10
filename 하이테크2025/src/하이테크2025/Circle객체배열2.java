package 하이테크2025;

public class Circle객체배열2 {
	public static void main (String[] args) {
		Circle객체배열 [] c;
		c=new Circle객체배열[5];
		
		for (int i=0;i<c.length; i++)
			c[i] = new Circle객체배열(i);
		
		for(int i=0; i<c.length; i++)
			System.out.print((int)(c[i].getArea()) +" ");
			
	}
}