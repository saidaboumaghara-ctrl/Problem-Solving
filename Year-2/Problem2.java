import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections; 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int X = input.nextInt(); // عدد الحالات


        int[] Counter = new int[X];

        for (int o = 0; o < X; o++) {
            ArrayList<Integer> numbers = new ArrayList<>();

            for (int i = 0; i < 4; i++) {
                int val = input.nextInt();
                numbers.add(val);
            }

            int digit = numbers.get(0);


            Collections.sort(numbers);

            int index = numbers.indexOf(digit);
            int count = 3 - index;


            Counter[o] = count;
        }


        for (int i = 0; i < X; i++) {
            System.out.println(Counter[i]);
        }
    }
}
