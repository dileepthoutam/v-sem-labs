// implement a simple servlet program that will display hello world

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class Main extends HttpServlet {
		public void doGet(HttpServletRequest request, HttpServletResponse response)
						throws ServletException, IOException {
				response.setContentType("text/html");
				PrintWriter out = response.getWriter();
				String title = "Hello World";
				out.println(title);
		}
		
}
