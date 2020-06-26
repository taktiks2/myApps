#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowShape(1000, 1000);
	ofSetFrameRate(60);
	ofSetBackgroundColor(255, 255, 255);
	ofSetCircleResolution(64);
	
	rad = 0.0;
}

//--------------------------------------------------------------
void ofApp::update(){
	if (posX <= 1000) {
		posX += 100;
	}
	else {
		if (posY > 1000) {
			posY = 0;
		}
		posX = 0;
		posY += 100;
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(0);
	for (int i = 0; i < 10; i++) {
		int X = 100 * i;
		for (int j = 0; j < 10; j++) {
			int Y = 100 * j;
			ofDrawRectangle(X, Y, 90, 90);
		}
	}

	ofSetColor(100, 0, 0);
	ofDrawCircle(posX, posY, 40);
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