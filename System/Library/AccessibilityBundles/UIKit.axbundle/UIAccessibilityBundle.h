/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibilityLoader.h>

@interface UIAccessibilityBundle : UIAccessibilityLoader {

	BOOL _voiceOverHandwritingEnabled;
	BOOL _registeredForVoiceOverNotifications;

}

@property (assign,getter=isVoiceOverHandwritingEnabled,nonatomic) BOOL voiceOverHandwritingEnabled;                              //@synthesize voiceOverHandwritingEnabled=_voiceOverHandwritingEnabled - In the implementation block
@property (assign,getter=isRegisteredForVoiceOverNotifications,nonatomic) BOOL registeredForVoiceOverNotifications;              //@synthesize registeredForVoiceOverNotifications=_registeredForVoiceOverNotifications - In the implementation block
+(id)wrapDOMRange:(id)arg1 ;
+(void)_handleWebKitInstallation;
+(id)sharedGlueObjectIfAvailable;
+(void)_accessibilityInitializeSubclassRuntimeOverrides;
-(id)init;
-(id)description;
-(id)_currentAccessoryView:(BOOL)arg1 ;
-(void)_unregisterForVoiceOverNotifications:(id)arg1 ;
-(void)_registerForVoiceOverNotifications:(id)arg1 ;
-(void)_handleVoiceOverStatusChanged:(id)arg1 ;
-(BOOL)isVoiceOverHandwritingEnabled;
-(BOOL)isRegisteredForVoiceOverNotifications;
-(void)setRegisteredForVoiceOverNotifications:(BOOL)arg1 ;
-(void)_disableHandwriting;
-(void)setVoiceOverHandwritingEnabled:(BOOL)arg1 ;
-(void)_enableHandwriting;
@end

