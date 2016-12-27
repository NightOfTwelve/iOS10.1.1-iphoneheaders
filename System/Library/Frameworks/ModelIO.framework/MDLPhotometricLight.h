/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@class NSMutableData, MDLTexture, NSData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {

	RTIESLight* _iesLight;
	NSMutableData* _sphericalHarmonicsCoefficients;
	MDLTexture* _lightCubeMap;
	unsigned long long _sphericalHarmonicsLevel;

}

@property (nonatomic,retain,readonly) MDLTexture * lightCubeMap;                          //@synthesize lightCubeMap=_lightCubeMap - In the implementation block
@property (nonatomic,readonly) unsigned long long sphericalHarmonicsLevel;                //@synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
-(void)generateCubemapFromLight:(unsigned long long)arg1 ;
-(void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1 ;
-(void)computeLumens;
-(float)computeInnerAngle;
-(void)setSphericalHarmonicsCoefficients:(NSData *)arg1 ;
-(CGColorRef)evaluatedColorFromSHVector:;
-(MDLTexture *)lightCubeMap;
-(id)initWithIESProfile:(id)arg1 ;
-(id)computeSceneKitRenderingTexture:(unsigned long long)arg1 ;
-(unsigned long long)sphericalHarmonicsLevel;
-(NSData *)sphericalHarmonicsCoefficients;
@end
