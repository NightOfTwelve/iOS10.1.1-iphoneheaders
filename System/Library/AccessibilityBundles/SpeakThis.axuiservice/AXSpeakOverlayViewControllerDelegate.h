/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSpeakOverlayViewControllerDelegate <NSObject>
@required
-(void)speedUpButtonPressed;
-(void)slowDownButtonPressed;
-(void)fastForwardButtonPressed;
-(void)stopButtonPressed;
-(void)rewindButtonPressed;
-(BOOL)isSpeaking;
-(void)playButtonPressed;
-(void)pauseButtonPressed;

@end
