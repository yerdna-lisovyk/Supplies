//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit_main.cpp", F_main);
USEFORM("Unit_add.cpp", F_add);
USEFORM("D_modul.cpp", DataModule2); /* TDataModule: File Type */
USEFORM("Unit_add_supli.cpp", F_add_supli);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TF_main), &F_main);
		Application->CreateForm(__classid(TDataModule2), &DataModule2);
		Application->CreateForm(__classid(TF_add), &F_add);
		Application->CreateForm(__classid(TF_add_supli), &F_add_supli);
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
