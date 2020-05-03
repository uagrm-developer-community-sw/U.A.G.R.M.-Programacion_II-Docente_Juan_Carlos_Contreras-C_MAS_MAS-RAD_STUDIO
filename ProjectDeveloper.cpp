//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitPrincipal.cpp", FormPrincipal);
USEFORM("UnitNumerosEnteros.cpp", FormNEnteros);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFormPrincipal), &FormPrincipal);
		Application->CreateForm(__classid(TFormNEnteros), &FormNEnteros);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
