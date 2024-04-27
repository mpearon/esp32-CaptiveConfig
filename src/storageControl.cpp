#include <Preferences.h>
#include <storageControl.h>

Preferences storage;

void setStoredValue( const char* realm, const char* name, int value ){
	storage.begin( realm, false );
	storage.putUInt( name, value );
	storage.end();
}
void setStoredValueString( const char* realm, const char* name, const char* value ){
	storage.begin( realm, false );
	storage.putString( name, value );
	storage.end();
}
int getStoredValue( const char* realm, const char* name ){
	storage.begin( realm, false );
	int returnValue = (storage.getUInt( name, 0 ));
	storage.end();
	return returnValue;
}
String getStoredValueString( const char* realm, const char* name ){
	storage.begin( realm, false );
	String returnValue = (storage.getString( name ));
	storage.end();
	return returnValue;
}