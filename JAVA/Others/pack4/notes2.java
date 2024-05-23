package Others.pack4;
import java.util.*;


class notes2
{
  public static void main(String args[])
  {
      String name= "reyad";
      System.out.println(name);
      int arr[]= {1,2,3,4,5};
      int brr[]= new int[5];
      @SuppressWarnings("resource")
      Scanner sc = new Scanner(System.in);
      for(int i=0;i<5;i++)
      {
          brr[i] = sc.nextInt();
      }
      System.out.println(arr[0]);
      for(int i=0;i<5;i++)
      {
          System.out.println(brr[i]);
      }
      
      
     
                      
   
  }
}