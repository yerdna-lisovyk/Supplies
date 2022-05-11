//----------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#if ! defined(__linux__)
#include <tchar.h>
#endif
#include <stdio.h>
#include <memory>
#include <string>
#include "ServerMethodsUnit1.h"

#include "ServerContainerUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

//---------------------------------------------------------------------------

TServerContainer1 *ServerContainer1;

//---------------------------------------------------------------------------
__fastcall TServerContainer1::TServerContainer1(TComponent* Owner)
	: TDataModule(Owner)
{
}
//----------------------------------------------------------------------------
void __fastcall TServerContainer1::DSServerClass1GetClass(TDSServerClass *DSServerClass,
          TPersistentClass &PersistentClass)
{
	PersistentClass =  __classid(TServerMethods1);
}
//----------------------------------------------------------------------------

//---------------------------------------------------------------------------

