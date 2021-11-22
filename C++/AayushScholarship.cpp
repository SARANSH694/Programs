// Aayush studies in Teswan National University. Now is the time for exam results. Aayush similar to other students, hopes that his scores in 5 subjects in the exam could fetch him a scholarship for his GRE preparation.
// The following simple rules are used to find whether he is eligible to receive scholarship:

// • University follows 5 point grading system. In an exam, a student can receive any score from 2 to 5. 2 is called an F grade, meaning that student has failed that exam.
// • Student should not have fail any of the exams.
// • Student must obtain a full score in some of his/her exams to show that he/she is excellent in some of the subjects.
// • He/She must have a grade point average not less than 4.0
// You are given information regarding how Aayush performed in those 5 subjects . Help him determine whether he will receive the scholarship or not

// Input format
// The input contains 5 space separated integers denoting Aayush’s 5 subjects score in the exam

// Output format
// Output a single line - "Yes" (without quotes) if Aayush will receive scholarship, or "No" (without quotes) otherwise.
#include<iostream>
using namespace std;
int main(){
    float a[5],sum=0;
    bool flag =1;
    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]<=2)
            flag = 0;
        sum += a[i];
    }
    float avg = sum /5;
    
    if(avg >= 4.0 && flag==1)
    cout<<"Yes";
    else 
    cout<<"No";
    
    
}