ofxSingleInstanceApp
===

Description
---
ofxSingleInstanceApp is an addon for openframeworks <https://github.com/openframeworks/openframeworks>.
It makes an ofApp only allow one instance.

Installation
---
```sh
git clone https://github.com/thomasgeissl/ofxSingleInstanceApp.git /path/to/your/openframeworks/addons/ofxSingleInstanceApp
```

Known issues
---
* There is a bug in openframeworks' ofxNetwork addon, which makes an ofxSingleInstanceApp hang at destruction/exit. 
* The addon config file is still missing.
