#include "testApp.h"

testApp::~testApp()
{
    for (int i = 0; i < boids.size(); i++)
    {
        delete boids[i];
    }
    for (int i = 0; i < boids2.size(); i++)
    {
        delete boids2[i];
    }
    for (int i = 0; i < boids3.size(); i++)
    {
        delete boids3[i];
    }
}

//--------------------------------------------------------------
void testApp::setup(){
    
    
    int screenW = ofGetScreenWidth();
    int screenH = ofGetScreenHeight();

    ofBackground(0,0,0);
    
    // set up the boids
    for (int i = 0; i < 30; i++)
        boids.push_back(new Boid());
    
    for(int i=0; i<30; i++)
        boids2.push_back(new Boid());
    
    for(int i=0; i<30; i++)
        boids3.push_back(new Boid());
        
}


//--------------------------------------------------------------
void testApp::update(){
    
    ofVec3f min( 200, 100);
    ofVec3f max(ofGetWidth(), ofGetHeight());
    for (int i = 0; i < boids.size(); i++)
    {
        boids[i]->update(boids, min, max);
    }
    
    
    for(int i = 0; i<boids2.size(); i++)
    {
        boids2[i]->update(boids2, min, max);
    }
    
    for(int i = 0; i<boids3.size(); i++)
    {
        boids3[i]->update(boids3, min, max);
    }

}

//--------------------------------------------------------------
void testApp::draw(){

    for (int i = 0; i < boids.size(); i++)
    {
        boids[i]->draw();
    }
    
    for(int i = 0; i< boids2.size(); i++)
    {
        boids2[i]->draw2();
    }
    
    for(int i = 0; i< boids3.size(); i++)
    {
        boids3[i]->draw3();
    }

}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
 
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

