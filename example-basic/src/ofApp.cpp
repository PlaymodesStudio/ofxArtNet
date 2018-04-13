#include "ofApp.h"
#include <random>

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(false);
    ofSetFrameRate(240);
    
    artnet.init("2.0.0.55");
    artnet.setSubNet(0);
    artnet.setNodeType(ARTNET_TYPE_RAW);
    artnet.setPortType(0, ARTNET_PORT_ENABLE_INPUT, ARTNET_DATA_DMX);
    artnet.setPortAddress(0, ARTNET_PORT_INPUT, 0);
    
    artnet.start();
}

//--------------------------------------------------------------
void ofApp::update(){
    unsigned char data[512];
    for(int i = 0; i < 512; i++){
        data[i] = (sin(ofGetElapsedTimef())+1)  * 127;
    }

//    artnet.sendDmx(0, "2.0.0.152", data, 512);
    //artnet.sendDmx_by_SU(0, 0, 0, "2.0.0.48", data, 512);
    artnet.sendDmxRaw(0, data, 512);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBitmapString(ofGetFrameRate(), 20, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
