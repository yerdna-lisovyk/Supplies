object F_main: TF_main
  Left = 0
  Top = 0
  Caption = 'Main'
  ClientHeight = 537
  ClientWidth = 1048
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object DBGrid1: TDBGrid
    Left = 8
    Top = 344
    Width = 393
    Height = 185
    DataSource = DataModule2.DataSource1
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
        Title.Caption = #8470
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'id_type'
        Title.Caption = #1058#1080#1087
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'id_supplies'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'model'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'n_documents'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'price'
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 8
    Top = 8
    Width = 993
    Height = 177
    DataSource = DataModule2.DataSource2
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
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1057#1027'ompany_name'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1057#1027'ompany_direktor'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'position'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'adress'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'sity'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'region'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'ind'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Side'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'telephone'
        Width = 100
        Visible = True
      end>
  end
  object Panel1: TPanel
    Left = 8
    Top = 191
    Width = 993
    Height = 50
    TabOrder = 2
  end
end
