/*
 *  ofxArtNetDmxData.cpp
 *  artnetExample
 *
 *  Created by Tobias Ebsen on 9/29/12.
 *  Copyright 2012 Tobias Ebsen. All rights reserved.
 *
 */

#include "ofxArtNetDmxData.h"
#include <stdlib.h>

//-----------------------------------------------------
ofxArtNetDmxData::ofxArtNetDmxData(int len) {
	allocate(len);
	port = 0;
    ipTarget = " ";
}
//-----------------------------------------------------
ofxArtNetDmxData::ofxArtNetDmxData(unsigned char* data, int len) {
	this->data = data;
	this->len = len;
	this->port = 0;
    ipTarget = " ";
}
//-----------------------------------------------------
ofxArtNetDmxData::~ofxArtNetDmxData() {
	//destroy();
}
//-----------------------------------------------------
void ofxArtNetDmxData::allocate(int len) {
	this->len = len;
	this->data = (unsigned char*)malloc(len);
}
//-----------------------------------------------------
void ofxArtNetDmxData::destroy() {
	free(this->data);
	this->data = NULL;
	this->len = 0;
}
//-----------------------------------------------------
void ofxArtNetDmxData::set(unsigned char val) {
	memset(data, val, len);
}