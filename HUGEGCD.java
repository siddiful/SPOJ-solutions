import java.util.*;
import java.math.BigInteger;
  class HelloWorld{	
  public static void main(String args[]){
  Scanner s=new Scanner(System.in);
  BigInteger A,B,C;Integer i,N,M,j,k;
  A=BigInteger.valueOf(1);B=BigInteger.valueOf(1);
        N=s.nextInt();
        for(i=1;i<=N;i++){
            C=s.nextBigInteger();A=A.multiply(C);
        }
        M=s.nextInt();
        for(i=1;i<=M;i++){
            C=s.nextBigInteger();B=B.multiply(C);
        }
        C=A.gcd(B);//System.out.println(A+" "+B);
        if(C.compareTo(BigInteger.valueOf(1000000000))==-1)
        System.out.println(C);
        else{
            String s1=C.toString();
            j=s1.length()-9;
            System.out.println(s1.substring(j,j+9));
        }
    }
  }