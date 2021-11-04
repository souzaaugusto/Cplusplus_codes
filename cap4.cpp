#include <iostream>
#include <string>
using namespace std;

//EXEMPLO 1
/*
int main(){
    double grades[] = {88, 99, 73, 56, 87, 64};
    double sum, average;

    sum = 0;
    //for(instrução de inicialização; expressão de teste; expressão de iteração) instrução
    for (int loop_index = 0; loop_index < sizeof(grades) / sizeof(double); loop_index++)
    {
        sum += grades[loop_index];
    }
    average = sum / (sizeof(grades) / sizeof(double));

    cout << "Average grade = " << average << endl;

    return 0;
    
}*/
//////////////////////////////////////////////////
//EXEMPLO 2
/*
int main(){
    int value = -10;

    if (value > 0)
    {
        cout << "Abs(" <<value<< ") = " << value << endl;
    }else {
        cout << "Abs("<<value<<") = " << -value << endl;
    }
    return 0;
    
}*/
//////////////////////////////////////////////////
//EXEMPLO 3
/*
#include <string.h>

int main(){

    string day = "SUnday";

    if (day == "Monday"){                   
        cout << "It\'s Monday." << endl;
    }else if (day == "Tuesday")
    {
        cout << "It\'s Tuesday." << endl;
    }else if (day == "Wednesday")
    {
        cout << "It\'s Wednesday." << endl;
    }else if (day == "Thursday")
    {
        cout << "It\'s Thursday." << endl;
    }else if (day == "Friday")
    {
        cout << "It\'s Friday." << endl;
    }else if (day == "Saturday")
    {
        cout << "It\'s Saturday." << endl;
    }else if (day == "Sunday")
    {
        cout << "It\'s Sunday." << endl;
    }
    return 0;

}*/
//////////////////////////////////////////////////
//EXEMPLO 4
/*
int main(){
    int today = 7;

    switch (today)
    {
    case 0:
        cout << "It\'s Sunday." << endl;
        break;
    case 1:
        cout << "It\'s Monday." << endl;
        break;
    case 2:
        cout << "It\'s Tuesday." << endl;
        break;
    case 3:
        cout << "It\'s Wednesday." << endl;
        break;
    case 4:
        cout << "It\'s Thursday." << endl;
        break;
    case 5:
        cout << "It\'s Friday." << endl;
        break;
    default:
        cout << "It\'s Saturday" << endl;
        break;
    }
    return 0;
}*/
////////////////////////////////////////////
//EXEMPLO 5
/*
int main(){
    int temperature = 80;

    switch (temperature)
    {
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
        cout << "Too cold" << endl;
        break;
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
        cout << "Cool" << endl;
        break;
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
        cout << "Warm" << endl;
        break;
    default:
        cout << "Probably too hot." << endl;
        break;
    }
    return 0;
}*/
/////////////////////////////////////////////////
//EXEMPLO 6
/*
int main(){
    double value = 0.5;

    if (value != 0 && 1 / value < 1000)     
    {
        cout << "The value is not too small." << endl;
    } else{
        cout << "The value is too small." << endl;
    }
    return 0;
    
}*/
////////////////////////////////////////////////////
//EXEMPLO 7
/*
int main(){
    int value = 10;

    while (value > 0)
    {
        cout << "Current value = " << value-- << endl;
    }
    return 0;
    
}*/
////////////////////////////////////////////////////
//EXEMPLO 8
/*
int main(){
    int value = 10, factorial = 1, temp;

    temp = value;

    while (temp > 0)
    {
        factorial *= temp--;
    }
    cout << value << "! = " << factorial << endl;

    return 0;
    
}*/
//////////////////////////////////////////////////
//EXEMPLO 9
/*
#include <stack>

int main(){
    int value = 32, temp = value;
    char characters[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    stack<int> st;

    while (temp)
    {
        st.push(temp % 16);
        temp >>= 4;
    }
    cout << "Converting " << value << " yelds 0x";

    while (!st.empty())
    {
        cout << characters[st.top()];
        st.pop(); 
    }
}*/
/////////////////////////////////////////////////////
//EXEMPLO 10
/*
int main(){
    int target = 169, sqrt = 1;

    while (++sqrt * sqrt != target);

    cout << "sqrt(" << target << ") = " << sqrt << endl;

    return 0;  
}*/
/////////////////////////////////////////////////////
//EXEMPLO 11
/*
int main(){
    int number;

    cout << "ENter some integers..." << endl;

    while (cin >> number)
    {
        cout << "You entered: " << number << endl;
    }

    cout << "Your entry was not an integer, so quitting." << endl;

    return 0;
    
}*/
//////////////////////////////////////////////////////
//EXEMPLO 12
/*
#include <cmath>
#include <ctime>

int main(){
    int my_number, user_guess;

    srand(time(0));

    my_number = static_cast <double> (rand()) / RAND_MAX * 10 + 1;
    cout << "I've got a number from 1 to 10, can you guess it?" << endl;

    do
    {
        cout << "Your guess: ";
        cin >> user_guess;
    } while (user_guess != my_number);

    cout << "You got it." << endl;

    return 0;
    
}*/
/*#include <math.h>
int main(){
    double rss;
    float vr;
    float vf;

    rss = vr*2 + ((3.5*(pow(2,2)))/2) + (pow((vr + 2*3.5),2)/(2*4)) - (pow(vf,2)/2*8);

    cout << "Enter the Target velocity: ";
    cin >> vr;
    cout << "Enter the Ego velocity: ";
    cin >> vf;

    cout <<"RSS value: " << rss << endl;

    return 0;
}*/

//EXEMPLO 13
/*
int main(){
    const int ROWS = 3;
    const int COLS = 10;

    int array[ROWS][COLS] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                                {10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
                                {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
    int sum = 0, total = 0;

    for (int outer_index = 0; outer_index < ROWS; outer_index++)
    {
        for (int inner_index = 0; inner_index < COLS; inner_index++)
        {
            sum += array[outer_index][inner_index];
            total++;
        } 
    }
    cout << "Average array value = " << (static_cast<double>(sum) / total) << endl;

    return 0; 
}*/

//EXEMPLO 14
/*
int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int loop_index = 0; loop_index < sizeof(array) / sizeof(int); loop_index++)
    {
        sum += array[loop_index];
        if (sum > 15) break;
        cout << "Looping..." << endl;
    }
    cout << "The sum exceeded the maximum value." << endl;

    return 0;
}*/

//EXEMPLO 15
/*
int main(){
    for (double loop_index = 5; loop_index > -5; loop_index--)
    {
        if (loop_index == 0) continue;
        cout << "The reciprocal of " << loop_index << " = " << (1 / loop_index) << endl;
    }
    return 0;
}*/

//EXEMPLO 16

int main(){
    for (int loop_index = 0; loop_index > -5; loop_index--)
    {
        if (loop_index ==0)
            goto END_LOOP;
        cout << "1 / " << loop_index << " = " << 1 / loop_index;
    }
    exit(0);
    //abort();
END_LOOP: cerr << "Ending loop to avoid dividing by 0." << endl;
    return 0;
}
