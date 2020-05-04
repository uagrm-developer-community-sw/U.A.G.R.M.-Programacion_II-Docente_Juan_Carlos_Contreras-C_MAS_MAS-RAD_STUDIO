//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitPrincipal.h"
#include "UnitNumerosEnteros.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
__fastcall TFormPrincipal::TFormPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::BtnNumerosClick(TObject *Sender)
{
	FormNEnteros->Show();
}
//---------------------------------------------------------------------------

