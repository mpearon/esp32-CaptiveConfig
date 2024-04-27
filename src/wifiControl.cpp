#include <Arduino.h>
#include <wifiControl.h>
#include <configControl.h>
#include <storageControl.h>
#include <WiFi.h>

void initWifi(){
	WiFi.setHostname( hostname.c_str() );

	if( getStoredValue( "wifi", "ssid" ) != NULL ){
		#define wlanSsid ( getStoredValueString( "wifi", "ssid" ) )
		#define wlanPass ( getStoredValueString( "wifi", "pass" ) )
	}
	else{
		//question Engage AP Mode?
	}

	Serial.print( "Connecting to WiFi" );
	WiFi.begin( wlanSsid, wlanPass );
	while( WiFi.status() != WL_CONNECTED ){
		Serial.print( "." );
		delay(1000);
	}
	Serial.print( "Connected to WiFi: " );
	Serial.println( WiFi.localIP() );
	Serial.println();
}

void connectWifi(){
}