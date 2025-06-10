package 하이테크2025;

public class Circle클래스의_객체생성_및_활용 {
 int radius; //원으 반지름 필드
 String name; //원의 이름 필드
 
public Circle클래스의_객체생성_및_활용() {} //원의 생성자

public double getArea() { //원의 면적 계산 메소드
	return 3.14*radius*radius;
	}

public static void main(String[] args) {
	Circle클래스의_객체생성_및_활용 pizza;
	pizza = new Circle클래스의_객체생성_및_활용(); //Circle객체 생성
	pizza.radius = 10;
	pizza.name="자바피자";
	double area = pizza.getArea();
	System.out.println(pizza.name + "의 면적은 " + area);
	
	Circle클래스의_객체생성_및_활용 donut = new Circle클래스의_객체생성_및_활용();
	donut.radius = 2;
	donut.name="자바도넛";
	area = donut.getArea();
	System.out.println(donut.name + "의 면적은 " + area);
	}
}
