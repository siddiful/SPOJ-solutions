//Author: Siddharth Shukla
//Problem: MUL


import java.util.*;
import java.math.BigInteger;
  
  class HelloWorld{
	
  public static void main(String args[]){
  Scanner s=new Scanner(System.in);
    Integer n=s.nextInt();
    for(int i=1;i<=n;i++){
        BigInteger l1=s.nextBigInteger();BigInteger l2=s.nextBigInteger();
        System.out.println(l1.multiply(l2));
    }
  }
}
