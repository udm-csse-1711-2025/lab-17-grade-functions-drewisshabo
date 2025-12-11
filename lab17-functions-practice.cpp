// Program used to illustrate the usage of functions
// Gets three exam scores from the user and shows them 
// their letter grades
// Started by: Caitlin Snyder
// Edited by: [Andrew Szabo]

#include <iostream>
using namespace std;

/****************************************************************
 *  Function Name: getScore
 *  Purpose: Ask the user for a test score, validate the input,
 *          and return the valid score.
 *  Parameters: None
 *  Return Value: A double representing a valid test score (0�100)
 ****************************************************************/

double getScore(){ // function returns double with no parameters
  double score;
  cout << "Enter your test score 0-100" << endl;
  cin >> score;

  while(score < 0 || score > 100){ // gets a real input 
    cout << "Invalid test score try again" << endl;
    cin >> score;
  }
  return score;
}




/****************************************************************
 * Function Name: displayLetterGrade
 * Purpose: Determine and display the letter grade 
 *          corresponding to the numeric score.
 * Parameters: score (double) � the numeric test score
 * Return Value: None (displays the letter grade to the screen)
 ****************************************************************/

void displayLetterGrade(double score){ // function that returns nothing but takes in a double and calculates letter grade
  if(score >= 90){ // if higher than 90 A
    cout << 'A' << endl;
  }
  else if(score >= 80){ // higher than 80 B
    cout << 'B' << endl;
  }
  else if(score >= 70){ //higher than 70 C
    cout << 'C' << endl;
  }
  else if(score >= 60){ //higher than 60 D
    cout << 'D' << endl;
  }
  else{ // if lower F
    cout << 'F' << endl;
  }
}



// You should not need to edit main for your program to run 
// correctly. Only edit it to add cout statements or comment
// out code to test your functions.
int main() {
    double score1, score2, score3;

    cout << "Enter your three exam scores below.\n";

    // Call getScore three times to get and validate each test score
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each exam
    cout << "\nLetter grades:\n";
    cout << "Exam 1: ";
    displayLetterGrade(score1);

    cout << "Exam 2: ";
    displayLetterGrade(score2);

    cout << "Exam 3: ";
    displayLetterGrade(score3);

    return 0;
}


