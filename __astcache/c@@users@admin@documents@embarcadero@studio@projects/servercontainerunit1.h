//----------------------------------------------------------------------------

#ifndef ServerContainerUnit1H
#define ServerContainerUnit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <DataSnap.DSCommonServer.hpp>
#include <DataSnap.DSServer.hpp>
#include <DataSnap.DSTCPServerTransport.hpp>
#include <DataSnap.DSAuth.hpp>
//----------------------------------------------------------------------------
class TServerContainer1 : public TDataModule
{
__published:	// IDE-managed Components
	TDSServer *DSServer1;
	TDSTCPServerTransport *DSTCPServerTransport1;
	TDSServerClass *DSServerClass1;
	void __fastcall DSServerClass1GetClass(TDSServerClass *DSServerClass, TPersistentClass &PersistentClass);
private:	// User declarations
public:		// User declarations
	__fastcall TServerContainer1(TComponent* Owner);
};
//----------------------------------------------------------------------------
extern PACKAGE TServerContainer1 *ServerContainer1;
//----------------------------------------------------------------------------
#endif

