//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit_add.h"
#include "Unit_main.h"
#include "D_modul.h"
#include "SupliPCH1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_add *F_add;
//---------------------------------------------------------------------------
__fastcall TF_add::TF_add(TComponent* Owner)
	: TForm(Owner)
{
}
void __fastcall TF_add::ClearEdit(TObject *Sender)
{
	Edit1->Text= "";
	Edit2->Text= "";
	Edit3->Text= "";
	Edit4->Text= "";
	Edit5->Text= "";
	Edit6->Text= "";
	Edit7->Text= "";
	Edit8->Text= "";
    Edit9->Text= "";
}
//---------------------------------------------------------------------------
void __fastcall TF_add::Button1Click(TObject *Sender)
{
	if(Button1->Caption == "????????")
	{
		DataModule2->ADOSQl->SQL->Text="insert into suppliers \
		(company_name,company_direktor,	position,adress,sity,region,ind,Side,telephone)\
		values ('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"',\
		'"+Edit6->Text+"','"+Edit7->Text+"','"+Edit8->Text+"','"+Edit9->Text+"')";
	}else
	{
		DataModule2->ADOSQl->SQL->Text="UPDATE suppliers \
		set company_name = '"+Edit1->Text+"',\
		company_direktor = '"+Edit2->Text+"',\
		position = '"+Edit3->Text+"',\
		adress = '"+Edit4->Text+"',\
		sity = '"+Edit5->Text+"',\
		region = '"+Edit6->Text+"',\
		ind = '"+Edit7->Text+"',\
		Side = '"+Edit8->Text+"',\
		telephone = '"+Edit9->Text+"'\
		WHERE id_supplies = :id";
		DataModule2->ADOSQl->Parameters->ParamByName("id")->Value= F_main->id;
        F_main->id= 0;
	}
	DataModule2->ADOSQl->ExecSQL();
	DataModule2->ADOSQl->Close();
	DataModule2->ADOQuery2->Refresh();
	F_add->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TF_add::FormHide(TObject *Sender)
{
    ClearEdit(Sender);
}
//---------------------------------------------------------------------------

