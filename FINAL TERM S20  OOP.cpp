#include<iostream>
#include<fstream>
using namespace std;
class teacher
{
private:
int teacher_id;
string teacher_name;
public:
string roll;
string name;
string attendence;
teacher()
{
}
void setter(int i, string
n)
{
teacher_id=i;
teacher_name=n;
}
int getter1()
{
return this->teacher_id;
}
string getter2()
{
return this->teacher_name;
}
void menu()
{
int op;
cout<<"\n\n\n\t\t\t\t---------SERVICES----------"<<endl;
cout<<"\t\t\t\t1->Display all record"<<endl;
cout<<"\t\t\t\t2->Display active record"<<endl;
cout<<"\t\t\t\t3->Search record"<<endl;
cout<<"\t\t\t\t4->Add record"<<endl;
cout<<"\t\t\t\t5->Update record"<<endl;
cout<<"\t\t\t\t6->Delete record"<<endl;
cout<<"\t\t\t\t7->exit"<<endl;
cout<<"enter choice"<<endl;
cin>>op;
switch(op)
{
case 1:
displayAll();
break;
case 2:
display_active();
break;
case 3:
search();
break;
case 4:
add();
break;
case 5:
update();
break;
case 6:
Delete();
break;
case 7:
exit(0);
default:
cout<<"invalid op"<<endl;
}
}
void displayAll()
{
ifstream file;
file.open("rec.txt");
while(!file.eof())
{
file>>roll>>name>>attendence;
cout<<roll<<" "<<name<<" "<<attendence<<endl;
getline(file,roll);
}
file.close();
}
void display_active()
{
ifstream file;
file.open("rec2.txt");
while(!file.eof())
{
file>>roll>>name>>attendence;
cout<<roll<<" "<<name<<" "<<attendence<<endl;
getline(file,roll);
}
file.close();
}
void search()
{
int st_id;
 cout<<"enter id to find record"<<endl;
cin>>st_id;
ifstream file2;
file2.open("rec.txt");

while(!file2.eof()){

 if(st_id == 4)
file2>>roll>>name>>attendence
;
 cout<<roll<<" "<<name<<" "<<attendence<<endl;
}
file2.close();
}
void add()
{
cout<<"enter roll"<<endl;
cin>>roll;
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter attendence"<<endl;
cin>>attendence;
ofstream file;
file.open("rec.txt",ios::app);
file<<roll<<" "<<name<<""<<attendence<<endl;
file.close();
}
void update()
{int id;
cout<<"enter id to update record"<<endl;
cin>>roll;
ifstream file3;
file3.open("rec.txt");
while(!file3.eof())
{
if(id==3)
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter attendence"<<endl;
cin>>attendence;
file3>>name>>attendence;
cout<<roll<<" "<<name<<" "<<attendence<<endl;
}
file3.close();
}
Delete()
{
cout<<"enter roll"<<endl;
cin>>roll;
ifstream file;
file.open("rec.txt");
delete file;
file.close();
}
};
class course:public teacher
{
 private:
 static int course_code;
 string course_title;
 public:
 course()
 {

 }
 void set(int c, string ct)
 {
 course_code=c;
 course_title=ct;
 }
 int get1()
 {
 return this->course_code;
 }
 string get2()
 {
 return this->course_title;
 }

};
class student:public teacher
{
private:
int student_roll;
string student_name;
string student_course;
public:
student()
{
}
void set2(int r, string
sn, string sc)
{
student_roll=r;
student_name=sn;
student_course=sc;
}
int get3()
{
return this->student_roll;
}
string get4()
{
return this->student_name;
return this->student_course;
}
};
int main()
{ 
int x,y;
string z,v;
teacher t;
t.menu();
course c;
student s;
}
