//
// Created by samikshya poudel on 9/12/21.
//
using namespace std;
#ifndef AUTOMATIC_GRADER_FUNCTIONS_H
#define AUTOMATIC_GRADER_FUNCTIONS_H


void print_header(){
    cout<<setw(20)<<"....Grades...."<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Name "<<setw(20)<<"sores"<<endl;
}
void print_footer(int sum,int total){

    cout<<"-----------------------------"<<endl;
    double average = sum/total;
    cout<<setprecision(2)<<fixed;
    cout<<setw(20)<<left<<"Average "<<average<<endl;

}
int grader(string answer_key, string responses){
    int scores = 0;
    for (size_t i = 0; i<answer_key.size(); i++){
        if (answer_key.at(i) == responses.at(i))
            scores++;}
    return scores;
}

#endif //AUTOMATIC_GRADER_FUNCTIONS_H
