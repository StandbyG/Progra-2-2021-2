#include "FrmMain.h"

using namespace DrawingFigures;

int main() {
	//FrmMain^ frm = gcnew FrmMain();
	Application::Run(gcnew FrmMain());
	return 0;
}

//Managed Class -> Clases Administradas
//Graphics^ g; (alt + 94)
//g = gcnew Graphics();
//ref class Graphics
//Int16, Int32, Int64, Char, String, Bool;

//Std Class
//Person* p;
//p = new Person();
//class Person
//int, char, string, bool, short;