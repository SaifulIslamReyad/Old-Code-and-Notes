package Others.pack2;

public class Pupil
{
   int age;
   int marks;
   static int x;
   private static int y = 100;

   static int gety() 
  {
    return y;
  }

   static void meaning() 
  {
    System.out.println("pupil=student");
    // ইহা ক্লাসের ফাংশন তাই অবজেক্ট দিয়াও কল করা যাবে আবার ক্লাস দিয়াও
  }

  // কোনো স্টাটিক ভেরিয়াবেল এর গেটার বানাইলে সেট গেটার ফাংশন ও স্টাটিক বানাবো

   public Pupil(int age, int marks) {
    this.age = age;
    this.marks = marks;
  }

   public static void main(String[] args) {
    Pupil.meaning();
    System.out.println(Pupil.x);
    // এইখানে x হলো ক্লাসের একটা প্রোপার্টি ,অবজেক্তের না , তাই ক্লাস বানানোর পর ই
    // ইহার ডাব্বা তৈরি।(অবজেক্টে বানানোর আগেই)
    Pupil.x++; // ১
    Pupil a = new Pupil(5, 6);
    a.x++;// ২
    System.out.println(Pupil.x);
    a.x++; // ৩
    Pupil b = new Pupil(5, 6);
    System.out.println(b.x);
    // a,b দিয়া আমি ক্লাসের প্রোপার্টি রে কল করলাম
    a.meaning();
    // মিন করে a যার অবজেক্ট তার মিনিং ফাংশন কল কর
  }
}
