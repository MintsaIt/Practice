package sec02.ex02;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/memberList")
public class MemberServlet extends HttpServlet {

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("utf-8"); 	
		response.setContentType("text/html;charset=utf-8");
	    PrintWriter out = response.getWriter();
	        
	    MemberDAO dao = new MemberDAO(); // SQL을 이용해 조회된 MemberDAO 객체를 생성합니다.
	    List memberList = dao.listMembers(); // listMembers() 메소드로 회원 정보를 조회합니다.
	    request.setAttribute("membersList", memberList);
	        
	    RequestDispatcher dispatch = request.getRequestDispatcher("viewMembers");
	    dispatch.forward(request, response);
	        
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
