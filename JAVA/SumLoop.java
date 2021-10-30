import java.util.Scanner;
public class SumLoop {
    public static void main(String[] args){
        int sum, n;
        sum = 0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(int i = 1; i < n+1; i++){
            sum = sum + i;
        }
        System.out.println(sum);
        sc.close();
    }
}
