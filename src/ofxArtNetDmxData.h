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
    void setIp(string ip){ipTarget = ip;};
    void setData(vector<unsigned char> _data){this->data = _data;};
    void setPort(int _port){port = _port;};
    void setUniverse(int _universe){universe = _universe;};
    void setSubNet(int _subnet){subnet = _subnet;};
    
    int getSubNet(){return subnet;};
    int getUniverse(){return universe;};
    int getPort(){return port;};
    string getIp(){return ipTarget;};
    vector<unsigned char> getData(){return data;};
    int getLen(){return len;};
    
private:
    string ipTarget;
    int len;
    int port;
    int universe;
    int subnet;
    vector<unsigned char> data;
    
};