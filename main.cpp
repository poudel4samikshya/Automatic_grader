//section challange Automated grader
// write a program that reads a file named "responses.txt" that contains the answer
// key for the quiz as well as student responses for the quiz

/* Answer key is the first item in the file
 * Student 1 name
 * student responses
 * student 2 name
 * student responses
 * You should read the file carefully and display
 * Each student's name and score (#correct out of 5)
 * At the end the class average should be displayed
 * you may assume that data in the file is properly formatted
 *
 * */



#include <iostream>
#include<fstream>
#include<string>
#include"functions.h"

using namespace std;



int main(){

 ifstream infile;
 infile.open("../responses.txt");

  string answer_key {};
  string responses {};
  string name{};

  int sum = 0;
  int total_num_students = 0;

  infile>>answer_key;


  print_header();

  while(infile>>name>>responses){ // taking two line at a time
    int score = grader(answer_key,responses);
    sum += score;
    total_num_students++;
    cout<<setw(20)<<left<<name<<score<<endl;
  }

print_footer(sum,total_num_students);
  
  infile.close();
}






