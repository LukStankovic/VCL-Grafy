//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
amplituda= ScrollBar2->Position;
posun= ScrollBar1->Position;
Label1->Caption=FloatToStr(ScrollBar1->Position/100.0);    //100 pixelu je jedna jednotka
Label2->Caption=FloatToStr(ScrollBar2->Position/100.0);    

Image1->Canvas->Pen->Color=clMaroon;
Image1->Canvas->MoveTo(2,Image1->Height/2);
Image1->Canvas->LineTo(Image1->Width-2,Image1->Height / 2);   //osa x
Image1->Canvas->MoveTo(Image1->Width/2,2);
Image1->Canvas->LineTo(Image1->Width/2,Image1->Height-2);    // osa y

Image1->Canvas->Font->Color=clMaroon;
Image1->Canvas->TextOut(Image1->Width/2-9,Image1->Height/2+2,"0");     //popis os
Image1->Canvas->TextOut(Image1->Width-30,Image1->Height / 2+2,"osa x");
Image1->Canvas->TextOut(Image1->Width/2+5, 2,"osa y");

}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
   posun= ScrollBar1->Position;
   Label1->Caption=FloatToStr(ScrollBar1->Position/100.0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar2Change(TObject *Sender)
{
   amplituda= ScrollBar2->Position;
   Label2->Caption=FloatToStr(ScrollBar2->Position/100.0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
  switch(ComboBox1->ItemIndex)          //styl èáry
  {
	case 0:  Image1->Canvas->Pen->Style = psSolid;
			 break;
	case 1:  Image1->Canvas->Pen->Style = psDash;
			 break;
	case 2:  Image1->Canvas->Pen->Style = psDot;
			 break;
	case 3:  Image1->Canvas->Pen->Style = psDashDot;
			 break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ColorListBox1Exit(TObject *Sender)
{
  Image1->Canvas->Pen->Color=ColorListBox1->Selected;   //barva èáry
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
	 Image1->Canvas->Brush->Color=clWhite;               // nastavim barvu pozadi
	 Image1->Picture->Bitmap->SetSize(Image1->Width,Image1->Height);   // prispusobim rozmery Bitmapy rozmerum Image

	 Image1->Canvas->Brush->Color=clWhite;
	 Image1->Canvas->FillRect(Rect(0,0,Image1->Width,Image1->Height));

	 Image1->Canvas->Pen->Color=clMaroon;
	 Image1->Canvas->MoveTo(2,Image1->Height/2);
	 Image1->Canvas->LineTo(Image1->Width-2,Image1->Height / 2);   //osa x
	 Image1->Canvas->MoveTo(Image1->Width/2,2);
	 Image1->Canvas->LineTo(Image1->Width/2,Image1->Height-2);    // osa y

	 Image1->Canvas->Font->Color=clMaroon;
	 Image1->Canvas->TextOut(Image1->Width/2-9,Image1->Height/2+2,"0");     //popis os
	 Image1->Canvas->TextOut(Image1->Width-30,Image1->Height / 2+2,"osa x");
	 Image1->Canvas->TextOut(Image1->Width/2+5, 2,"osa y");
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
     Image1->Canvas->Brush->Color=clWhite;
	 Image1->Canvas->FillRect(Rect(0,0,Image1->Width,Image1->Height));

	 Image1->Canvas->Pen->Color=clMaroon;
	 Image1->Canvas->MoveTo(2,Image1->Height/2);
	 Image1->Canvas->LineTo(Image1->Width-2,Image1->Height / 2);   //osa x
	 Image1->Canvas->MoveTo(Image1->Width/2,2);
	 Image1->Canvas->LineTo(Image1->Width/2,Image1->Height-2);    // osa y

	 Image1->Canvas->Font->Color=clMaroon;
	 Image1->Canvas->TextOut(Image1->Width/2-9,Image1->Height/2+2,"0");     //popis os
	 Image1->Canvas->TextOut(Image1->Width-30,Image1->Height / 2+2,"osa x");
	 Image1->Canvas->TextOut(Image1->Width/2+5, 2,"osa y");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//FCE SINUS
	int x,y;
	y = int(amplituda*sin((-Image1->Width/2)*3.14/180));

	//POÈÁTEÈNÍ BOD

	Image1->Canvas->MoveTo(0,Image1->Height/2-y-posun);

	for(x=0;x<Image1->Width;x++){
		y = int(amplituda*sin((x-Image1->Width/2)*3.14/180));
		Image1->Canvas->LineTo(x,Image1->Height/2-y-posun);
	}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
	//FCE COSINUS
	int x,y;
	y = int(amplituda*cos((-Image1->Width/2)*3.14/180));

	//POÈÁTEÈNÍ BOD

	Image1->Canvas->MoveTo(0,Image1->Height/2-y-posun);

	for(x=0;x<Image1->Width;x++){
		y = int(amplituda*cos((x-Image1->Width/2)*3.14/180));
		Image1->Canvas->LineTo(x,Image1->Height/2-y-posun);
	}
}
//---------------------------------------------------------------------------

