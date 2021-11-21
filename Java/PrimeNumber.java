import java.util.*;
public class PrimeNumber {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)
                c++;
        }
        if(c==2)
            System.out.print(n+" Prime number");
        else    
            System.out.println(n+" is not a Prime number");
    }
}
