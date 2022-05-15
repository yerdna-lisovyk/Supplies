object F_add_supli: TF_add_supli
  Left = 0
  Top = 0
  Caption = #1044#1086#1073#1072#1074#1080#1090#1100
  ClientHeight = 306
  ClientWidth = 330
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnShow = FormShow
  TextHeight = 15
  object Panel1: TPanel
    Left = 9
    Top = 16
    Width = 313
    Height = 273
    TabOrder = 0
    object Label1: TLabel
      Left = 16
      Top = 19
      Width = 111
      Height = 23
      Caption = #1058#1080#1087' '#1087#1086#1089#1090#1072#1074#1082#1080
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 16
      Top = 59
      Width = 94
      Height = 23
      Caption = #1055#1086#1089#1090#1072#1074#1097#1080#1082
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 16
      Top = 99
      Width = 66
      Height = 23
      Caption = #1052#1086#1076#1077#1083#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 16
      Top = 139
      Width = 115
      Height = 23
      Caption = #1053#1086#1084#1077#1088' '#1076#1086#1082'-'#1090#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 16
      Top = 179
      Width = 42
      Height = 23
      Caption = #1062#1077#1085#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object ComboBox1: TComboBox
      Left = 152
      Top = 16
      Width = 145
      Height = 23
      TabOrder = 0
    end
    object ComboBox2: TComboBox
      Left = 152
      Top = 56
      Width = 145
      Height = 23
      TabOrder = 1
    end
    object Button1: TButton
      Left = 16
      Top = 232
      Width = 281
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 2
      OnClick = Button1Click
    end
    object Edit1: TEdit
      Left = 152
      Top = 96
      Width = 145
      Height = 23
      TabOrder = 3
    end
    object CSpinEdit1: TCSpinEdit
      Left = 152
      Top = 142
      Width = 145
      Height = 24
      Ctl3D = True
      ParentCtl3D = False
      TabOrder = 4
    end
    object CSpinEdit2: TCSpinEdit
      Left = 152
      Top = 182
      Width = 145
      Height = 24
      TabOrder = 5
    end
  end
end
