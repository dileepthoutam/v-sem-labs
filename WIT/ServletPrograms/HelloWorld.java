// servlet program to display "Hello World"

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class HelloWorld extends HttpServlet {
	public void doGet(HttpServletRequest request,
					  HttpServletResponse response)
		throws IOException, ServletException
	{
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		String title = "Hello World";
		out.println(title);
	}
}
