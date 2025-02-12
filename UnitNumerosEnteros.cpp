//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitNumerosEnteros.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormNEnteros *FormNEnteros;
//---------------------------------------------------------------------------
__fastcall TFormNEnteros::TFormNEnteros(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//LIMPIAR TODOS LOS EDITS
void __fastcall TFormNEnteros::MMLimpiarNEnterosClick(TObject *Sender)
{
	Edit1NEnteros->Clear();
	Edit2NEnteros->Clear();
	Edit3NEnteros->Clear();
	Edit4NEnteros->Clear();
}
//---------------------------------------------------------------------------
//SALIR
void __fastcall TFormNEnteros::MMSalirNEnterosClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
//LIMPIAR EDIT 1
void __fastcall TFormNEnteros::Btn1LimpiarNEnterosClick(TObject *Sender)
{
	Edit1NEnteros->Clear();
}
//---------------------------------------------------------------------------
//LIMPIAR EDIT 2
void __fastcall TFormNEnteros::Btn2LimpiarNEnterosClick(TObject *Sender)
{
	Edit2NEnteros->Clear();
}
//---------------------------------------------------------------------------
//LIMPIAR EDIT 3
void __fastcall TFormNEnteros::Btn3LimpiarNEnterosClick(TObject *Sender)
{
	Edit3NEnteros->Clear();
}
//---------------------------------------------------------------------------
//LIMPIAR EDIT 4
void __fastcall TFormNEnteros::Btn4LimpiarNEnterosClick(TObject *Sender)
{
	Edit4NEnteros->Clear();
}
//---------------------------------------------------------------------------
//                              ALGORITMOS
//---------------------------------------------------------------------------
//MOSTRAR LOS PRIMEROS NUMEROS NATURALES
 void Mostar_numeros_naturales(byte n){
	if (n==0) {

	}else{
		Mostar_numeros_naturales(n-1);
		ShowMessage(n);
	}
 }
void __fastcall TFormNEnteros::MMMPrimerosNumerosNaturalesClick(TObject *Sender)
{
	byte a;
	a = StrToInt( InputBox( "* PRIMEROS N N�MEROS NATURALES", "* INGRESE UN N�MERO: ", "0" ) );
	Mostar_numeros_naturales( a );
}
//---------------------------------------------------------------------------
//MOSTRAR LOS PRIMEROS NUMEROS NATURALES INVERTIDOS
 void Mostar_numeros_naturales_invertidos(byte n){
	if (n==0) {

	}else{
		ShowMessage(n);
		Mostar_numeros_naturales_invertidos(n-1);
	}
 }
void __fastcall TFormNEnteros::MMPrimerosNumerosNaturalesInvertidosNEnterosClick(TObject *Sender)
{
	byte a;
	a = StrToInt( InputBox( "* PRIMEROS N N�MEROS NATURALES INVERTIDOS", "* INGRESE UN N�MERO: ", "0" ) );
	Mostar_numeros_naturales_invertidos( a );
}
//---------------------------------------------------------------------------
//MOSTRAR LOS PRIMEROS NUMEROS NATURALES PARES
 void Mostar_numeros_naturales_pares(byte n){
	if (n==0) {

	}else{
		Mostar_numeros_naturales_pares(n-1);
		ShowMessage(n*2);
	}
 }
void __fastcall TFormNEnteros::MMPrimereosNumerosNaturalesParesNEnterosClick(TObject *Sender)
{
	byte a;
	a = StrToInt( InputBox( "* PRIMEROS N N�MEROS NATURALES PARES", "* INGRESE UN N�MERO: ", "0" ) );
	Mostar_numeros_naturales_pares( a );
}
//---------------------------------------------------------------------------
//MOSTRAR LOS PRIMEROS NUMEROS NATURALES IMPARES
 void Mostar_numeros_naturales_impares(byte n){
	if (n==0) {

	}else{
		Mostar_numeros_naturales_impares(n-1);
		ShowMessage(n*2-1);
	}
 }
void __fastcall TFormNEnteros::MMPrimerosNumerosNaturalesImparesNEneterosClick(TObject *Sender)
{
	byte a;
	a = StrToInt( InputBox( "* PRIMEROS N N�MEROS NATURALES IMPARES", "* INGRESE UN N�MERO: ", "0" ) );
	Mostar_numeros_naturales_impares( a );
}
//---------------------------------------------------------------------------
//MOSTRAR LOS PRIMEROS NUMEROS NATURALES IMPARES
