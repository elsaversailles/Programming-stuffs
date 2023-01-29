using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
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
            MessageBox.Show("Month: " + valueOfMonth + " Day: " + valueOfDay + " Year: " + valueOfYear);
            //we need to export the private assigned valuess of 3 var to public or point them here
        }

        private void header_Click(object sender, EventArgs e)
        {

        }

        private void monthLabel_Click(object sender, EventArgs e)
        {

        }

        private void dayLabelOutput_Click(object sender, EventArgs e)
        {

        }

        private void yearLabelOutput_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void holidayOutput_Click(object sender, EventArgs e)
        {

        }

        private void leapYearOutput_Click(object sender, EventArgs e)
        {

        }

        private void dayLabel_Click(object sender, EventArgs e)
        {

        }


    }
}
