//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit_main.h"
#include "D_modul.h"
#include "Unit_add.h"
#include "SupliPCH1.h"
#include "Unit_add_supli.h"
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



void __fastcall TF_main::B_addClick(TObject *Sender)
{
    F_add->Button1->Caption= "????????";
	F_add->Show();
}
//---------------------------------------------------------------------------




void __fastcall TF_main::B_editClick(TObject *Sender)
{
    F_add->Button1->Caption= "?????????????";
	id=DataModule2->ADOQuery2->FieldByName("id_supplies")->Value;
	F_add->Edit1->Text=DataModule2->ADOQuery2->FieldByName("company_name")->AsString;
	F_add->Edit2->Text=DataModule2->ADOQuery2->FieldByName("company_direktor")->AsString;
	F_add->Edit3->Text=DataModule2->ADOQuery2->FieldByName("position")->AsString;
	F_add->Edit4->Text=DataModule2->ADOQuery2->FieldByName("adress")->AsString;
	F_add->Edit5->Text=DataModule2->ADOQuery2->FieldByName("sity")->AsString;
	F_add->Edit6->Text=DataModule2->ADOQuery2->FieldByName("region")->AsString;
	F_add->Edit7->Text=DataModule2->ADOQuery2->FieldByName("ind")->AsString;
	F_add->Edit8->Text=DataModule2->ADOQuery2->FieldByName("Side")->AsString;
	F_add->Edit9->Text=DataModule2->ADOQuery2->FieldByName("telephone")->AsString;
	F_add->Show();

}
//---------------------------------------------------------------------------


void __fastcall TF_main::B_deleteClick(TObject *Sender)
{
   	String company = DataModule2->ADOQuery2->FieldByName("company_name")->AsString;
	auto buttonSelected = MessageDlgPos("?? ????? ?????? ??????? '"+company+"'",mtConfirmation, mbOKCancel, 0, 20, 100);
	if(buttonSelected ==	mrOk)
	{
		DataModule2->ADOSQl->SQL->Text = "Delete From suppliers where id_supplies = :id";
		DataModule2->ADOSQl->Parameters->ParamByName("id")->Value= F_main->id;
        DataModule2->ADOSQl->ExecSQL();
		DataModule2->ADOSQl->Close();
		DataModule2->ADOQuery2->Refresh();
	}
}
//---------------------------------------------------------------------------

void __fastcall TF_main::Button2Click(TObject *Sender)
{
    F_add_supli->Show();
}
//---------------------------------------------------------------------------


