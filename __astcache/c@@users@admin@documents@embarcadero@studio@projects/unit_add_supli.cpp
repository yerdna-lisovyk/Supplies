//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit_add_supli.h"
#include "Unit_main.h"
#include "D_modul.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma resource "*.dfm"
TF_add_supli *F_add_supli;
//---------------------------------------------------------------------------
__fastcall TF_add_supli::TF_add_supli(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TF_add_supli::FormShow(TObject *Sender)
{
	ComboBox1->Items->Clear();
	DataModule2->ADOTable->SQL->Text = "Select * From type_sypply";
	DataModule2->ADOTable->Open();
	for(int i =0;i<DataModule2->ADOTable->RecordCount;i++ )
	{
		ComboBox1->AddItem(DataModule2->ADOTable->FieldByName("type")->AsString,
		(TObject*)DataModule2->ADOTable->FieldByName("id_type")->AsInteger);
		DataModule2->ADOTable->Next();
	}
	DataModule2->ADOTable->Close();
    ComboBox2->Items->Clear();
	DataModule2->ADOTable->SQL->Text = "Select * From suppliers";
	DataModule2->ADOTable->Open();
	for(int i =0;i<DataModule2->ADOTable->RecordCount;i++ )
	{
		ComboBox2->AddItem(DataModule2->ADOTable->FieldByName("company_name")->AsString,
		 (TObject*)DataModule2->ADOTable->FieldByName("id_supplies")->AsInteger);
		DataModule2->ADOTable->Next();
	}
    DataModule2->ADOTable->Close();
}
//---------------------------------------------------------------------------


void __fastcall TF_add_supli::Button1Click(TObject *Sender)
{
	DataModule2->ADOTable->SQL->Text = "Select * From type_sypply";
	DataModule2->ADOTable->Open();
	AnsiString id_type = DataModule2->ADOTable->Lookup("type",ComboBox1->Text,"id_type");
    DataModule2->ADOTable->Close();

	DataModule2->ADOTable->SQL->Text = "Select * From suppliers";
	DataModule2->ADOTable->Open();
	AnsiString id_supplies = DataModule2->ADOTable->Lookup("company_name",ComboBox2->Text,"id_supplies");
	DataModule2->ADOTable->Close();

    if(Button1->Caption == "Добавить")
	{
		DataModule2->ADOSQl->SQL->Text="insert into supply \
		(id_type, id_supplies, model, n_documents, price)\
		values ('"+id_type+"','"+id_supplies+"','"+Edit1->Text+"','"+CSpinEdit1->Value+"',\
		'"+CSpinEdit2->Value+"')";
	}
	DataModule2->ADOSQl->ExecSQL();
	DataModule2->ADOSQl->Close();
	DataModule2->ADOQuery1->Refresh();
	F_add_supli->Hide();
}
//---------------------------------------------------------------------------

