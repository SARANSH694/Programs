import java.util.*;
public class calculator {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Input the two numbers-");
        int a =sc.nextInt();
        int b =sc.nextInt();
        System.out.println("Input the choice-\n1-Addition\n2-Substraction\n3-Multiplication\n4-Division\n5-Remainder");
        int n =sc.nextInt();
        int calc=0;
        if(n==1){
            calc= a+b;
            
        }else if(n==2){
            calc= a-b;
           
        }else if(n==3){
            calc=a*b;
            
        }else if(n==4){
            calc=a/b;
           
        }else if(n==5){
            calc=a%b;
            
        }else{
            System.out.println("Wrong choice");
        }
        System.out.println("Calculated result : "+ calc);
    }
}
