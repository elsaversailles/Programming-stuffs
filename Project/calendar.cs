using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calendar
{
    
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public int month = 0; //this f*cker allows you to access private var to public 5hrs troubleshoot boys
        public int day = 0;
        public int year = 0;
        int a = 2;
        public string wordMonth, wordDay, wordYear, holiday;
       
        private void monthbox_TextChanged_1(object sender, EventArgs e)
        {
            // Create a variable to store the user input
            int userInput;
            // Try to parse the user input as an integer
            bool success = int.TryParse(monthbox.Text, out userInput);

            // If the parsing was successful, use the userInput variable
            if (success)
            {
             //make month public
                
                month = userInput;
                //MessageBox.Show("The month is " + month);//has a tendency to loop the message box
            }
            else
            {
                // Show an error message if the parsing was not successful
              //  MessageBox.Show("Please enter a valid number.");
            }


        }

        private void daybox_TextChanged(object sender, EventArgs e)
        {
            int userInput;

            // Try to parse the user input as an integer
            bool success = int.TryParse(daybox.Text, out userInput);

            // If the parsing was successful, use the userInput variable
            if (success)
            {
                day = userInput;

                //  MessageBox.Show("The day is " + day);//has a tendency to loop the message box
            }
            else
            {
                // Show an error message if the parsing was not successful
                MessageBox.Show("Please enter a valid number.");
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)//yearbox 
        {
            int userInput;

            // Try to parse the user input as an integer
            bool success = int.TryParse(textBox1.Text, out userInput);

            // If the parsing was successful, use the userInput variable
            if (success)
            {
                year = userInput;
            }
            else
            {
                // Show an error message if the parsing was not successful
                MessageBox.Show("Please enter a valid number.");
            }

        }

        private void submitButton_Click(object sender, EventArgs e)
        {
            //import public var and reassign it as private var
            int valueOfMonth = month;
            int valueOfDay = day;
            int valueOfYear = year;

            //refactor to switch case
            if (month == 1)
            {
                wordMonth = "January";
            }

            else if (month == 2)
            {
                wordMonth = "February";
            }

            else if (month == 3)
            {
                wordMonth = "March";
            }
            else if (month == 4)
            {
                wordMonth = "April";
            }
            else if (month == 5)
            {
                wordMonth = "May";
            }
            else if (month == 6)
            {
                wordMonth = "June";
            }
            else if (month == 7)
            {
                wordMonth = "July";
            }
            else if (month == 8)
            {
                wordMonth = "August";
            }
            else if (month == 9)
            {
                wordMonth = "September";
            }
            else if (month == 10)
            {
                wordMonth = "October";
            }
            else if (month == 11)
            {
                wordMonth = "November";
            }
            else if (month == 12)
            {
                wordMonth = "December";
            }
            else
            {
                wordMonth = "Invalid Input";
            }
            // day

            if (day == 1)
            {
                wordDay = "first";
            }
            else if (day == 2)
            {
                wordDay = "second";
            }
            else if (day == 3)
            {
                wordDay = "third";
            }
            else if (day == 4)
            {
                wordDay = "fourth";
            }
            else if (day == 5)
            {
                wordDay = "fifth";
            }
            else if (day == 6)
            {
                wordDay = "sixth";
            }
            else if (day == 7)
            {
                wordDay = "seventh";
            }
            else if (day == 8)
            {
                wordDay = "eight";
            }
            else if (day == 9)
            {
                wordDay = "ninth";
            }
            else if (day == 10)
            {
                wordDay = "tenth";
            }
            else if (day == 11)
            {
                wordDay = "eleventh";
            }
            else if (day == 12)
            {
                wordDay = "twelfth";
            }
            else if (day == 13)
            {
                wordDay = "thirteenth";
            }
            else if (day == 14)
            {
                wordDay = "fourteenth";
            }
            else if (day == 15)
            {
                wordDay = "fifteenth";
            }
            else if (day == 16)
            {
                wordDay = "sixteenth";
            }
            else if (day == 17)
            {
                wordDay = "seventeenth";
            }
            else if (day == 18)
            {
                wordDay = "eighteenth";
            }
            else if (day == 19)
            {
                wordDay = "nineteenth";
            }
            else if (day == 20)
            {
                wordDay = "twentieth";
            }
            else if (day == 21)
            {
                wordDay = "twentyfirst";
            }
            else if (day == 22)
            {
                wordDay = "twentysecond";
            }
            else if (day == 23)
            {
                wordDay = "twentythird";
            }
            else if (day == 24)
            {
                wordDay = "twentyfourth";
            }
            else if (day == 25)
            {
                wordDay = "twentyfifth";
            }
            else if (day == 26)
            {
                wordDay = "twentysixth";
            }
            else if (day == 27)
            {
                wordDay = "twentyseventh";
            }
            else if (day == 28)
            {
                wordDay = "twentyeight";
            }
            else if (day == 29)
            {
                wordDay = "twentynineth";
            }
            else if (day == 30)
            {
                wordDay = "thirtieth";
            }
            else if (day == 31)
            {
                wordDay = "thirtyfirst";
            }
            else
            {
                wordDay = "Invalid day";
            }
            //year

            if (year == 1971)
            {
                wordYear = "nineteen seventy one";
            }
            else if (year == 1972)
            {
                wordYear = "nineteen seventy two";
            }
            else if (year == 1973)
            {
                wordYear = "nineteen seventy three";
            }
            else if (year == 1974)
            {
                wordYear = "nineteen seventy four";
            }
            else if (year == 1975)
            {
                wordYear = "nineteen seventy five";
            }
            else if (year == 1976)
            {
                wordYear = "nineteen seventy six";
            }
            else if (year == 1977)
            {
                wordYear = "nineteen seventy seven";
            }
            else if (year == 1978)
            {
                wordYear = "nineteen seventy eight";
            }
            else if (year == 1979)
            {
                wordYear = "nineteen seventy nine";
            }
            else if (year == 1980)
            {
                wordYear = "nineteen eighty";
            }
            else if (year == 1981)
            {
                wordYear = "nineteen eighty one";
            }
            else if (year == 1982)
            {
                wordYear = "nineteen eighty two";
            }
            else if (year == 1983)
            {
                wordYear = "nineteen eighty three";
            }
            else if (year == 1984)
            {
                wordYear = "nineteen eighty four";
            }
            else if (year == 1985)
            {
                wordYear = "nineteen eighty five";
            }
            else if (year == 1986)
            {
                wordYear = "nineteen eighty six";
            }
            else if (year == 1987)
            {
                wordYear = "nineteen eighty seven";
            }
            else if (year == 1988)
            {
                wordYear = "nineteen eighty eight";
            }
            else if (year == 1989)
            {
                wordYear = "nineteen eighty nine";
            }
            else if (year == 1990)
            {
                wordYear = "nineteen ninety";
            }
            else if (year == 1991)
            {
                wordYear = "nineteen ninety one";
            }
            else if (year == 1992)
            {
                wordYear = "nineteen ninety two";
            }
            else if (year == 1993)
            {
                wordYear = "nineteen ninety three";
            }
            else if (year == 1994)
            {
                wordYear = "nineteen ninety four";
            }
            else if  (year == 1995)
            {
                wordYear = "nineteen ninety five";
            }
            else if (year == 1996)
            {
                wordYear = "nineteen ninety six";
            }
            else if (year == 1997)
            {
                wordYear = "nineteen ninety seven";
            }
            else if (year == 1998)
            {
                wordYear = "nineteen ninety eight";
            }
            else if (year == 1999)
            {
                wordYear = "nineteen ninety nine";
            }
            else if (year == 2000)
            {
                wordYear = "two thousand";
            }
            else if (year == 2001)
            {
                wordYear = "two thousand one";
            }
            else if (year == 2002)
            {
                wordYear = "two thousand two";
            }
            else if (year == 2003)
            {
                wordYear = "two thousand three";
            }
            else if (year == 2004)
            {
                wordYear = "two thousand four";
            }
            else if (year == 2005)
            {
                wordYear = "two thousand five";
            }
            else if (year == 2006)
            {
                wordYear = "two thousand six";
            }
            else if (year == 2007)
            {
                wordYear = "two thousand seven";
            }
            else if (year == 2008)
            {
                wordYear = "two thousand eight";
            }
            else if (year == 2009)
            {
                wordYear = "two thousand nine";
            }
            else if (year == 2010)
            {
                wordYear = "two thousand ten";
            }
            else if (year == 2011)
            {
                wordYear = "two thousand eleven";
            }
            else if (year == 2012)
            {
                wordYear = "two thousand twelve";
            }
            else if (year == 2013)
            {
                wordYear = "two thousand thirteen";
            }
            else if (year == 2014)
            {
                wordYear = "two thousand fourteen";
            }
            else if (year == 2015)
            {
                wordYear = "two thousand fifteen";
            }
            else if (year == 2016)
            {
                wordYear = "two thousand sixteen";
            }
            else if (year == 2017)
            {
                wordYear = "two thousand seventeen";
            }
            else if (year == 2018)
            {
                wordYear = "two thousand eighteen";
            }
            else if (year == 2019)
            {
                wordYear = "two thousand nineteen";
            }
            else if (year == 2020)
            {
                wordYear = "two thousand twenty";
            }
            else if (year == 2021)
            {
                wordYear = "two thousand twenty one";
            }
            else if (year == 2022)
            {
                wordYear = "two thousand twenty two";
            }
            else if (year == 2023)
            {
                wordYear = "two thousand twenty three";
            }

            if (month == 2)
            { //if the user insert 30 or more on FEBRUARY
                if (day >= 30)
                {
                    MessageBox.Show("Error day for February") ;
                    
                }
            }

            else if (month == 4 || month == 6 || month == 9 || month == 11)
            { 
                if (day >= 31)
                { //June, September, April check
                    MessageBox.Show("Error month day");
                }
            }
            else if (year <= 1969 || year >= 2024)
            { //check if the user inputs out of range year
                MessageBox.Show("Error year"); 
            }

            if (month == 1 && day == 1)
            {
                holiday = "NewYear";
            }
            else if (month == 4 && day == 6)
            {
                holiday = "Maundy thursday";
            }
            else if (month == 4 && day == 10)
            {
                holiday = "Day of Valor";
            }
            else if (month == 5 && day == 1)
            {
                holiday = "Labor day";
            }
            else if (month == 6 && day == 12)
            {
                holiday = "Indepence day";
            }
            else if (month == 12 && day == 24)
            {
                holiday = "Christmas eve";
            }
            else if (month == 12 && day == 25) 
            {
                holiday = "Christmas day";
            }
            else if (month == 12 && day == 31)
            {
                holiday = "Last day of year";
            }
            else
            {
                holiday = "there's no holiday";
            }


            // MessageBox.Show("Month: " + valueOfMonth + " Day: " + valueOfDay + " Year: " + valueOfYear);
            //string test = "The month is " + wordMonth + "day " + day + "Year: " + year ;
            monthLabel.Text = wordMonth + " " + wordDay + ", " + wordYear + " " + holiday;
            //we need to export the private assigned valuess of 3 var to public or point them here
        }








        

        private void header_Click(object sender, EventArgs e)
        {

        }

        private void monthLabel_Click(object sender, EventArgs e)
        {
            
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }



        private void dayLabel_Click(object sender, EventArgs e)
        {

        }


    }
}


Dictionary<int, string> yearWords = new Dictionary<int, string>()
{
    {1971, "nineteen seventy one"},
    {1972, "nineteen seventy two"},
    {1973, "nineteen seventy three"},
    {1974, "nineteen seventy four"},
    {1975, "nineteen seventy five"},
    {1976, "nineteen seventy six"},
    {1977, "nineteen seventy seven"},
    {1978, "nineteen seventy eight"},
    {1979, "nineteen seventy nine"},
    {1980, "nineteen eighty"},
    {1981, "nineteen eighty one"},
    {1982, "nineteen eighty two"},
    {1983, "nineteen eighty three"},
    {1984, "nineteen eighty four"},
    {1985, "nineteen eighty five"},
    {1986, "nineteen eighty six"},
    {1987, "nineteen eighty seven"},
    {1988, "nineteen eighty eight"},
    {1989, "nineteen eighty nine"},
    {1990, "nineteen ninety"},
    {1991, "nineteen ninety one"},
    {1992, "nineteen ninety two"},
    {1993, "nineteen ninety three"},
    {1994, "nineteen ninety four"},
    {1995, "nineteen ninety five"},
    {1996, "nineteen ninety six"},
    {1997, "nineteen ninety seven"},
    {1998, "nineteen ninety eight"},
    {1999, "nineteen ninety nine"},
    {2000, "two thousand"},
    {2001, "two thousand one"},
    {2002, "two thousand two"},
    {2003, "two thousand three"},
    {2004, "two thousand four"},
    {2005, "two thousand five"},
    {2006, "two thousand six"},
    {2007, "two thousand seven"},
    {2008, "two thousand eight"},
    {2009, "two thousand nine"},
    {2010, "two thousand ten"},
    {2011, "two thousand eleven"},
    {2012, "two thousand twelve"},
    {2013, "two thousand thirteen"},
    {2014, "two thousand fourteen"},
    {2015, "two thousand fifteen"},
    {2016, "two thousand sixteen"},
    {2017, "two thousand seventeen"},
    {2018, "two thousand eighteen"},
    {2019, "two thousand nineteen"},
    {2020, "two thousand twenty"},
    {2021, "two thousand twenty one"},
    {2022, "two thousand twenty two"},
    {2023, "two thousand twenty three"},
    {2024, "two thousand twenty four"},
    {2025, "two thousand twenty five"},
    {2026, "two thousand twenty six"},
    {2027, "two thousand twenty seven"},
    {2028, "two thousand twenty eight"},

};

string wordYear;
if (yearWords.TryGetValue(year, out wordYear))
{
    Console.WriteLine(wordYear);
}
else
{
    Console.WriteLine("Year not found in dictionary.");
}

