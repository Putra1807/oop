#include <iostream>

using namespace std;

class Student {
	private:
		int nim;
		string no_reg;
		string prodi;
	
	public:
		void setNim (int nim);
		void SetNoReg (string no_reg);
		void setProdi (string prodi);
		int getNim ();
		string getNoReg ();
		string getProdi ();
};

class Teacher {
	private:
		int nik;
		string fakultas;
	
	public:
		void setNik (int nik);
		int getNik ();
		void SetFakultas (string fakultas);
		string getFakultas ();
		void setData ();
		void displayData ();
};

class Person : protected Teacher, protected Student {
	private:
		string name;
		char gender;
	
	public:
		Person ();
		void setName (string name);
		void setGender (char gender);
		string getName ();
		char getGender ();
};

int main () {
	Person in;
	
	in.setName();
	cout << "Data : " << in.getName();
	
	in.setNik();
	cout << "NIK : " << in.getNik(); 
	
	in.setNim();
	cout << "NIM : " << in.getNim();
	
	in.SetNoReg();
	cout << "No REG : " << in.SetNoReg();
	
	in.setProdi();
	cout << "Prodi : " << in.setProdi();
	
	return 0;
}
