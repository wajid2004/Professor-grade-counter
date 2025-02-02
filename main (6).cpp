#include <iostream>
using namespace std;

int main() {
    //initializing our variable.
    char grade;
    cout << "Enter letter grades (EOF to end)." << endl;
    
    //initializing our variables for diferent charater.
    int count_a = 0;
    int count_b = 0;
    int count_c = 0;
    int count_d = 0;
    int count_f = 0;
    
    //using while to take input untill the press Ctrl-D to stop the while loop.
    
    while(true) {
        cin >> grade;
        
        if (cin.eof()) {
            // cout << "EOF detected terminating the while loop." << endl;
            break;
        }
        //using switch case for different statements to check for characters.
        
        switch(grade) {
            case 'A':
            case 'a':
                count_a++;
                break;
            case 'B':
            case 'b':
                count_b++;
                break;
            case 'C':
            case 'c':
                count_c++;
                break;
            case 'D':
            case 'd':
                count_d++;
                break;
            case 'F':
            case 'f':
                count_f++;
                break;
            case '\n':
            case '\t':
            case ' ':
            default:
                cout << "Unrecognized character: Restart the program and start again. Thank you!";
                break;
                
                
        }
        
        
        /*his is all the previous code to tackle challenge 2 I wanted to delet it but I kept if you want to
        the program works with both of them but I used the switch it looks more related what we covered in the class.*/
        
        
        
        
        
        // int count_a;
        // int count_b;
        // int count_c;
        // int count_d;
        // int count_f;
        // if (grade == 'A' ||  grade == 'a') {
        //     count_a++;
            
        // } else if (grade == 'B' || grade == 'b') {
        //     count_b++;
        // } else if (grade == 'C' || grade == 'c') {
        //     count_c++;
        // } else if (grade == 'D' || grade == 'd') {
        //     count_d++;
        // } else if (grade == 'F' || grade == 'f') {
        //     count_f++;
        // } else {
        //     cout << "Hello World";
        // }
        
        
    }
    
    cout << "Grade summary "<< endl;
    cout << "A: " << count_a << endl;
    cout << "B: " << count_b << endl;
    cout << "C: " << count_c << endl;
    cout << "D: " << count_d << endl;
    cout << "F: " << count_f << endl;
    
    
}