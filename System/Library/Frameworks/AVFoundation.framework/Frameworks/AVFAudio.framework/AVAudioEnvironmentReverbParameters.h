/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) BOOL enable; 
@property (assign,nonatomic) float level; 
@property (nonatomic,readonly) AVAudioUnitEQFilterParameters * filterParameters; 
-(id)init;
-(void)dealloc;
-(void)setLevel:(float)arg1 ;
-(float)level;
-(BOOL)enable;
-(void)setEnable:(BOOL)arg1 ;
-(AVAudioUnitEQFilterParameters *)filterParameters;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(void)loadFactoryReverbPreset:(long long)arg1 ;
@end

