# I2C_RS422_RS485_Converter

I2C-RS422/485 Converter with Grove Connector

## 概要 
  * マイコンのI2CポートをRS422/RS485通信ポートに変換するアダプタです  
  * 本アダプタでI2Cから半二重RS422/RS485の送信、受信処理をすることができます  
  * マイコンからI2Cデバイスとして制御し、送受信の他、RS422/RS485のボーレート設定等をすることができます
  * I2C/UARTプロトコルブリッジ[SC16IS750][1]とRS422/RS485変換IC [ST3485EIDT][2]を搭載しています
  * I2CはGrove互換コネクタとなっており、3.3V/５V電源に対応しています
  * RS422/RS485ポートは2.54mmピッチネジ止め端子を搭載しています
  * I2C/UARTプロトコルブリッジSC16IS750は64bytesのバッファを内蔵しています
  * 7.3728MHzの水晶発振子を搭載しており、マイコンのメインクロックから独立してRS422/RS485のボーレート設定ができます  
    
[1]: https://www.nxp.com/products/peripherals-and-logic/signal-chain/bridges/single-uart-with-i2c-bus-spi-interface-64-bytes-of-transmit-and-receive-fifos-irda-sir-built-in-support:SC16IS740_750_760 "*1"
[2]: https://www.st.com/ja/interfaces-and-transceivers/st3485ei.html "*2"
MIT Lisense