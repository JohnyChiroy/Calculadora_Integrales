#include "inicio.h"
using namespace calculadoracalc;

[STAThreadAttribute]

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew inicio());
	return 0;
}


