
public class User {
	
public String userName;
public String passWord;
private int userId;

public int getId(){
	return userId;
}

public void setId(int userId){
	this.userId=userId;
}

public String getName(){
	return userName;
}

public void setName(String userName){
	this.userName=userName;	
}
public String getPwd(){
	return passWord;
}

public void setPwd(String passWord){
	this.passWord=passWord;
}
}