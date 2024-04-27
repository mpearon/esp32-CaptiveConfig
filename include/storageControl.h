#ifndef STORAGECONTROL.H
#define STORAGECONTROL.H

void setStoredValue( const char* realm, const char* name, int value );
void setStoredValueString( const char* realm, const char* name, const char* value );
int getStoredValue( const char* realm, const char* name );
String getStoredValueString( const char* realm, const char* name );

#endif