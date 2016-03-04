/*
 *  ofxArtNetNodeEntry.h
 *  artnetExample
 *
 *  Created by Tobias Ebsen on 9/27/12.
 *  Copyright 2012 Tobias Ebsen. All rights reserved.
 *
 */

#pragma once

#include "ofMain.h"

class ofxArtNetNodeEntry {
public:
	~ofxArtNetNodeEntry();
	
	string	getIp();
	int	getSubnet();
	string	getShortName();
	string	getLongName();
	int	getPortCount();
	int	getPortType(int port);
	string	getPortTypeName(int port);
	bool	isPortInput(int port);
	bool	isPortOutput(int port);
	int	getUniverseInput(int port);
	int	getUniverseOutput(int port);
	string	getMac();
	
private:
	friend class ofxArtNet;

	ofxArtNetNodeEntry(void* node_entry);

	void* node_entry;
};