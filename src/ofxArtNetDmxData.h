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
	ofxArtNetDmxData(unsigned char* data, int len);
	~ofxArtNetDmxData();
	
	void allocate(int len);
	void destroy();
	void set(unsigned char val);
	
	unsigned char* data;
	int len;
	int port;
};