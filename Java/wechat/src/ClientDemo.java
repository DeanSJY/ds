import java.io.*;
import java.sql.*;



public class ClientDemo {
	public static String userName;
	public static String passWord;
	public static String choice;
	public static String welcome;
	private static Object DBmanager;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
System.out.println("*****************∫º÷›–°œ…≈Æ*****************");
System.out.println("please choose which function u would like to do£ø ");
System.out.println("1:login *********2£∫register");
try{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	choice=br.readLine();
	
}catch(IOException e){}

switch(choice){
case "1": welcome="U have enter the login function";break;
case "2":welcome="U have enter the regisation function";break;
default :welcome="please enter the correct number,ok???";break;
}
System.out.println(welcome);




if(choice =="1"){
	User client = new User();	
System.out.println("please enter your USERNAME");
try{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	userName=br.readLine();	
}catch(IOException e){}

System.out.println("please enter your PASSWORD");
try{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	passWord=br.readLine();	
}catch(IOException e){}
	
	
	if(client.userName.isEmpty()){
		System.out.println("USERNAME CANNOT BE EMPTY!!!!!");		
	}if(client.passWord.isEmpty()){
		System.out.println("PASSWORD CANNOT BE EMPTY!!!!!");
	}if(!DBmanager.exists(client.userName)){
		System.out.println("THIS USER IS NOT EXISTED!!!!!");
	}if(!DBmanager.check(client.userName,client.passWord)){
		System.out.println("THIS PASSWORD NOT MATCHES YOUR USERNAME!!!!!");
	}else
		System.out.println("Hello"+ userName +"\n WELCOME U HAVE LOGIN SUCCESS!!");
	}




	else if (choice =="2"){
	System.out.println("please enter your USERNAME");
	try{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		userName=br.readLine();	
	}catch(IOException e){}

	System.out.println("please enter your PASSWORD");
	try{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		passWord=br.readLine();	
	}catch(IOException e){}
}

else{
		System.out.println("PLEASE ENTER THE CORRECT NUMBER!!!!!!");
	}

	}
	

}
