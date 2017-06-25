//Author: Siddharth Shukla
//Problem: SOLDIERS


import java.util.*;
import java.math.BigInteger;
  
  class HelloWorld{
	
  public static void main(String args[]){
  Scanner s=new Scanner(System.in);
    Integer t=s.nextInt();
    for(int i=1;i<=t;i++){
        BigInteger m=s.nextBigInteger();BigInteger n=s.nextBigInteger();
        if(m.compareTo(BigInteger.ONE)==0 && n.compareTo(BigInteger.ONE)==0)
        System.out.println("1");
        else if(m.compareTo(BigInteger.ONE)==0 && n.compareTo(BigInteger.ONE)!=0)
        System.out.println(n);
        else if(m.compareTo(BigInteger.ONE)!=0 && n.compareTo(BigInteger.ONE)==0)
        System.out.println(m);
        else{
            BigInteger mn,mm;
            if((m.mod(BigInteger.valueOf(2)).compareTo(BigInteger.ONE))==0)mm=(m.divide(BigInteger.valueOf(2))).add(BigInteger.ONE);
            else mm=m.divide(BigInteger.valueOf(2));
            if((n.mod(BigInteger.valueOf(2)).compareTo(BigInteger.ONE))==0)mn=(n.divide(BigInteger.valueOf(2))).add(BigInteger.ONE);
            else mn=n.divide(BigInteger.valueOf(2));
            System.out.println((m.multiply(mn)).max(n.multiply(mm)));
        }
    }
  }
}
