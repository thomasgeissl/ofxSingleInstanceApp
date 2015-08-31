#pragma once
#include "ofMain.h"
#include "ofxNetwork.h"

class ofxSingleInstanceApp
{
public:
	ofxSingleInstanceApp(int port = 11111)
	{
	}
	bool lockApp()
	{
		if(_tcp.setup(_port))
		{	
			return true;
		}
		else
		{
			return false;
		}
	}
	bool unlockApp()
	{
		return _tcp.close();
	}

	ofxSingleInstanceApp* setPort(int port)
	{
		_port = port;
		return this;
	}
private:
	ofxTCPServer _tcp;
	int _port;
};
