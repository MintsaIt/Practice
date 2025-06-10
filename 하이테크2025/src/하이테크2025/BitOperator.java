package 하이테크2025;

public class BitOperator{
	public static void main(String[] args) {
		short a = (short)0x55ff;
		short b =(short)0x00ff;
		
	//비트 논리 연산
	System.out.println("[비트 연산 결과]"); //println은 각 결과를 줄 바꿈을 통해 출력합니다.
	System.out.printf("%04x\n", (short)(a&b));
	System.out.printf("%04x\n", (short)(a|b));
	}
}