/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand {

	BOOL __blinkDetectionEnabled;
	BOOL __smileDetectionEnabled;

}

@property (getter=_isBlinkDetectionEnabled,nonatomic,readonly) BOOL _blinkDetectionEnabled;              //@synthesize _blinkDetectionEnabled=__blinkDetectionEnabled - In the implementation block
@property (getter=_isSmileDetectionEnabled,nonatomic,readonly) BOOL _smileDetectionEnabled;              //@synthesize _smileDetectionEnabled=__smileDetectionEnabled - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithBlinkDetection:(BOOL)arg1 smileDetection:(BOOL)arg2 ;
-(BOOL)_isBlinkDetectionEnabled;
-(BOOL)_isSmileDetectionEnabled;
@end

