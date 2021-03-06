object F_main: TF_main
  Left = 0
  Top = 0
  Caption = 'Main'
  ClientHeight = 537
  ClientWidth = 1077
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object DBGrid1: TDBGrid
    Left = 8
    Top = 264
    Width = 609
    Height = 265
    BorderStyle = bsNone
    DataSource = DataModule2.DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'id_supply'
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'type'
        Title.Caption = #1058#1080#1087' '#1087#1086#1089#1090#1072#1074#1082#1080
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'company_name'
        Title.Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1082#1086#1084#1087#1072#1085#1080#1080
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'model'
        Title.Caption = #1052#1086#1076#1077#1083#1100
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'n_documents'
        Title.Caption = #1053#1086#1084#1077#1088' '#1076#1086#1082'-'#1090#1072
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'price'
        Title.Caption = #1062#1077#1085#1072
        Width = 100
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 8
    Top = 8
    Width = 1033
    Height = 185
    BorderStyle = bsNone
    DataSource = DataModule2.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    ParentFont = False
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'id_supplies'
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'company_name'
        Title.Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1082#1086#1084#1087#1072#1085#1080#1080
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'company_direktor'
        Title.Caption = #1054#1073#1088#1072#1097#1072#1090#1089#1103#1050
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'position'
        Title.Caption = #1044#1086#1083#1078#1085#1086#1089#1090#1100
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'adress'
        Title.Caption = #1040#1076#1088#1077#1089#1089
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'sity'
        Title.Caption = #1043#1086#1088#1086#1076
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'region'
        Title.Caption = #1056#1077#1075#1080#1086#1085
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'ind'
        Title.Caption = #1048#1085#1076#1077#1082#1089
        Width = 60
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Side'
        Title.Caption = #1057#1090#1088#1072#1085#1072
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'telephone'
        Title.Caption = #1058#1077#1083#1077#1092#1086#1085
        Width = 100
        Visible = True
      end>
  end
  object Panel1: TPanel
    Left = 256
    Top = 191
    Width = 529
    Height = 50
    TabOrder = 2
    object B_add: TButton
      Left = 16
      Top = 8
      Width = 145
      Height = 33
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1087#1086#1089#1090#1072#1074#1097#1080#1082#1072
      TabOrder = 0
      OnClick = B_addClick
    end
    object B_edit: TButton
      Left = 184
      Top = 8
      Width = 153
      Height = 33
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 1
      OnClick = B_editClick
    end
    object B_delete: TButton
      Left = 359
      Top = 8
      Width = 153
      Height = 33
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 2
      OnClick = B_deleteClick
    end
  end
  object Panel2: TPanel
    Left = 647
    Top = 264
    Width = 225
    Height = 265
    TabOrder = 3
    object Button2: TButton
      Left = 8
      Top = 16
      Width = 209
      Height = 33
      Caption = #1053#1086#1074#1072#1103' '#1087#1086#1089#1090#1072#1074#1082#1072
      TabOrder = 0
      OnClick = Button2Click
    end
    object Button1: TButton
      Left = 8
      Top = 55
      Width = 209
      Height = 33
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 1
    end
    object Button3: TButton
      Left = 8
      Top = 94
      Width = 209
      Height = 33
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 2
    end
  end
end
