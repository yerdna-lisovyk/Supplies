﻿//---------------------------------------------------------------------------

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
//---------------------------------------------------------------------------
void __fastcall TF_add::Button1Click(TObject *Sender)
{
	DataModule2->ADOSQl->SQL->Text="insert into suppliers \
	(company_name,company_direktor,	position,adress,sity,region,ind,Side,telephone)\
	values ('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"',\
	'"+Edit6->Text+"','"+Edit7->Text+"','"+Edit8->Text+"','"+Edit9->Text+"')";
	DataModule2->ADOSQl->ExecSQL();
	DataModule2->ADOSQl->Close();
	Edit1->Text
	F_add->Hide();
}
//---------------------------------------------------------------------------