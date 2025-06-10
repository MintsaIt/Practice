package sec02.ex02;

import java.sql.Connection;
import java.sql.Date;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

public class MemberDAO {

	private Statement pstmt;
	private Connection con;

	// DB 연결 설정
	private static final String driver = "oracle.jdbc.driver.OracleDriver"; // 오타 수정: 0racle → Oracle
	private static final String url = "jdbc:oracle:thin:@localhost:1521:testdb";
	private static final String user = "scott";
	private static final String pwd = "tiger";

	// 데이터베이스 연결 메서드
	private void connDB() {
	    try {
	        Class.forName(driver);
	        System.out.println("Oracle 드라이버 로딩 성공");
	        con = DriverManager.getConnection(url, user, pwd);
	        System.out.println("Oracle 데이터베이스 연결 성공");
	        pstmt = con.createStatement();
	        System.out.println("Statement 생성 완료");
	    } catch (Exception e) {
	        e.printStackTrace();
	    }
	}

	// 회원 목록 조회 메서드 (부분 구현)		
	public List listMembers() {
		List list = new ArrayList();
		
		try {
			connDB();
			String query = "select * from t_member";
			System.out.println(query);
			
			ResultSet rs = pstmt.executeQuery(query); //데이터셋에 질의한 것을 받는곳
			
			while (rs.next()) { //rs=Result Set. rs에 튜플이 없을때까지 반복
				String id = rs.getString("id");
				String pwd = rs.getString("pwd");
				String name = rs.getString("name");
				String email = rs.getString("email");
				Date joinDate = rs.getDate("joinDate");
				MemberVO vo = new MemberVO();
				vo.setId(id);
				vo.setPwd(pwd);
				vo.setName(name);
				vo.setEmail(email);
				vo.setJoinDate(joinDate);
				list.add(vo);
			}
			rs.close();
			pstmt.close();
			con.close();
		} catch(Exception e)
		{
			e.printStackTrace();
		}
		return list;
		
	}
}