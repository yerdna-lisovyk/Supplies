//---------------------------------------------------------------------------

#ifndef D_modulH
#define D_modulH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDataModule2 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *DB_Connection;
	TDataSource *DataSource1;
	TADOQuery *ADOQuery1;
	TADOQuery *ADOSQl;
	TADOQuery *ADOQuery2;
	TDataSource *DataSource2;
	TADOQuery *ADOTable;
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
#endif
