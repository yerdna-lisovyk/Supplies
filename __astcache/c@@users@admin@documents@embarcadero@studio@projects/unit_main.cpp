//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit_main.h"
#include "D_modul.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_main *F_main;
//---------------------------------------------------------------------------
__fastcall TF_main::TF_main(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TF_main::Button1Click(TObject *Sender)
{
    DataModule2->ADOSQl->SQL->Text = "";
}
//---------------------------------------------------------------------------

