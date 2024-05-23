package Others.pack;
//ফাইলের নাম হবে যেই ক্লাসের মধ্যে মেইন ফাংশন আছে
//মেইন ফাঙ্গশন যেই ক্লাসের উহা পাবলিক করা যেতে পারে ,তবে ঐটা বাদে অনয ক্লাস পাবলিক হবেনা (একই ফাইলে)
//কোনো ক্লাস প্রাইভেট আর প্রোটেক্টেড হবেনা যদিনা উহা ইনার ক্লাস হয়
public class Main 
{
    // public = all package by importing //import packagename.classname;
    // default = same package
    // private = same class
    // যদি Student class --int roll আগে private লাগাই তবে এই ক্লাস বাদে অন্য কোথাও
    // ব্যবহার করা যাবেনা রোল
    // যদি Student class এর আগে private লাগাই তবে এই ক্লাস বাদে অন্য কোথাও ব্যবহার
    // করা যাবেনা রোল
    // যদি Student class --int roll আগে কিছু না লাগাই(default) তবে এই প্যাকেজ বাদে
    // অন্য কোথাও (a.roll) ব্যবহার করা যাবেনা রোল(import pack.student করলেও)
    // মানে যদি এই ক্লাস অনয প্যাকেজে ব্যবহার করতে হয় তবে সব কিছু public রাখা লাগবে
    // যদি Student class --int roll আগে private লাগাই তবে এই ক্লাস বাদে অন্য কোথাও
    // ব্যবহার করা যাবেনা রোল
    // public লাগাইলে সেম প্রোজেক্টের সব প্যাকেজে (ইম্পোর্ট করার পর) ইউজ করা যাবে
    public static class Student // এইখানে পাবলিক লেখা যাবেনা
    {
        // মেইন ফাংশনের ভিতরে লেখলে public static না লেখলেও হতো কারন একই মেইন ক্লাসের
        // মধ্যে আছি
        // কিন্তু তখন মেইন ফাংশনের ভিতরে বানানো ক্লাস অনয কোনো ইউজার ডিফাইন্ড ফাংশনে পাস
        // করা যেত না
        
        String name;
        // created a new data type named student
        // just a blueprint ...no memory located
        // created outside main to use it also in other methods
        int roll;
        // যদি রোলের আগে private লাগাই তবে এই ক্লাস বাদে অন্য কোথাও ব্যবহার করা যাবেনা
        // রোল
    }

    public static void func(Student x) 
    {
        // স্টুডেন্ট ডেটা টাইপের একটা ডাটা রিসিভ করতাসে
        // class is passed by reference
        System.out.println(x.roll);
        return;
    }

    public static void changestuname(Student x) 
    {
        x.name = "Saiful";
        // pass by ref
    }

    public static void main(String[] args) 
    {
        
        

        Student riad = new Student();
        
       
        riad.name = "Saif";
        riad.roll = 14;
        // allocated a memory location
        System.out.println(riad.name);
        func(riad);
        changestuname(riad);
        // অন্য ফাইলে car নামে ক্লাস বানাইসি সেম package
        Car bnw = new Car();
        bnw.name = "B&W";
        System.out.println(bnw.name);
        // প্যাকেজ আলাদা হইলে (import pack.Car;) দেওইয়া লাগতো
        // System.out.println(bnw.price); এইখানে error দেখাবে কারন price প্রাইভেট
        System.out.println(bnw.getprice());// getter
        bnw.setprice(25000);// setter
        System.out.println(bnw.getprice());

        Fruit apple = new Fruit("Apple", 50, "bad");
        System.out.println(apple.name);
        System.out.println(apple.taste);
        Fruit goava = new Fruit("Goava", 23, "good");
        System.out.println(goava.taste);
        goava.taste = "bad";
        System.out.println(goava.taste);
        System.out.println(goava.bangla);
        System.out.println(apple.bangla);
        System.out.println(apple.toString());
        System.out.println(apple);

    }
    // string এর default value হচ্ছে "null"
    // int এর default value হচ্ছে "0"
    // float এর default value হচ্ছে "0.0"
}
