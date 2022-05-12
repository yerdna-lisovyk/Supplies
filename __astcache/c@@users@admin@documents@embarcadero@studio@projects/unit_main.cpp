//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit_main.h"
#include "D_modul.h"
#include "Unit_add.h"
#include "SupliPCH1.h"
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
    F_add->Show();

}
//---------------------------------------------------------------------------


