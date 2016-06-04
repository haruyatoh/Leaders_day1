#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0,0,0);
    ofSetColor(255,255,255,255);
    ofSetLineWidth(3);
    
//    ofCircle(384,128,128);
//    ofEllipse(128, 384, 280, 768);
//    ofTriangle(384, 512, 384, 768, 512, 768);
//    ofRect(512,256,256,256);
    
    for(int i=1; i<=5; i++){
        ofLine(0,128*i, 1024, 128*i);
    }
    for(int i=1; i<=7; i++){
        ofLine(128*i,0, 128*i,768);
    }
    
//    ofPushMatrix();
//    
//        ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
//        ofRotate(45);
//
//        ofSetColor(255);
//        ofRect(-150,-150,300,300);
//    
//    ofPopMatrix();
//    
//    ofSetColor(0,127,255);
//    ofRect(0,0,500,628);
//    

    ofPushStyle();
    
    ofSetColor(128);
    ofCircle(100,100,50);
    
    ofPopStyle();
    
    ofCircle(300,300,50);

}
    
    

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
