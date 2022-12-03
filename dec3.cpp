//string manipulation

#include<iostream>
using namespace std;
int main()
{
    string lname="Versailles";
    string fname="Elsa ";
    string fullname=lname+fname;
    /*cout<<"String of " << lname << " is "<< lname.append(fname)<<" " <<endl;
    cout<<" String of " << fname << " is "<< fname.append(lname) << endl;
    cout << fname << "is: " << lname.append(fname)<<endl;
    cout << fname;
   // cout <<" String of "<< fullname << " is: " << fullname.length();
   */
   /* cout << fullname<<endl;
    cout<<"Find: " << fullname.substr(10,14);
    cout << "\n Find: " << fullname.find("Elsa") << endl;
    cout<< "Erasing: " << fullname.erase(0,5);
   */
int count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0, count9=0, count10=0;
string user_word;
cout << "Enter a word: ";
std::getline(cin,user_word);
int len = user_word.length();
//look for the vowels in a word the count them
int count=0;
for(int i=0; i<len; i++)
{
    if(user_word[i]=='a')
    {
        count1++;
    }
    else if(user_word[i]=='e')
    {
        count2++;
    }
    else if(user_word[i]=='i')
    {
        count3++;
    }
    else if(user_word[i]=='o')
    {
        count4++;
    }
    else if(user_word[i]=='u')
    {
        count5++;
    }
    else if(user_word[i]=='A')
    {
        count6++;
    }
    else if(user_word[i]=='E')
    {
        count7++;
    }
    else if(user_word[i]=='I')
    {
        count8++;
    }
    else if(user_word[i]=='O')
    {
        count9++;
    }
    else if(user_word[i]=='U')
    {
        count10++;
    }

}
cout << "a in " << user_word << " is: " << count1 << endl;
cout << "e in " << user_word << " is: " << count2 << endl;
cout << "i in " << user_word << " is: " << count3 << endl;
cout << "o in " << user_word << " is: " << count4 << endl;
cout << "u in " << user_word << " is: " << count5 << endl;
/*
cout << "A in " << user_word << " is: " << count6 << endl;
cout << "E in " << user_word << " is: " << count7 << endl;
cout << "I in " << user_word << " is: " << count8 << endl;
cout << "O in " << user_word << " is: " << count9 << endl;
cout << "U in " << user_word << " is: " << count10 << endl;
*/


    return 0;
}
