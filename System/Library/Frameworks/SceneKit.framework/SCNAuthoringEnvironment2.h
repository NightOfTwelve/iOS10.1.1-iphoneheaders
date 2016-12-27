/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSMutableSet, SCNNode, SCNRenderer, SCNGeometry, UIColor;

@interface SCNAuthoringEnvironment2 : NSObject {

	NSMutableSet* _selection;
	C3DSceneRef _scene;
	SCNNode* _layerRoot;
	SCNNode* _lightRoot;
	SCNNode* _cameraRoot;
	SCNNode* _particlesRoot;
	SCNNode* _jointsRoot;
	CFDictionaryRef _lightsDictionary;
	CFDictionaryRef _camerasDictionary;
	CFDictionaryRef _particlesDictionary;
	CFDictionaryRef _jointsDictionary;
	SCNRenderer* _renderer;
	SCNGeometry* _lightGeometry;
	SCNGeometry* _cameraFrustumGeometry;
	SCNGeometry* _cameraGeometry;
	SCNGeometry* _cameraNearPlaneGeometry;
	SCNGeometry* _particlesGeometry;
	SCNGeometry* _jointGeometry;
	long long _displayMask;
	UIColor* _paleGreen;
	UIColor* _paleBlue;
	UIColor* _red;
	UIColor* _green;
	UIColor* _blue;
	UIColor* _cyan;
	UIColor* _yellow;
	UIColor* _orange;
	UIColor* _pink;
	UIColor* _grayLight;
	UIColor* _grayMedium;
	UIColor* _grayDark;
	UIColor* _white;

}

@property (assign) long long displayMask; 
+(id)authoringEnvironmentForScene:(id)arg1 ;
-(void)dealloc;
-(void)selectNode:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)prepareScene:(id)arg1 ;
-(void)addedNode:(id)arg1 ;
-(void)setDisplayMask:(long long)arg1 ;
-(id)lightGeometry;
-(id)particlesGeometry;
-(id)jointGeometry;
-(id)cameraGeometry;
-(id)cameraFrustumGeometry;
-(id)cameraNearPlaneGeometry;
-(void)addLightNode:(id)arg1 ;
-(void)addParticlesNode:(id)arg1 ;
-(void)addCameraNode:(id)arg1 ;
-(void)addJointNode:(id)arg1 ;
-(void)removeLightNode:(id)arg1 ;
-(void)removeParticlesNode:(id)arg1 ;
-(void)removeCameraNode:(id)arg1 ;
-(void)removeJointNode:(id)arg1 ;
-(void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 andRatio:(float)arg4 ;
-(void)removedNode:(id)arg1 ;
-(void)addNodeToSelection:(id)arg1 ;
-(void)selectNodes:(id)arg1 ;
-(void)cancelSelection;
-(void)updateLightNode:(id)arg1 withSourceNode:(id)arg2 ;
-(void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2 ;
-(void)updateJointNode:(id)arg1 withSourceNode:(id)arg2 ;
-(void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2 ;
-(void)updateWithRenderer:(id)arg1 ;
-(long long)displayMask;
-(BOOL)didTapAtPoint:(CGPoint)arg1 ;
@end
