import java.util.Scanner;
import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int count=0;
        count=input.nextInt();
        ArrayList<String> arr=new ArrayList<>();
        for(int i=0;i<count;i++){
            int x, y, z;
            x = input.nextInt();
            y = input.nextInt();
            z = input.nextInt();
            if (x + y == z)
               arr.add("+");
            else if (x - y == z)
               arr.add("-");
        }
        for (String cout: arr) {
            System.out.println(cout);
        }


        input.close();
    }
}
