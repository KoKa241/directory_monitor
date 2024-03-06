#include "pch.h"
#include <Windows.h>
using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;
using namespace System::Threading;
using namespace std;








[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  CppCLRWinFormsProject::Form1^ myForm = gcnew CppCLRWinFormsProject::Form1();
  Application::Run(myForm);
  
  
  return 0;
}