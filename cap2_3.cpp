#include <iostream>
#include <string>
using namespace std;

/* EXEMPLO 1
int main(){
    int number_of_dogs, number_of_cats;
    number_of_dogs = 1;
    number_of_cats = 0;

    cout<< "I have "<< number_of_dogs << " dog and ";
    cout<< "I have "<< number_of_cats << " cat." << endl;

    return 0;

}*/
///////////////////////////////////////////////////////////////////////////////
/* EXEMPLO 2
int main(){

    string input;

    cout << "Type a word: ";

    cin >> input;

    cout << "You typed: " << input << endl;

    return 0;

}*/
////////////////////////////////////////////////////////////////////////////
/* EXEMPLO 3
int main(){
    string input1, input2, input3, input4;

    cout<< "Type four words: ";

    cin>> input1 >> input2 >> input3 >> input4;

    cout<< "YOu typed: " << input1 << " " << input2 << " ";
    cout<<  input3 << " " << input4 << endl;

    return 0;

}*/
//////////////////////////////////////////////////////////////////////////////
/* EXEMPLO 4
int main(){
    string input;

    cout << "Type a word:       \b\b\b\b\b\b";

    cin >> input;

    cout << "You typed: " << input << endl;

    return 0;
}*/

//////////////////////////////////////////////////////////////////////
/* EXEMPLO 5
#include <iomanip>
int main(){
    float pi = 3.14159;

    cout << "Pi: " << pi << endl;

    //cout.precision(3);

    //cout << "Pi with a precision of three digits: " << pi << endl;

    cout << setprecision(3) << "Pi with a precision of three digits: "<< pi << endl;

    return 0;
}*/
//////////////////////////////////////////////////////////////////////
/* EXEMPLOS 6
int main(){
    int number;

    cout << "Enter an integer to be checked: ";

    cin >> number;

    if (number > 0){
        cout << "That integer is greater than zero." << endl;
    }
    else {
        cout << "That integer is zero or less than zero." << endl;
    }
    return 0;
}*/
/////////////////////////////////////////////////////////////////////
/* EXEMPLO 7
int main(){
    int number;

    cout << "How many times do you want to see the greeting? ";

    cin >> number;

    for (int loop_index = 0; loop_index < number; loop_index++){
        cout << "Hello from C++."<< endl;
    }
    return 0;
}*/
///////////////////////////////////////////////////////////////////
/* EXEMPLO 8
int main(){
    int number;

    cout << "Enter a non-zero integer to be checked: ";

    cin >> number;

    while (number != 0){
        if(number > 0){
            cout << "That integer is greater than zero." << endl;
        }
        else {
            cout << "That integer is less than zero." << endl;
        }
        cout << "Enter a non-zero integer to be checked: ";

        cin >> number;
    }
    cout << "You entered zero." << endl;

    return 0;
}*/
//////////////////////////////////////////////////////////////
/* EXEMPLO 9 - USANDO ARQUIVO HEADER
#include "header.cpp"

using namespace std;

int main(){
    float pi = 3.14159;

    cout << "Pi: "<< pi << endl;

    cout<< setprecision(3) << "Pi with a precision of three digits: " << pi << endl;

    return 0;
}*/
//////////////////////////////////////////////////////////////
/* EXEMPLO 10
#define maximum(a,b) (a < b) ? b : a

int main(){
    int max = maximum(-5,-3);

    cout << "The maximum of 5 and 3 = " << max << endl;
    return 0;

}*/
//////////////////////////////////////////////////////////
/* EXEMPLO 11
int main(){
    //short big = 48272;
    
    int sum;
    int ten = 10;
    //long bigger = 138218285;
    float pi = 3.14159;
    sum = ten + pi;

    //cout<< "The sum of big and bigger = " << sum << endl;
    cout<< "The integer sum= "<< sum << endl;

    return 0;
}*/
//////////////////////////////////////////////////////////
/* EXEMPLO 12
int main(){
    char character;
    int character_code;

    cout << "Type one character: ";

    cin >> character;

    cout << "You typed " << character << endl;

    character_code = character;

    cout << "That character's code is " << character_code << endl;

    return 0; 

}*/
////////////////////////////////////////////////////////////
/* EXEMPLO 13
#include <cctype>

int main(){

    cout << "Please type a character: ";
    char character;

    cin >> character;

    if(isalpha(character))
        cout << "That character is a alphanumeric." << endl;
    else if(isdigit(character))
        cout << "That character is a digit." << endl;
    else if(isspace(character))
        cout << "That character is a space." << endl;
    else if(ispunct(character))
        cout << "That character is a punctuation character." << endl;

    return 0;        
}*/
////////////////////////////////////////////////////////////////////
/* EXEMPLO 14
int main(){
    char character;

    character = 'c';

    cout << "The character = " << character << endl;

    return 0;
}*/
/////////////////////////////////////////////////////////////////////
/* EXEMPLO 15 - CAPACIDADE DE ARMAZENAMENTO DE CHAR, SHORT, INT e LONG
#include <climits>

int main(){
    cout << "The char type is " << sizeof(char) << " byte long" << endl;
    cout << "The short type is " << sizeof(short) << " bytes long" << endl;
    cout << "The int type is " << sizeof(int) << " bytes long" << endl;
    cout << "The long type is " << sizeof(long) << " byte long" << endl;
    cout <<  endl;

    cout << "Minimum char value: " << CHAR_MIN << endl;
    cout << "Maximum char value: " << CHAR_MAX << endl;
    cout << "Minimum unsigned char value: " << 0 << endl;
    cout << "Maximum unsigned char value: " << UCHAR_MAX << endl;
    cout <<  endl;

    cout << "Minimum short value: " << SHRT_MIN << endl;
    cout << "Maximum short value: " << SHRT_MAX << endl;
    cout << "Minimum unsigned short value: " << 0 << endl;
    cout << "Maximum unsigned short value: " << USHRT_MAX << endl;
    cout <<  endl;

    cout << "Minimum int value: " << INT_MIN << endl;
    cout << "Maximum int value: " << INT_MAX << endl;
    cout << "Minimum unsigned int value: " << 0 << endl;
    cout << "Maximum unsigned int value: " << UINT_MAX << endl;
    cout <<  endl;

    cout << "Minimum long value: " << LONG_MIN << endl;
    cout << "Maximum long value: " << LONG_MAX << endl;
    cout << "Minimum unsigned long value: " << 0 << endl;
    cout << "Maximum unsigned long value: " << ULONG_MAX << endl;
    cout <<  endl;
}*/
///////////////////////////////////////////////////////////////////////
/*EXEMPLO 16
#include <cfloat>

int main(){
    cout << "The float type is " << sizeof (float) << " bytes long" << endl;
    cout << "The double type is " << sizeof (double) << " bytes long" << endl;
    cout << "The long double type is " << sizeof (long double) << " bytes long" << endl;
    cout << endl;

    cout << "Minimum float value: " << FLT_MIN  << endl;
    cout << "Maximum float value: " << FLT_MAX  << endl;
    cout << "Number binary mantissa digits: " << FLT_MANT_DIG << endl;
    cout << "Maximum exponents for decimal numbers: " << FLT_MAX_10_EXP << endl;
    cout << "Minimum exponents for decimal numbers: " << FLT_MIN_10_EXP << endl;
    cout << endl;

    cout << "Minimum double value: " << DBL_MIN  << endl;
    cout << "Maximum double value: " << DBL_MAX  << endl;
    cout << "Number binary mantissa digits: " << DBL_MANT_DIG << endl;
    cout << "Maximum exponents for decimal numbers: " << DBL_MAX_10_EXP << endl;
    cout << "Minimum exponents for decimal numbers: " << DBL_MIN_10_EXP << endl;
    cout << endl;

    cout << "Minimum long double value: " << LDBL_MIN  << endl;
    cout << "Maximum long double value: " << LDBL_MAX  << endl;
    cout << "Number binary mantissa digits: " << LDBL_MANT_DIG << endl;
    cout << "Maximum exponents for decimal numbers: " << LDBL_MAX_10_EXP << endl;
    cout << "Minimum exponents for decimal numbers: " << LDBL_MIN_10_EXP << endl;
    cout << endl;

    return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////
/* EXEMPLO 17
#include <string>

int main(){
    string string1("No ");
    string string2;

    string2 = "problems";

    string string3 = string1 + string2;

    cout << string3 << endl;

    string3 += " at all";

    cout << string3 << endl;

    return 0;
   
}*/
/////////////////////////////////////////////////////////////
/* EXEMPLO 18
#include <string>

int main(){
    string string1("No problems.");

    cout << "String lenght: " << string1.length() << endl;

    cout << "Location of \"problems\" " << string1.find("problems") << endl;

    cout << "Location of last \'o\': " << string1.find_last_of('o') << endl;

    cout << string1.replace(string1.length() - 1, 1, " at all.")<< endl;

    return 0;
}*/
////////////////////////////////////////////////////////////////////
/*
/* EXEMPLO 19
#include <string>

int main(){
    string string1;

    cout << "Type a few words: ";

    getline(cin,string1);

    cout <<"You typed: "<< string1 << endl;

    cout << "Type a word: ";

    string1 = cin.get();
    cout << "The first character was: "<< string1 << endl;

    return 0;
}*/
///////////////////////////////////////////////////////////////////
//EXEMPLO 20
/*int main(){
    int sum1;
    int sum2;
    int ten = 10;
    float pi = 3.14159;

    sum1 = (int) pi + ten; // (tipo) conversão explícita de tipo estilo antigo
    sum2 = static_cast <int> (pi) + ten; //Casts explícitos, sem verificação de tipo em tempo de execução, e desativa mensagens de alerta

    cout << "The integer sum = " << sum1 << endl;
    cout << "The integer sum = " << sum2 << endl;

    return 0;
}*/
///////////////////////////////////////////////////////////////////
//EXEMPLO 21

/*int main(){
    int value1 = 0, value2 = 0;

    cout << "value1 = " << value1 << endl;
    cout << "value2 = " << value2 << endl;

    value2 = value1++;

    cout << "After value2 = value1++... " << endl;
    cout << "value1 = " << value1 << endl;
    cout << "value2 = " << value2 << endl;

    int value3 = 0, value4 = 0;

    cout << endl;
    cout << "value3 = " << value3 << endl;
    cout << "value4 = " << value4 << endl;

    value4 = ++value3;

    cout << "After value4 = ++value3... " << endl;
    cout << "value3 = " << value3 << endl;
    cout << "value4 = " << value4 << endl;

    return 0;

}*/
///////////////////////////////////////////////////////////////
//EXEMPLO 22

/*int main(){
    short short1 = 0;
    bool boolean1 = true;

    cout << "Most negative short = " << ~short1 << endl;
    cout << "!true = " << !boolean1 << endl;

    return 0;
}*/
///////////////////////////////////////////////////////////////
//EXEMPLO 23
/*
#include <stack>
int main(){
    int value = 32, temp = value;
    stack<int> st;

    while (temp > 0) {
        st.push(temp % 10);
        temp >>= 4;
    }

    cout << "Converting " << value << " yields 0X";

    while (!st.empty()){
        cout << st.top();
        st.pop() ;
    }
   
    return 0;
}*/
/////////////////////////////////////////////////////////////
//EXEMPLO 24

/*int main(){
    int value = 12, negvalue = -1;
    int bit3settings = value & 1 << 3;

    cout << value <<" << 2 = " << (value << 2) << endl;
    cout << value <<" >> 2 = " << (value >> 2) << endl;
    cout << negvalue << " >> 2 = " << (negvalue >> 2) << endl;
    cout << bit3settings << endl;

    return 0;
}*/
///////////////////////////////////////////////////////////////
//EXEMPLO  25
/*
#include <cmath>
#include <ctime>

int main(){
    double max;

    srand(time(0));

    time_t t = time(0);
    int seconds = localtime(&t)->tm_sec;
    int minutes = localtime(&t)->tm_min;
    int hours = localtime(&t)->tm_hour;
    int day_of_month = localtime(&t)->tm_mday;
    int month = localtime(&t)->tm_mon; //(month 0-11)
    int year = localtime(&t)->tm_year; // since 1900
    int weekday = localtime(&t)->tm_wday; // 0-6
    int day_of_year = localtime(&t)->tm_yday; 
    int isdst = localtime(&t)->tm_isdst; //non-zero to summer time

    cout << "Enter maximum random number you want: ";

    cin >> max;

    double random = (static_cast<double> (rand())) / RAND_MAX * max;

    cout << "Here's random number between 0 and " << max << ": " << random << endl;
    cout << seconds << " seconds" << endl;
    cout << minutes << " minutes" << endl;
    cout << hours << " hours" << endl;
    cout << day_of_month << " days" << endl;
    cout << month << " month" << endl;
    cout << year << " year" << endl;
    cout << weekday << " week day" << endl;
    cout << day_of_year << " day year" << endl;
    cout << isdst << " is summer time" << endl;

    return 0;
}*/
////////////////////////////////////////////////
//EXEMPLO 26
/*
#include <string.h>

int main(){
    char string1[] = "bat";
    char string2[] = "cat";

    int result = strcmp(string1,string2);

    if (result > 0){
        cout << "string1 is lexicographically greater than string2" << endl;
    }else if (result == 0){
        cout << "string1 is lexicographically equal to string2" << endl;
    }else if (result < 0){
        cout << "string1 is lexicographically less than string2" << endl;
    }
    return 0;
}*/
////////////////////////////////////////////////////////

//EXEMPLO 27
/*
#include <string.h>

int main(){
    char string1[] = "We are building a house";
    char string2[] = "ing";
    char* string3;

    string3 = strstr(string1, string2);

    cout << string3 << endl;

    return 0;
}*/
//////////////////////////////////////////
//EXEMPLO 28
/*
#include <string.h>

int main(){
    char string1[] = "Hello";
    char string2[] = " there";
    char* string3;

    string3 = strcat(string1,string2);

    cout << string3 << endl;

    return 0;
}*/
//////////////////////////////////////////
//EXEMPLO 29
/*
#include <string.h>

int main(){
    char string1[] = "bat";
    char string2[] = "cat";
    
    strcpy(string1, string2);

    cout << string1 << endl;

    return 0;
}*/
//////////////////////////////////////////
//EXEMPLO 30
/*
#include <cstdio>

int main(){
    char formatted_string[20];

    float number = 1234.56789;
    sprintf(formatted_string, "%.4f\n", number);

    cout << formatted_string << endl;

    return 0;
}*/
//////////////////////////////////////////////
//EXEMPLO 31
/*
int main(){
    struct flags
    {
        int color : 4;
        bool line_flag : 1;
        bool brush_flag : 1;
        bool ellipse_flag : 1;
        bool rectangle_flag : 1;
    };

    flags current_flags;
    current_flags.line_flag = 1;

    if(current_flags.rectangle_flag){
        cout << "You are drawing rectangles." << endl;
    }else {
        cout << "You are not drawing rectangles." << endl;
    }
    return 0;
    
}*/
//////////////////////////////////////////////////////////
//EXEMPLO 32
/*
int main(){
    union one_union
    {
        int int_variable;
        long long_variable;
        double double_variable;
        double double_variable2;
    };

    one_union p;

    p.int_variable = 1;
    p.double_variable = 3.14159;

    cout << p.int_variable << endl;
    cout << p.double_variable << endl;
    cout << p.double_variable2 << endl;

    return 0;
}*/
/////////////////////////////////////////////////////
//EXEMPLO 33
/*
int main(){
    enum day{
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
    };

    enum day today = Sunday;

    if (today == Friday)
    {
        cout << "Today is Friday." << endl;
    }
    return 0;
    
}*/
/////////////////////////////////////////////////
//EXEMPLO 34
/*
int main(){
    enum day {
        Sunday = 1,
        Monday = 4,
        Tuesday = 5,
    }today;

    today = day(Sunday);

    cout << "The actual value in the variable today is " << today << endl;

    return 0;
}*/



