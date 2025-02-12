//---------------------------------------------------------------------------

#ifndef UnitNumerosEnterosH
#define UnitNumerosEnterosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFormNEnteros : public TForm
{
__published:	// IDE-managed Components
	TPanel *PanelNEnteros;
	TLabel *LabelNEnteros;
	TEdit *Edit1NEnteros;
	TEdit *Edit2NEnteros;
	TEdit *Edit3NEnteros;
	TEdit *Edit4NEnteros;
	TMainMenu *MainMenuNEnteros;
	TButton *Btn1LimpiarNEnteros;
	TButton *Btn2LimpiarNEnteros;
	TButton *Btn3LimpiarNEnteros;
	TButton *Btn4LimpiarNEnteros;
	TMenuItem *MMInicioNEnteros;
	TMenuItem *MMLimpiarNEnteros;
	TMenuItem *MMSalirNEnteros;
	TImage *Image1;
	TMenuItem *MMHerramientasNEnteros;
	TMenuItem *MMEjerciciosNEnteros;
	TMenuItem *MMMostrarNEnteros;
	TMenuItem *MMEliminarNEnteros;
	TMenuItem *MMContarNEnteros;
	TMenuItem *MMMPrimerosNumerosNaturales;
	TMenuItem *MMPrimerosNumerosNaturalesInvertidosNEnteros;
	TMenuItem *MMPrimereosNumerosNaturalesParesNEnteros;
	TMenuItem *MMPrimerosNumerosNaturalesImparesNEneteros;
	void __fastcall MMLimpiarNEnterosClick(TObject *Sender);
	void __fastcall MMSalirNEnterosClick(TObject *Sender);
	void __fastcall Btn1LimpiarNEnterosClick(TObject *Sender);
	void __fastcall Btn2LimpiarNEnterosClick(TObject *Sender);
	void __fastcall Btn3LimpiarNEnterosClick(TObject *Sender);
	void __fastcall Btn4LimpiarNEnterosClick(TObject *Sender);
	void __fastcall MMMPrimerosNumerosNaturalesClick(TObject *Sender);
	void __fastcall MMPrimerosNumerosNaturalesInvertidosNEnterosClick(TObject *Sender);
	void __fastcall MMPrimereosNumerosNaturalesParesNEnterosClick(TObject *Sender);
	void __fastcall MMPrimerosNumerosNaturalesImparesNEneterosClick(TObject *Sender);




private:	// User declarations
public:		// User declarations
	__fastcall TFormNEnteros(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormNEnteros *FormNEnteros;
//---------------------------------------------------------------------------
#endif
