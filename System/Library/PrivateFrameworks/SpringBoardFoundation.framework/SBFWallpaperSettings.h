/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFWallpaperSettings : _UISettings {

	BOOL _replaceBlurs;
	unsigned long long _colorBoxSize;
	long long _blurReplacementMode;
	double _mediumBlurRadius;
	double _mediumGrayscaleTintLevel;
	double _mediumGrayscaleTintAlpha;
	double _mediumSaturationDeltaFactor;

}

@property (assign,nonatomic) unsigned long long colorBoxSize;                 //@synthesize colorBoxSize=_colorBoxSize - In the implementation block
@property (assign,nonatomic) BOOL replaceBlurs;                               //@synthesize replaceBlurs=_replaceBlurs - In the implementation block
@property (assign,nonatomic) long long blurReplacementMode;                   //@synthesize blurReplacementMode=_blurReplacementMode - In the implementation block
@property (assign,nonatomic) double mediumBlurRadius;                         //@synthesize mediumBlurRadius=_mediumBlurRadius - In the implementation block
@property (assign,nonatomic) double mediumGrayscaleTintLevel;                 //@synthesize mediumGrayscaleTintLevel=_mediumGrayscaleTintLevel - In the implementation block
@property (assign,nonatomic) double mediumGrayscaleTintAlpha;                 //@synthesize mediumGrayscaleTintAlpha=_mediumGrayscaleTintAlpha - In the implementation block
@property (assign,nonatomic) double mediumSaturationDeltaFactor;              //@synthesize mediumSaturationDeltaFactor=_mediumSaturationDeltaFactor - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setColorBoxSize:(unsigned long long)arg1 ;
-(void)setMediumBlurRadius:(double)arg1 ;
-(void)setMediumGrayscaleTintLevel:(double)arg1 ;
-(void)setMediumGrayscaleTintAlpha:(double)arg1 ;
-(void)setMediumSaturationDeltaFactor:(double)arg1 ;
-(unsigned long long)colorBoxSize;
-(BOOL)replaceBlurs;
-(void)setReplaceBlurs:(BOOL)arg1 ;
-(long long)blurReplacementMode;
-(void)setBlurReplacementMode:(long long)arg1 ;
-(double)mediumBlurRadius;
-(double)mediumGrayscaleTintLevel;
-(double)mediumGrayscaleTintAlpha;
-(double)mediumSaturationDeltaFactor;
@end

