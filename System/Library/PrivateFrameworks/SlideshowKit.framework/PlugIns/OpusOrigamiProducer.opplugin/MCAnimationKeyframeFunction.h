/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationKeyframe.h>

@class NSString, NSDictionary;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {

	float mInnerEaseInControl;
	float mInnerEaseOutControl;
	double mDuration;
	NSString* mFunction;
	NSDictionary* mFunctionParameters;
	double mFunctionTimeOffset;
	double mFunctionTimeFactor;

}

@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * function; 
@property (nonatomic,retain) NSDictionary * functionParameters; 
@property (assign,nonatomic) double functionTimeOffset; 
@property (assign,nonatomic) double functionTimeFactor; 
@property (assign,nonatomic) float innerEaseInControl; 
@property (assign,nonatomic) float innerEaseOutControl; 
+(id)keyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4 ;
-(double)functionTimeOffset;
-(void)setFunctionTimeOffset:(double)arg1 ;
-(void)setFunctionParameters:(NSDictionary *)arg1 ;
-(double)functionTimeFactor;
-(float)innerEaseInControl;
-(NSDictionary *)functionParameters;
-(id)initWithImprint:(id)arg1 ;
-(float)innerEaseOutControl;
-(void)setFunctionTimeFactor:(double)arg1 ;
-(void)setInnerEaseInControl:(float)arg1 ;
-(void)setInnerEaseOutControl:(float)arg1 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(NSString *)function;
-(id)imprint;
@end
