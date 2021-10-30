import java.util.Scanner;

public class CountStars {
    public static void main(String[] args){
        int n=1;
        int count = 0;
        Scanner sc = new Scanner(System.in);
        while(true){
            if(n == 0){
                break;
            }
            
            n = sc.nextInt();
            
            if(n == 5){
                count += 1;
            }
        }
        sc.close();

        System.out.println(count);
    }
}
