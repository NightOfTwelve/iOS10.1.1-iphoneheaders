/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIImageView.h>

@class NSString;

@interface AXCaptionSubtitlePreviewView : UIImageView {

	OpaqueFigSubtitleRendererRef _renderer;
	NSString* text;

}

@property (nonatomic,retain) NSString * text; 
-(void)dealloc;
-(void)didMoveToWindow;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)update;
@end

