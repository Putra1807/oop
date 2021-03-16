#include<iostream>
#include<string>

using namespace std;
struct Mahasiswa
{
string Nama;
string NilaiAkhir;
};

class NilaiMahasiswa
{
private:
    Student Siswa;

    double attendance, assignment, quiz, mid, final;
    double finalGrade;
    string NilaiAkhir;

public:
	
    void inputAssignment(); 
	void inputQuiz();
    void inputAttendance();
    void inputMidExam();
    void inputFinalExam();
    

    double getAssignment();
    double getQuiz();
    double getAttendance();
    double getMid();
    double getFinal();

    double hitungPersen(double grade, double TotalPoint, double TotalPersen);

double setFinalNumericGrade(double newFinalGrade);
string setFinalLetterGrade(string newFinalLetterGrade);
string calcFinalLetterGrade(double finalGrade);
};

double NilaiMahasiswa::getAssignment() { return assignment; }
double NilaiMahasiswa::getQuiz(){ return quiz; }
double NilaiMahasiswa::getAttendance() { return attendance; }
double NilaiMahasiswa::getMid() { return mid; }
double NilaiMahasiswa::getFinal() { return final; }
double NilaiMahasiswa::hitungPersen(double grade, double TotalPoint, double TotalPersen)
{
    double totalPercent = (grade * TotalPoint) / TotalPersen;
    return totalPercent;
}

double NilaiMahasiswa::setFinalNumericGrade(double newFinalGrade) {
  return finalGrade = newFinalGrade;
}

string NilaiMahasiswa::calcFinalLetterGrade(double finalGrade)
{
  string grade;
  if (finalGrade > 90)
  {
    grade = "A";
    return grade;
  } 
  else if (finalGrade >= 85 && finalGrade <= 90)
  {
    grade = "A-";
    return grade;
  } 
  else if (finalGrade >= 82 && finalGrade < 85)
  {
    grade = "B+";
    return grade;
  } 
  else if (finalGrade >= 78 && finalGrade < 82)
  {
    grade = "B";
    return grade;
  }
  else if (finalGrade >= 75 && finalGrade < 78)
  {
    grade = "B-";
    return grade;
  } 
  else if (finalGrade > 69 && finalGrade < 75)
  {
    grade = "C+";
    return grade;
  } 
  else if (finalGrade > 66 && finalGrade < 70)
  {
    grade = "C";
    return grade;
  } 
  else if (finalGrade > 59 && finalGrade < 67)
  {
    grade = "C-";
    return grade;
  } 
  else if (finalGrade > 39 && finalGrade < 60)
  {
    grade = "D";
    return grade;
  } 
  else {
    grade = "F";
    return grade;
  }

}


string NilaiMahasiswa::setFinalLetterGrade(string newFinalLetterGrade) {
   return NilaiAkhir = newFinalLetterGrade;
}

void NilaiMahasiswa::inputAttendance()
{
    cout << "Masukkan attendance grade: ";
    cin >> attendance;
}

void NilaiMahasiswa::inputQuiz()
{
    cout << "Masukkan quiz grades : ";
    cin >> quiz;
}



void NilaiMahasiswa::inputAssignment()
{
    cout << "Masukkan assignment grades: ";
    cin >> assignment;
}

void NilaiMahasiswa::inputMidExam()
{
    cout << "Masukkan mid grade: ";
    cin >> mid;
}

void NilaiMahasiswa::inputFinalExam()
{
    cout << "Masukkan final grade: ";
    cin >> final;
}
int main()
{
    Mahasiswa Siswa;
    int studentNumbers;
    cout << "Input student: ";
    cin>>studentNumbers;
    for (int i = 0; i < studentNumbers; i++) {
      cout << "Masukkan Nama: ";
      cin >> Siswa.Nama;

      NilaiMahasiswa student;

      student.inputAttendance();
      student.inputQuiz();
      student.inputAssignment();
      student.inputMidExam();
      student.inputFinalExam();

      cout << "Attendance \t: " << student.getAttendance() << endl;
      cout << "Quiz \t\t: "<< student.getQuiz() << endl;
      cout << "Assignment \t: " << student.getAssignment() << endl;
      cout << "Mid \t\t: " << student.getMid() << endl;
      cout << "Final Exam \t: " << student.getFinal() << endl;

      double attendancePercent = student.hitungPersen(student.getAttendance(), 10,100);
      double quizPercent = student.hitungPersen(student.getQuiz(), 10, 100);
      double assignmentPercent = student.hitungPersen(student.getAssignment(), 20,100);
      double midtermPercent = student.hitungPersen(student.getMid(), 30,100);
      double finalPercent = student.hitungPersen(student.getFinal(), 30,100);
      double finalNumGrade = quizPercent + midtermPercent + finalPercent + attendancePercent + assignmentPercent;

      student.setFinalNumericGrade(finalNumGrade);

      string letterGrade = student.calcFinalLetterGrade(finalNumGrade);

      student.setFinalLetterGrade(letterGrade);

      Siswa.NilaiAkhir = letterGrade;

      cout << "Nama : " << Siswa.Nama << endl;
      cout << "Nilai Akhir : " << Siswa.NilaiAkhir << endl<<endl;
    }

    return 0;
}
