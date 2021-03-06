/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class NSArray, OADRelativeRect, OADShade;

@interface OADGradientFill : OADFill {

	NSArray* mStops;
	OADRelativeRect* mTileRect;
	int mFlipMode;
	BOOL mIsFlipModeOverridden;
	BOOL mRotateWithShape;
	BOOL mIsRotateWithShapeOverridden;
	OADShade* mShade;

}
+(id)defaultProperties;
+(id)stringForTileFlipMode:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stops;
-(void)setStops:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)shade;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setFlipMode:(int)arg1 ;
-(void)setTileRect:(id)arg1 ;
-(void)setShade:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)usesPlaceholderColor;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(BOOL)areStopsOverridden;
-(BOOL)isTileRectOverridden;
-(BOOL)isFlipModeOverridden;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)isShadeOverridden;
-(id)tileRect;
-(int)flipMode;
-(BOOL)rotateWithShape;
-(void)sortStops;
-(id)firstStop;
-(id)lastStop;
-(void)removeUnnecessaryOverrides;
@end

