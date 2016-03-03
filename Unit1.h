//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TPanel *Panel1;
	TPanel *Panel2;
	TButton *Button1;
	TScrollBar *ScrollBar2;
	TScrollBar *ScrollBar1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TPanel *Panel3;
	TComboBox *ComboBox1;
	TColorListBox *ColorListBox1;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Button2;
	TBitBtn *BitBtn1;
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall ScrollBar2Change(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall ColorListBox1Exit(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
   int amplituda,posun;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
