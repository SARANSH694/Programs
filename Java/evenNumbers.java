import java.util.*;
public class evenNumbers {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Input the number n: ");
        int n = sc.nextInt();
        
        for(int i=2;i<=n;i++){
            if(i % 2 == 0)
                System.out.println(i);
        }
    }
}
