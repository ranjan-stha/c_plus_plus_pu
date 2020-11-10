#include<iostream>
using namespace std;

/**
 * Structure and Pointer using DMA
 * 
 * author: ranjan-stha
 */

struct Student{
    int roll_no;
    float total_marks;
};

int main(){
    int n;
    
    cout << "How many students ";
    cin >> n;
    
    struct Student *stu = new Student[n];
    
    for(int i=0;i<n;i++){
        cout << "Enter details of Student " << i+1 << endl;
        cout << "Enter roll number ";
        cin >> stu[i].roll_no;
        cout << "Enter total marks ";
        cin >> stu[i].total_marks;
    }
    
    // Display the Students records
    cout << "**** Students' Records *****" << endl;
    cout << "RollNo" << "\t\t" << "Total Marks" << endl;
    for(int i=0;i<n;i++){
        cout << stu[i].roll_no << "\t\t" << stu[i].total_marks << endl;
    }
    
    delete [] stu;  // deletes the array pointer references
    
    return 0;
}