//---------------------------------------------------------------------------

#ifndef Unit_add_supliH
#define Unit_add_supliH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "cspin.h"
//---------------------------------------------------------------------------
class TF_add_supli : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button1;
	TEdit *Edit1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TCSpinEdit *CSpinEdit1;
	TCSpinEdit *CSpinEdit2;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TF_add_supli(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_add_supli *F_add_supli;
//---------------------------------------------------------------------------
#endif
