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

        public int month = 0; //allows you to access private var to public 5hrs troubleshoot boys
        public int day = 0;
        public int year = 0;
        public string wordMonth, wordDay, wordYear, holiday;
        
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
            }
            else
            {
                // Show an error message if the parsing was not successful
              MessageBox.Show("Please enter a valid Month.");
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
            
Dictionary<int, string> monthWords = new Dictionary<int, string>()
{
    {1, "January"},
    {2, "February"},
    {3, "March"},
    {4, "April"},
    {5, "May"},
    {6, "June"},
    {7, "July"},
    {8, "August"},
    {9, "September"},
    {10, "October"},
    {11, "November"},
    {12, "December"}
};
            string wordMonth;
            if (monthWords.TryGetValue(month, out wordMonth))
            {
                wordMonth = monthWords[month];
            }
            else
            {
                MessageBox.Show("Error Month");
            }

            // Day
Dictionary<int, string> dayWords = new Dictionary<int, string>()
{
    {1, "first"},
    {2, "second"},
    {3, "third"},
    {4, "fourth"},
    {5, "fifth"},
    {6, "sixth"},
    {7, "seventh"},
    {8, "eighth"},
    {9, "ninth"},
    {10, "tenth"},
    {11, "eleventh"},
    {12, "twelfth"},
    {13, "thirteenth"},
    {14, "fourteenth"},
    {15, "fifteenth"},
    {16, "sixteenth"},
    {17, "seventeenth"},
    {18, "eighteenth"},
    {19, "nineteenth"},
    {20, "twentieth"},
    {21, "twenty first"},
    {22, "twenty second"},
    {23, "twenty third"},
    {24, "twenty fourth"},
    {25, "twenty fifth"},
    {26, "twenty sixth"},
    {27, "twenty seventh"},
    {28, "twenty eighth"},
    {29, "twenty ninth"},
    {30, "thirtieth"},
    {31, "thirty first"}
};
            string wordDay;
            if (dayWords.TryGetValue(day, out wordDay))
            {
                wordDay = dayWords[day];
            }
            else
            {
                MessageBox.Show("Error Day");
            }
            //year

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
                wordYear = yearWords[year];
            }
            else
            {
                Console.Write("Error Year");
            }

            if (month == 2)
            { //if the user insert 30 or more on FEBRUARY
                if (day >= 30)
                {
                    MessageBox.Show("Error day for February");

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

            monthLabel.Text = wordMonth + " " + wordDay + ", " + wordYear + " " + holiday;
        
        }

    }
}
