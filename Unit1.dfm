object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Grafy'
  ClientHeight = 601
  ClientWidth = 798
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 798
    Height = 433
    Align = alTop
    ExplicitWidth = 994
  end
  object Panel1: TPanel
    Left = 0
    Top = 433
    Width = 798
    Height = 168
    Align = alClient
    Color = 12958567
    TabOrder = 0
    object Panel2: TPanel
      Left = 16
      Top = 15
      Width = 337
      Height = 137
      Color = 8314504
      TabOrder = 0
      object Label1: TLabel
        Left = 78
        Top = 30
        Width = 31
        Height = 13
        Caption = 'Label1'
      end
      object Label2: TLabel
        Left = 231
        Top = 29
        Width = 31
        Height = 13
        Caption = 'Label2'
      end
      object Label3: TLabel
        Left = 32
        Top = 18
        Width = 29
        Height = 13
        Caption = 'Posun'
      end
      object Label4: TLabel
        Left = 178
        Top = 17
        Width = 47
        Height = 13
        Caption = 'Amplituda'
      end
      object Button1: TButton
        Left = 78
        Top = 88
        Width = 75
        Height = 25
        Caption = 'sinus'
        TabOrder = 0
      end
      object ScrollBar2: TScrollBar
        Left = 184
        Top = 48
        Width = 121
        Height = 17
        Max = 200
        PageSize = 0
        Position = 100
        TabOrder = 1
        OnChange = ScrollBar2Change
      end
      object ScrollBar1: TScrollBar
        Left = 32
        Top = 49
        Width = 121
        Height = 17
        Min = -100
        PageSize = 0
        TabOrder = 2
        OnChange = ScrollBar1Change
      end
      object Button2: TButton
        Left = 183
        Top = 88
        Width = 75
        Height = 25
        Caption = 'cosinus'
        TabOrder = 3
      end
    end
    object Panel3: TPanel
      Left = 480
      Top = 14
      Width = 305
      Height = 139
      Color = 11064653
      TabOrder = 1
      object Label5: TLabel
        Left = 16
        Top = 10
        Width = 42
        Height = 13
        Caption = 'Typ '#269#225'ry'
      end
      object Label6: TLabel
        Left = 144
        Top = 10
        Width = 52
        Height = 13
        Caption = 'Barva '#269#225'ry'
      end
      object ComboBox1: TComboBox
        Left = 16
        Top = 29
        Width = 105
        Height = 21
        ItemHeight = 13
        ItemIndex = 0
        TabOrder = 0
        Text = 'pln'#225
        OnChange = ComboBox1Change
        Items.Strings = (
          'pln'#225
          #269#225'rkovan'#225
          'te'#269'kovan'#225
          #269#225'rkote'#269'kovan'#225)
      end
      object ColorListBox1: TColorListBox
        Left = 144
        Top = 29
        Width = 121
        Height = 102
        Style = [cbStandardColors]
        ItemHeight = 16
        TabOrder = 1
        OnExit = ColorListBox1Exit
      end
    end
    object BitBtn1: TBitBtn
      Left = 359
      Top = 15
      Width = 115
      Height = 138
      Caption = 'Vy'#269'isti'
      TabOrder = 2
      OnClick = BitBtn1Click
      Kind = bkRetry
    end
  end
end
