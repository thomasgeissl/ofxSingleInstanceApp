#pragma once
#include "ofMain.h"
#include "ofxNetwork.h"

class ofxSingleInstanceApp
{
public:
	ofxSingleInstanceApp(int port = 11111) :
        _port(port)
	{
        lockApp();
	}
    ~ofxSingleInstanceApp()
    {
        unlockApp();
    }
	bool lockApp()
	{
		if(_tcp.setup(_port))
		{	
			return true;
		}
		else
		{
            string errorMessage = "There is already an instance running!";
            ofLogFatalError("ofxSingleInstanceApp")<<errorMessage;
            ofSystemAlertDialog(errorMessage);
            ofExit(-1);
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
