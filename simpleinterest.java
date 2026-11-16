import java.util.*;
 // find the simple interest of 
 // x rupees over y years at z interest
 public class Main {
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     int  x = sc.nextInt();
     int  y = sc.nextInt();
     int z = sc.nextInt();
     // proceess the input
     int ans = x * y * z / 100;
     //display output 
     System.out.print(ans);
    }
}
