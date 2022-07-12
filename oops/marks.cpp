#include<iostream>
using namespace std;
class student
{
private:
    int roll;
    string Name;
    int MathMarks;
    int Phymarks;
    int ChemMarks;
    public:
    student(int r,string N,int m,int p,int c);
    int totalMarks();
    char grade();
    ~student();
};
int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"enter roll number of the student"<<endl;
    cin >> roll;
    cout << "enter name of the student" << endl;
    cin>>name;
    cout<<"enter marks of the student"<<endl;
    cin>>m>>p>>c;
    student s(roll,name,m,p,c);
    cout<<"total marks "<<s.totalMarks();
    cout<<"grade"<<s.grade();
    




}

student::student(int r,string N,int m,int p,int c)
{
    roll=r;
    Name=N;
    this->MathMarks=m;
    this->Phymarks=p;
    this->ChemMarks=c;
}
int student::totalMarks()
{
    return MathMarks+Phymarks+ChemMarks;
}
char student::grade()
{
    float average = totalMarks()/3;
    if(average>60)
    return 'A';
    else if(average>=40 && average<60)
    return 'B';
    else return 'c';

}














