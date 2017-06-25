//Author: Siddharth Shukla
//Problem: JULKA


import java.util.*;
import java.math.BigInteger;
  
  class HelloWorld{
	
  public static void main(String args[]){
  Scanner s=new Scanner(System.in);
    for(int i=0;i<10;i++){
    String N=s.nextLine();
    String P=s.nextLine();
    BigInteger n=new BigInteger(N);BigInteger p=new BigInteger(P);
      BigInteger k=(n.add(p)).divide(BigInteger.valueOf(2));
    BigInteger na=(n.subtract(p)).divide(BigInteger.valueOf(2));
      System.out.println(k);System.out.println(na);
    }
  }
}
