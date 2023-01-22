using System;
using System.Collections.Generic;

class Number
{
    public int value;
    public string name;
}

class Program
{
    static List<Number> ones = new List<Number> {
        new Number { value = 1, name = "one" },
        new Number { value = 2, name = "two" },
        new Number { value = 3, name = "three" },
        new Number { value = 4, name = "four" },
        new Number { value = 5, name = "five" },
        new Number { value = 6, name = "six" },
        new Number { value = 7, name = "seven" },
        new Number { value = 8, name = "eight" },
        new Number { value = 9, name = "nine" }
    };

    static List<Number> tens = new List<Number> {
        new Number { value = 2, name = "twenty" },
        new Number { value = 3, name = "thirty" },
        new Number { value = 4, name = "forty" },
        new Number { value = 5, name = "fifty" },
        new Number { value = 6, name = "sixty" },
        new Number { value = 7, name = "seventy" },
        new Number { value = 8, name = "eighty" },
        new Number { value = 9, name = "ninety" }
    };

    static List<Number> teens = new List<Number> {
        new Number { value = 10, name = "ten" },
        new Number { value = 11, name = "eleven" },
                new Number { value = 12, name = "twelve" },
        new Number { value = 13, name = "thirteen" },
        new Number { value = 14, name = "fourteen" },
        new Number { value = 15, name = "fifteen" },
        new Number { value = 16, name = "sixteen" },
        new Number { value = 17, name = "seventeen" },
        new Number { value = 18, name = "eighteen" },
        new Number { value = 19, name = "nineteen" }
    };

    static bool IsPrime(int num)
    {
        if (num <= 1)
            return false;
        if (num <= 3)
            return true;
        if (num % 2 == 0 || num % 3 == 0)
            return false;
        for (int i = 5; i * i <= num; i = i + 6)
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        return true;
    }

    static string Convert(int num)
    {
        if (num < 10)
        {
            var number = ones.Find(x => x.value == num);
            return number.name;
        }
        else if (num < 20)
        {
            var number = teens.Find(x => x.value == num);
            return number.name;
        }
        else if (num < 100)
        {
            string result = "";
            var number = tens.Find(x => x.value == num / 10);
            result += number.name;
            number = ones.Find(x => x.value == num % 10);
            result += " " + number.name;
            return result;
        }
        else if (num < 1000)
        {
            string result = "";
            var number = ones.Find(x => x.value == num / 100);
            result += number.name +             result + " hundred ";
            result += Convert(num % 100);
            return result;
        }
        else
        {
            string result = "";
            var number = ones.Find(x => x.value == num / 1000);
            result += number.name + " thousand ";
            result += Convert(num % 1000);
            return result;
        }
    }

static void Main()
{
    int num;
    Console.WriteLine("Enter a number between 1 and 9999: ");
    while (!int.TryParse(Console.ReadLine(), out num) || num < 1 || num > 9999)
    {
        Console.WriteLine("Invalid input. Please enter a number between 1 and 9999: ");
    }

    if (IsPrime(num))
    {
        Console.WriteLine("\n{0} is a prime number and in words is {1}", num, Convert(num));
    }
    else
    {
        Console.WriteLine("\n{0} is not a prime number", num);
    }

    Console.WriteLine("\nPress any key to exit.");
    Console.ReadKey();
}
}
