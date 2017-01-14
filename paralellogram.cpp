/* Aleksandr Movsesyan
     Programming Lab 3
     pl3.cpp
     CS 110A
     Craig Persiko

     This program makes a parallelogram out of a chosen character that the user
chooses.
  */

#include <iostream>
using namespace std;

void input_size_of_parallelogram ( int& size_of_parallelogram );
// takes the size the user wants to use to make the parallelogram and sends it
back through a call-by-reference parameter

void draw_parallelogram ( int length_of_sides );
// inputs the character the user wants to use for the parallelogram and uses it
to draw the parallelogram

int main()
{

  int size;

  cout << "\nThis program will output a parallelogram." << endl;
  input_size_of_parallelogram ( size );
  draw_parallelogram ( size );
  return 0;
}

// takes the size the user wants to use to make the parallelogram and sends it
back through a call-by-reference parameter
void input_size_of_parallelogram ( int& size_of_parallelogram )
{

  cout << "\nHow long do you want each side to be? ";
  cin >> size_of_parallelogram;

}

// inputs the character the user wants to use for the parallelogram and uses it
to draw the parallelogram
void draw_parallelogram ( int length_of_sides )
{

  int row, c;
  char parallelogram_character_used;

  cout << "Please enter the character you want it to be made of: ";
  cin >> parallelogram_character_used;

  for (  row = 0; row < length_of_sides; row++ )
  {
    for ( c = 0; c <= row; c++ )
      cout << parallelogram_character_used;
    cout << endl;
  }
  for ( row = 0; row < length_of_sides; row++ )
  {
    for ( c = 0; c <= row; c++ )
      cout << " ";
    for ( int a = length_of_sides - 1; a > row; a-- )
      cout << parallelogram_character_used;
    cout << endl;
  }
}
