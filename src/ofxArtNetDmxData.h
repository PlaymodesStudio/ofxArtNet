/*
 *  ofxArtNetDmxData.h
 *  artnetExample
 *
 *  Created by Tobias Ebsen on 9/29/12.
 *  Copyright 2012 Tobias Ebsen. All rights reserved.
 *
 */

#pragma once

#include "ofMain.h"

class ofxArtNetDmxData {
public:
	
	ofxArtNetDmxData(int len = 512);
	ofxArtNetDmxData(vector<unsigned char>, int len);
	~ofxArtNetDmxData();
	
	void allocate(int len);
	void destroy();
    void set(unsigned char val);
    void setIp(const char* ip){ipTarget = ip;};
    void setData(vector<unsigned char> _data){this->data = _data;};
    void setPort(int _port){port = _port;};
    
    int getPort(){return port;};
    const char* getIp(){return ipTarget;};
    vector<unsigned char> getData(){return data;};
    int getLen(){return len;};
    
private:
    const char* ipTarget;
    int len;
    int port;
    vector<unsigned char> data;
    
};