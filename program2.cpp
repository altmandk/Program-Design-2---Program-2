#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

/*-----------------------------------------------------------------------
Program 2: Memory Game
Class: CS 141
Author: Derek Altman
Lab: Tues 11am
System: C++ Windows Dev-C++

 Grading Rubric:

   50 Execution points
         5 Displays header info on screen when run
         5 Displays instructions
         5 Output is formatted as shown in sample output
         3 Handles both upper and lower case input
         2 Input of 'x' in first prompt exits program
         5 Input can be adjacent or have spaces between them
        15 Displayed boards all have odd parity in rows and columns
         5 Repeated input of 'r' gives new valid random board each time
         5 Gives appropriate end of program messages

   45 Programming Style (Given only if program runs substantially correctly)
         5 Program naming convention is followed
        10 Meaningful identifier names
        10 Comments: Has header.  Comments on each block of code
        10 Appropriate data and control structures (-20 if using arrays or strings)
        10 Code Layout: Appropriate indentation and blank lines
-----------------------------------------------------------------------*/

//Global Variables are defined
char p0, p1, p2, p3, p4, p5,
	p6, p7, p8, p9, p10, p11,
	p12, p13, p14, p15, p16, p17,
	p18, p19, p20, p21, p22, p23,
	p24, p25, p26, p27, p28, p29,
	p30, p31, p32, p33, p34, p35; 

//Function to set the random number to the appropriate character
int RandomChar(char& pNum) {
	if (pNum %2 == 1) {
		pNum = 'X';  //if number is odd set variable to 'X'
	}
	else {
		pNum = 'O'; //if number is even set variable to 'O'
	}
	return 0;
}

void PrintBoard() {
	cout << "	" << " 1 2 3 4 5 6 " << endl;
	cout << "	" << "- - - - - - - -" << endl; 
	cout << "     A | " << p0 << " " << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << " | A" << endl; 
	cout << "     B | " << p6 << " " << p7 << " " << p8 << " " << p9 << " " << p10 << " " << p11 << " | B" << endl; 
	cout << "     C | " << p12 << " " << p13 << " " << p14 << " " << p15 << " " << p16 << " " << p17 << " | C" << endl; 
	cout << "     D | " << p18 << " " << p19 << " " << p20 << " " << p21 << " " << p22 << " " << p23 << " | D" << endl; 
	cout << "     E | " << p24 << " " << p25 << " " << p26 << " " << p27 << " " << p28 << " " << p29 << " | E" << endl; 
	cout << "     F | " << p30 << " " << p31 << " " << p32 << " " << p33 << " " << p34 << " " << p35 << " | F" << endl; 
	cout << "	" << "- - - - - - - -" << endl;
	cout << "	" << " 1 2 3 4 5 6 " << endl;
}

//Function to randomize the board with odd parity
void RandomBoard()	{
	int i=0;
	srand(time(0));

	p0 = rand(); p1 = rand(); p2 = rand(); p3 = rand(); p4 = rand(); p5 = rand();
	p6 = rand(); p7 = rand(); p8 = rand(); p9 = rand(); p10 = rand(); p11 = rand();
	p12 = rand(); p13 = rand(); p14 = rand(); p15 = rand(); p16 = rand(); p17 = rand();
	p18 = rand(); p19 = rand(); p20 = rand(); p21 = rand(); p22 = rand(); p23 = rand();
	p24 = rand(); p25 = rand(); p26 = rand(); p27 = rand(); p28 = rand(); p29 = rand();
	p30 = rand(); p31 = rand(); p32 = rand(); p33 = rand(); p34 = rand(); p35 = rand();

	RandomChar(p0); RandomChar(p1); RandomChar(p2); RandomChar(p3); RandomChar(p4); RandomChar(p5);
	RandomChar(p6); RandomChar(p7); RandomChar(p8); RandomChar(p9);  RandomChar(p10); RandomChar(p11);
	RandomChar(p12); RandomChar(p13); RandomChar(p14); RandomChar(p15); RandomChar(p16); RandomChar(p17);
	RandomChar(p18); RandomChar(p19); RandomChar(p20); RandomChar(p21); RandomChar(p22); RandomChar(p23);
	RandomChar(p24); RandomChar(p25); RandomChar(p26); RandomChar(p27); RandomChar(p28); RandomChar(p29);
	RandomChar(p30); RandomChar(p31); RandomChar(p32); RandomChar(p33); RandomChar(p34); RandomChar(p35);

	while(i < 1) {		
		if ((p0 + p1 + p2 + p3 + p4 + p5) %2 != 1) {
			p0 = (rand()%2+1); p1 = (rand()%2+1); p2 = (rand()%2+1); p3 = (rand()%2+1); p4 = (rand()%2+1); p5 = (rand()%2+1);
			RandomChar(p0); RandomChar(p1); RandomChar(p2); RandomChar(p3); RandomChar(p4); RandomChar(p5);
			continue;
		} 
		else if ((p6 + p7 + p8 + p9 + p10 + p11) %2 != 1) {
			p6 = (rand()%2+1); p7 = (rand()%2+1); p8 = (rand()%2+1); p9 = (rand()%2+1); p10 = (rand()%2+1); p11 = (rand()%2+1);
			RandomChar(p6); RandomChar(p7); RandomChar(p8); RandomChar(p9);  RandomChar(p10); RandomChar(p11);
			continue;
		}
		else if ((p12 + p13 + p14 + p15 + p16 + p17) %2 != 1) {
			p12 = (rand()%2+1); p13 = (rand()%2+1); p14 = (rand()%2+1); p15 = (rand()%2+1); p16 = (rand()%2+1); p17 = (rand()%2+1);
			RandomChar(p12); RandomChar(p13); RandomChar(p14); RandomChar(p15); RandomChar(p16); RandomChar(p17);
			continue;
		}
		else if ((p18 + p19 + p20 + p21 + p22 + p23) %2 != 1) {
			p18 = (rand()%2+1); p19 = (rand()%2+1); p20 = (rand()%2+1); p21 = (rand()%2+1); p22 = (rand()%2+1); p23 = (rand()%2+1);
			RandomChar(p18); RandomChar(p19); RandomChar(p20); RandomChar(p21); RandomChar(p22); RandomChar(p23);
			continue; 
		}
		else if ((p24 + p25 + p26 + p27 + p28 + p29) %2 != 1) {
			p24 = rand(); p25 = rand(); p26 = rand(); p27 = rand(); p28 = rand(); p29 = rand();
			RandomChar(p24); RandomChar(p25); RandomChar(p26); RandomChar(p27); RandomChar(p28); RandomChar(p29);
			continue;
		}
		else if ((p30 + p31 + p32 + p33 + p34 + p35) %2 != 1) {
			p30 = (rand()%2+1); p31 = (rand()%2+1); p32 = (rand()%2+1); p33 = (rand()%2+1); p34 = (rand()%2+1); p35 = (rand()%2+1);
			RandomChar(p30); RandomChar(p31); RandomChar(p32); RandomChar(p33); RandomChar(p34); RandomChar(p35);
			continue;
		}
		else if ((p0 + p6 + p12 + p18 + p24 + p30) %2 != 1) {
			p0 = (rand()%2+1); p6 = (rand()%2+1); p12 = (rand()%2+1); p18 = (rand()%2+1); p24 = (rand()%2+1); p30 = (rand()%2+1);
			RandomChar(p0); RandomChar(p6); RandomChar(p12); RandomChar(p18); RandomChar(p24); RandomChar(p30);
			continue;	
		}
		else if ((p1 + p7 + p13 + p19 + p25 + p31) %2 != 1) {
			p1 = (rand()%2+1); p7 = (rand()%2+1); p13 = (rand()%2+1); p19 = (rand()%2+1); p25 = (rand()%2+1); p31 = (rand()%2+1);
			RandomChar(p1); RandomChar(p7); RandomChar(p13); RandomChar(p19); RandomChar(p25); RandomChar(p31);
			continue;
		}
		else if ((p2 + p8 + p14 + p20 + p26 + p32) %2 != 1) {
			p2 = (rand()%2+1); p8 = (rand()%2+1); p14 = (rand()%2+1); p20 = (rand()%2+1); p26 = (rand()%2+1); p32 = (rand()%2+1);
			RandomChar(p2); RandomChar(p8); RandomChar(p14); RandomChar(p20); RandomChar(p26); RandomChar(p32);
			continue;
		}
		else if ((p3 + p9 + p15 + p21 + p27 + p33) %2 != 1) {
			p3 = (rand()%2+1); p9 = (rand()%2+1); p15 = (rand()%2+1); p21 = (rand()%2+1); p27 = (rand()%2+1); p33 = (rand()%2+1);
			RandomChar(p3); RandomChar(p9); RandomChar(p15); RandomChar(p21); RandomChar(p27); RandomChar(p33);
			continue;
		}
		else if ((p4 + p10 + p16 + p22 + p28 + p34) %2 != 1) {
			p4 = (rand()%2+1); p10 = (rand()%2+1); p16 = (rand()%2+1); p22 = (rand()%2+1); p28 = (rand()%2+1); p34 = (rand()%2+1);
			RandomChar(p4); RandomChar(p10); RandomChar(p16); RandomChar(p22); RandomChar(p28); RandomChar(p34);
			continue;
		}
		else if ((p5 + p11 + p17 + p23 + p29 + p35) %2 != 1) {
		p5 = (rand()%2+1); p11 = (rand()%2+1); p17 = (rand()%2+1); p23 = (rand()%2+1); p29 = (rand()%2+1); p35 = (rand()%2+1);
			RandomChar(p5); RandomChar(p11); RandomChar(p17); RandomChar(p23); RandomChar(p29); RandomChar(p35);
			continue;
		}
		else {	
			cout << "	" << " 1 2 3 4 5 6 " << endl;
			cout << "	" << "- - - - - - - -" << endl; 
			cout << "     A | " << p0 << " " << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << " | A" << endl; 
			cout << "     B | " << p6 << " " << p7 << " " << p8 << " " << p9 << " " << p10 << " " << p11 << " | B" << endl; 
			cout << "     C | " << p12 << " " << p13 << " " << p14 << " " << p15 << " " << p16 << " " << p17 << " | C" << endl; 
			cout << "     D | " << p18 << " " << p19 << " " << p20 << " " << p21 << " " << p22 << " " << p23 << " | D" << endl; 
			cout << "     E | " << p24 << " " << p25 << " " << p26 << " " << p27 << " " << p28 << " " << p29 << " | E" << endl; 
			cout << "     F | " << p30 << " " << p31 << " " << p32 << " " << p33 << " " << p34 << " " << p35 << " | F" << endl; 
			cout << "	" << "- - - - - - - -" << endl;
			cout << "	" << " 1 2 3 4 5 6 " << endl;	
			i=i+1;
		}	
	}
}
	
//main code begins here
int main() {

//list of variables used throughout program
char userInputOne; 		
char userInputTwo;
char userInputThree;
char userInputFour;
int i = 0; 
	
//print out class info
cout << "Program 2: Memory Game" << endl;         
cout << "Class: CS 141" << endl;
cout << "Author: Derek Altman" << endl;
cout << "Lab: Tues 11am" << endl;
cout << "System: C++ Windows Dev-C++" << endl << endl;
  
//print out game instructions
cout << "Welcome to the memory game!" << endl << endl;
cout << "Look away from the board and have a helper enter r" << endl;    
cout << "to refresh the board until they have a random board" << endl;   
cout << "that they like. Then you glance at it and try to" << endl;     
cout << "imprint it in your mind. Your helper will then select" << endl;
cout << "the number of a single piece to be flipped by choosing" << endl;
cout << "its row and column. You then must try to guess which" << endl; 
cout << "one it was. Enter x to exit the program." << endl << endl;

RandomBoard();
	
while (userInputOne != 'X') {
	cout << endl << "Enter r to randomize board, or row and column to change a value - > ";
	cin >> userInputOne;
	cout << endl;
	userInputOne = toupper(userInputOne);
	
	if (userInputOne == 'X') {
		continue;
	}
	else if (userInputOne == 'R') {
		RandomBoard();
		continue;
	}
	else if ((userInputOne !='X') || (userInputOne != 'R')) {
		cin >> userInputTwo;
		userInputTwo = toupper(userInputTwo);	
		
		if ((userInputOne == 'A') && (userInputTwo == '1')) {
			if (p0 == 'O') {
				p0 = 'X';
			}
			else if (p0 =='X') {
				p0 = 'O';
			}
			break;
		}
		if ((userInputOne == 'A') && (userInputTwo == '2')) {
			if (p1 == 'O') {
				p1 = 'X';
			}
			else if (p1 =='X') {
				p1 = 'O';
			}
			break;
		}
		if ((userInputOne == 'A') && (userInputTwo == '3')) {
			if (p2 == 'O') {
				p2 = 'X';
			}
			else if (p2 =='X') {
				p2 = 'O';
			}
			break;
		}
		if ((userInputOne == 'A') && (userInputTwo == '4')) {
			if (p3 == 'O') {
				p3 = 'X';
			}
			else if (p3 =='X') {
				p3 = 'O';
			}
			break;
		}
		if ((userInputOne == 'A') && (userInputTwo == '5')) {
			if (p4 == 'O') {
				p4 = 'X';
			}
			else if (p4 =='X') {
				p4 = 'O';
			}
			break;
		}
		if ((userInputOne == 'A') && (userInputTwo == '6')) {
			if (p5 == 'O') {
				p5 = 'X';
			}
			else if (p5 =='X') {
				p5 = 'O';
			}
			break;
		}
		if ((userInputOne == 'B') && (userInputTwo == '1')) {	
			if (p6 == 'O') {
				p6 = 'X';
			}
			else if (p6 =='X') {
				p6 = 'O';
			}
			break;
		}
		if ((userInputOne == 'B') && (userInputTwo == '2')) {
			if (p7 == 'O') {
				p7 = 'X';
			}
			else if (p7 =='X') {
				p7 = 'O';
			}
			break;
		}
		if ((userInputOne == 'B') && (userInputTwo == '3')) {
			if (p8 == 'O') {
				p8 = 'X';
			}
			else if (p8 =='X') {
				p8 = 'O';
			}
			break;
		}
		if ((userInputOne == 'B') && (userInputTwo == '4')) {
			if (p9 == 'O') {
				p9 = 'X';
			}
			else if (p9 =='X') {
				p9 = 'O';
			}
			break;
		}
		if ((userInputOne == 'B') && (userInputTwo == '5')) {
			if (p10 == 'O') {
				p10 = 'X';
			}
			else if (p10 =='X') {
				p10 = 'O';
			}
			break;
		}
		if ((userInputOne == 'B') && (userInputTwo == '6')) {
			if (p11 == 'O') {
				p11 = 'X';
			}
			else if (p11 =='X') {
				p11 = 'O';
			}
			break;
		}
		if ((userInputOne == 'C') && (userInputTwo == '1')) {
			if (p12 == 'O') {
				p12 = 'X';
			}
			else if (p12 =='X') {
				p12 = 'O';
			}
			break;
		}
		if ((userInputOne == 'C') && (userInputTwo == '2')) {
			if (p13 == 'O') {
				p13 = 'X';
			}
			else if (p13 =='X') {
				p13 = 'O';
			}
			break;
		}
		if ((userInputOne == 'C') && (userInputTwo == '3')) {
			if (p14 == 'O') {
				p14 = 'X';
			}
			else if (p14 =='X') {
				p14 = 'O';
			}
			break;
		}
		if ((userInputOne == 'C') && (userInputTwo == '4')) {
			if (p15 == 'O') {
				p15 = 'X';
			}
			else if (p15 =='X') {
				p15 = 'O';
			}
			break;
		}
		if ((userInputOne == 'C') && (userInputTwo == '5')) {
			if (p16 == 'O') {
				p16 = 'X';
			}
			else if (p16 =='X') {
				p16 = 'O';
			}
			break;
		}
		if ((userInputOne == 'C') && (userInputTwo == '6')) {
			if (p17 == 'O') {
				p17 = 'X';
			}
			else if (p17 =='X') {
				p17 = 'O';
			}
			break;
		}
		if ((userInputOne == 'D') && (userInputTwo == '1')) {	
			if (p18 == 'O') {
				p18 = 'X';
			}
			else if (p18 =='X') {
				p18 = 'O';
			}
			break;
		}
		if ((userInputOne == 'D') && (userInputTwo == '2')) {
			if (p19 == 'O') {
				p19 = 'X';
			}
			else if (p19 =='X') {
				p19 = 'O';
			}
			break;
		}
		if ((userInputOne == 'D') && (userInputTwo == '3')) {
			if (p20 == 'O') {
				p20 = 'X';
			}
			else if (p20 =='X') {
				p20 = 'O';
			}
			break;
		}
		if ((userInputOne == 'D') && (userInputTwo == '4')) {
			if (p21 == 'O') {
				p21 = 'X';
			}
			else if (p21 =='X') {
				p21 = 'O';
			}
			break;
		}
		if ((userInputOne == 'D') && (userInputTwo == '5')) {
			if (p22 == 'O') {
				p22 = 'X';
			}
			else if (p22 =='X') {
				p22 = 'O';
			}
			break;
		}
		if ((userInputOne == 'D') && (userInputTwo == '6')) {
			if (p23 == 'O') {
				p23 = 'X';
			}
			else if (p23 =='X') {
				p23 = 'O';
			}
			break;
		}
		if ((userInputOne == 'E') && (userInputTwo == '1')) {
			if (p24 == 'O') {
				p24 = 'X';
			}
			else if (p24 =='X') {
				p24 = 'O';
			}
			break;
		}
		if ((userInputOne == 'E') && (userInputTwo == '2')) {
			if (p25 == 'O') {
				p25 = 'X';
			}
			else if (p25 =='X') {
				p25 = 'O';
			}
			break;
		}
		if ((userInputOne == 'E') && (userInputTwo == '3')) {
			if (p26 == 'O') {
				p26 = 'X';
			}
			else if (p26 =='X') {
				p26 = 'O';
			}
			break;
		}
		if ((userInputOne == 'E') && (userInputTwo == '4')) {
			if (p27 == 'O') {
				p27 = 'X';
			}
			else if (p27 =='X') {
				p27 = 'O';
			}
			break;
		}
		if ((userInputOne == 'E') && (userInputTwo == '5')) {
			if (p28 == 'O') {
				p28 = 'X';
			}
			else if (p28 =='X') {
				p28 = 'O';
			}
			break;
		}
		if ((userInputOne == 'E') && (userInputTwo == '6')) {
			if (p29 == 'O') {
				p29 = 'X';
			}
			else if (p29 =='X') {
				p29 = 'O';
			}
			break;
		}
		if ((userInputOne == 'F') && (userInputTwo == '1')) {	
			if (p30 == 'O') {
				p30 = 'X';
			}
			else if (p30 =='X') {
				p30 = 'O';
			}
			break;
		}
		if ((userInputOne == 'F') && (userInputTwo == '2')) {
			if (p31 == 'O') {
				p31 = 'X';
			}
			else if (p31 =='X') {
				p31 = 'O';
			}
			break;
		}
		if ((userInputOne == 'F') && (userInputTwo == '3')) {
			if (p32 == 'O') {
				p32 = 'X';
			}
			else if (p32 =='X') {
				p32 = 'O';
			}
			break;
		}
		if ((userInputOne == 'F') && (userInputTwo == '4')) {
			if (p33 == 'O') {
				p33 = 'X';
			}
			else if (p33 =='X') {
				p33 = 'O';
			}
			break;
		}
		if ((userInputOne == 'F') && (userInputTwo == '5')) {
			if (p34 == 'O') {
				p34 = 'X';
			}
			else if (p34 =='X') {
				p34 = 'O';
			}
			break;
		}
		if ((userInputOne == 'F') && (userInputTwo == '6')) {
			if (p35 == 'O') {
				p35 = 'X';
			}
			else if (p35 =='X') {
				p35 = 'O';
			}
			break;
		}
	}
}

cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
PrintBoard();

cout << "What piece do you think it was? -> ";
cin >> userInputThree >> userInputFour;

if ((userInputOne + userInputTwo) == (userInputThree + userInputFour)) {
	cout << "*** Congratulations, you did it! ***" << endl << endl;
	cout << "Thank you for playing. Exiting..." << endl;
}    
else {
	cout << "*** Sorry, you guessed wrong! ***" << endl << endl;
	cout << "Thank you for playing. Exiting..." << endl;
}

return 0;
	
}
