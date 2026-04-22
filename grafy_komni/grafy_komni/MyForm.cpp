#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	grafykomni::MyForm form; //grafykomni namespace na samej gorze w MyForm.h
	Application::Run(% form);
}