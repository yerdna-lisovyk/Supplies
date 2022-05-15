﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit_add_supli.h"
#include "Unit_main.h"
#include "D_modul.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
		ComboBox1->AddItem(DataModule2->ADOTable->FieldByName("type")->AsString, (TObject*)DataModule2->ADOTable->FieldByName("id_type")->AsInteger);
		DataModule2->ADOTable->Next();
	}
	DataModule2->ADOTable->Close();
    ComboBox2->Items->Clear();
	DataModule2->ADOTable->SQL->Text = "Select * From suppliers";
	DataModule2->ADOTable->Open();
    for(int i =0;i<DataModule2->ADOTable->RecordCount;i++ )
	{
		ComboBox2->AddItem(DataModule2->ADOTable->FieldByName("company_name")->AsString, (TObject*)DataModule2->ADOTable->FieldByName("id_supplies")->AsInteger);
		DataModule2->ADOTable->Next();
	}
    DataModule2->ADOTable->Close();
}
//---------------------------------------------------------------------------

