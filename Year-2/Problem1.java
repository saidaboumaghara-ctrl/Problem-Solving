import java.util.Scanner;
public class Main
{
 public static void main(String[] args)
 {
     Scanner input=new Scanner(System.in);
     long[] arr=new long[4];
     for(int i=0;i<4;i++)
     {
      arr[i]  =input.nextLong();
     }
     long count=(arr[0]+arr[1]+arr[2]+arr[3])/3;
     for(long answer:arr)
     {
        if(answer!=count)
        {
         System.out.print((count-answer)+" ");
        }
     }


 }


}
