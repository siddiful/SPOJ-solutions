//Author: Siddharth Shukla
//Problem: EIGHTS


import java.util.*;
import java.math.BigInteger;
  
  class HelloWorld{
	
  public static void main(String args[]){
  Scanner s=new Scanner(System.in);
  int t=s.nextInt();
    for(int j=0;j<t;j++){
    BigInteger k=s.nextBigInteger();
    if(k.mod(BigInteger.valueOf(2))==BigInteger.valueOf(0)){
        k=k.divide(BigInteger.valueOf(2));
        BigInteger a=(BigInteger.valueOf(4)).add((BigInteger.valueOf(5)).multiply(k.subtract(BigInteger.valueOf(1))));
        System.out.println(a+"42");
    }
    else{
        BigInteger n=(k.add(BigInteger.valueOf(1))).divide(BigInteger.valueOf(2));
        BigInteger b=(BigInteger.valueOf(1)).add((BigInteger.valueOf(5)).multiply((n.subtract(BigInteger.valueOf(1)))));
        System.out.println(b+"92");
    }
    }
  }
}
