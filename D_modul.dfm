object DataModule2: TDataModule2
  Height = 629
  Width = 757
  PixelsPerInch = 120
  object DB_Connection: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Password=root;Persist Security Info=True;User' +
      ' ID=root;Extended Properties="DSN=Suply;SERVER=localhost;UID=roo' +
      't;PWD=root;DATABASE=suppliers;PORT=3306";Initial Catalog=supplie' +
      'rs'
    LoginPrompt = False
    Left = 48
    Top = 32
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 72
    Top = 144
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = DB_Connection
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'SELECT '#9'a.id_supply,c.type,b.company_name,a.model,a.n_documents,' +
        'a.price'
      'From supply a,type_sypply c,suppliers b'
      'WHERE a.id_type = c.id_type AND a.id_supplies = b.id_supplies')
    Left = 200
    Top = 136
  end
  object ADOSQl: TADOQuery
    Connection = DB_Connection
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * From supply')
    Left = 80
    Top = 264
  end
  object ADOQuery2: TADOQuery
    Active = True
    Connection = DB_Connection
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * From suppliers')
    Left = 344
    Top = 144
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 448
    Top = 144
  end
  object ADOTable: TADOQuery
    Connection = DB_Connection
    Parameters = <>
    Left = 192
    Top = 264
  end
end
