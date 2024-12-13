// ProjectLessonPractice30K.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Video {
public:
	void show() {
		cout << "Video Showing Up" << endl;
	}
};

class Process {
public:
	void Processing() {
		cout << "Process is working" << endl;
	}
};

class Operative {
public:
	void OperativeMemory() {
		cout << "OperativeMemory is working" << endl;
	}
};

class MaterinskaOperativka {
public:
	void Materinka() {
		cout << "Materinska is working" << endl;
	}
};

class Pc {
private:
	Video video;
	Process process;
	Operative operative;
	MaterinskaOperativka Materinka;
public:
	void StartPC() {
		video.show();
		process.Processing();
		operative.OperativeMemory();
		Materinka.Materinka();
	}

};
int main()
{
	Pc obj;
	obj.StartPC();
}


