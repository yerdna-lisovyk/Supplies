//---------------------------------------------------------------------------

#ifndef Unit_addH
#define Unit_addH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TF_add : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *Button1;
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit4;
	TLabel *Label5;
	TEdit *Edit5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ClearEdit(TObject *Sender);
	void __fastcall FormHide(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TF_add(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_add *F_add;
//---------------------------------------------------------------------------
#endif
