//---------------------------------------------------------------------------

#ifndef UnitPrincipalH
#define UnitPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFormPrincipal : public TForm
{
__published:	// IDE-managed Components
	TPanel *PanelPrincipal;
	TImage *ImagePrincipal;
	TButton *BtnNumeros;
	TButton *BtnSeries;
	TButton *BtnCadenas;
	TButton *BtnVectores;
	TButton *BtnMatrices;
	void __fastcall BtnNumerosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
#endif
