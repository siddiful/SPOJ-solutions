//Author: Siddharth Shukla
//Problem: FCTRL2


import java.util.*;
import java.math.BigInteger;
  
  class HelloWorld{
	
  public static void main(String args[]){
  Scanner s=new Scanner(System.in);
  int t=s.nextInt();
    for(int j=0;j<t;j++){
    int N=s.nextInt();
    BigInteger fac = BigInteger.ONE;
     for (int i = 2; i <= N; i++)
fac = fac.multiply(BigInteger.valueOf(i));
System.out.println(fac);
    }
  }
}
