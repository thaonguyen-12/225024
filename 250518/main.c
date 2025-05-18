import java.util.Scanner;

public class bachai {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

      
        System.out.print("nhap a: ");
        double a = scanner.nextDouble();

        System.out.print("nhap b: ");
        double b = scanner.nextDouble();

        System.out.print("nhap c: ");
        double c = scanner.nextDouble();

    
        if (a == 0) {
            System.out.println("khong phai pt bac 2");
        }
        else {
            
            double delta = b * b - 4 * a * c;

          
            if (delta > 0) {
              
                double x1 = (-b + Math.sqrt(delta)) / (2 * a);
                double x2 = (-b - Math.sqrt(delta)) / (2 * a);
                System.out.println("pt co 2 nghiem phan biet:");
                System.out.println("x1 = " + x1);
                System.out.println("x2 = " + x2);
            }
            else if (delta == 0) {
            
                double x = -b / (2 * a);
                System.out.println("pt co nghiem kep:");
                System.out.println("x = " + x);
            }
            else {
              
                System.out.println("pt vo nghiem:");
            }
        }

        scanner.close();
    }
}