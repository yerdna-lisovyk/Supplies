//---------------------------------------------------------------------------

#ifndef Unit_mainH
#define Unit_mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TF_main : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TPanel *Panel1;
	TPanel *Panel2;
	TButton *B_add;
	TButton *Button2;
	TButton *B_edit;
	TButton *B_delete;
	void __fastcall B_addClick(TObject *Sender);
	void __fastcall B_editClick(TObject *Sender);
	void __fastcall B_deleteClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    int id;
	__fastcall TF_main(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_main *F_main;
//---------------------------------------------------------------------------
#endif
