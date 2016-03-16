/*
 *  LocalAddressGrabber.h
 *  converted from http://lists.apple.com/archives/darwin-dev/2004/Nov/msg00137.html
 *
 *  Created by jason van cleave on 11/29/11.
 *  Copyright 2011 jasonvancleave.com. All rights reserved.
 *
 */

#include "ofMain.h"


class LocalAddressGrabber
{
public:
    
    static vector<string> availableList(void){
        
        char buf[64];
        
        vector<string> interfaces;
        interfaces.push_back("en0");
        interfaces.push_back("en1");
        return interfaces;
        
    }
    
    static string getIpAddress(const string& interface)
    {
        return "192.168.1.112";
    }
};