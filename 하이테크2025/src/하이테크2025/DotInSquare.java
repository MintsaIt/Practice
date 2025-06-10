package 하이테크2025;

import java.util.Scanner;

public class DotInSquare {
	public static void main (String[] args) {
		Scanner bobo = new Scanner(System.in);
		
		System.out.print("윗변의 크기를 입력하시오 :");
		int a = bobo.nextInt();
		
		System.out.print("옆변의 크기를 입력하시오 :");
		int b = bobo.nextInt();
		
		System.out.print("점의 위치를 X와 y순으로 입력하시오 :");
		int x = bobo.nextInt();
		int y = bobo.nextInt();
		
		bobo.close();
		
		if (x<a && y<b) { //and는 이렇게 두번 쓰는구나
			System.out.println("점은 사각형 안에 있습니다.");}
		
		else {
			System.out.println("점은 사각형 바깥에 있습니다.");}
		
	}

}
