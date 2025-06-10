package 하이테크2025;

import java.util.Scanner;

public class Continue예제 {
	public static void main(String[] args) {
		Scanner aa = new Scanner(System.in);
		//양수의 합만 구하는 코드
		System.out.println("정수 5개 입력");
		int sum = 0;
		
		for (int i=0;i<5;i++) {
			int n = aa.nextInt();
			
			if (n<=0)
				continue;
			else
				sum += n;
		}
		System.out.println("양수의 합은 "+sum);
		aa.close();
		
	}
}
