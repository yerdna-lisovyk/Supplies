//---------------------------------------------------------------------------

#ifndef ServerMethodsUnit1H
#define ServerMethodsUnit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <DataSnap.DSServer.hpp>
#include <Datasnap.DSProviderDataModuleAdapter.hpp>
//---------------------------------------------------------------------------
class TServerMethods1 : public TDSServerModule
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TServerMethods1(TComponent* Owner); 
	System::UnicodeString EchoString(System::UnicodeString value);
	System::UnicodeString  ReverseString(System::UnicodeString value);
};
//---------------------------------------------------------------------------
extern PACKAGE TServerMethods1 *ServerMethods1;
//---------------------------------------------------------------------------
#endif

