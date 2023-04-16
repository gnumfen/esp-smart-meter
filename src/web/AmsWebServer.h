#ifndef _AMSWEBSERVER_h
#define _AMSWEBSERVER_h

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPUpdateServer.h>

class AmsWebServer
{
public:
	AmsWebServer();
	~AmsWebServer();
	void setup();
	void loop();
	void setDataJson(String str);
private:
	ESP8266WebServer server;
	ESP8266HTTPUpdateServer httpUpdater;
	void indexHtml();
	void stylesCss();
	void readdataJs();
	void dataJson();
	void logTxt();
	String dataJsonStr;
};

#endif
