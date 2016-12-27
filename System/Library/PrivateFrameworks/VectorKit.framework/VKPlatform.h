/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VKPlatform : NSObject {

	unsigned long long _memSize;
	int _numCPUs;
	BOOL _proceduralRoadAlpha;
	BOOL _useCheapTrafficShader;
	BOOL _supportsBuildingStrokes;
	BOOL _supports3DBuildingStrokes;
	BOOL _lowPerformanceDevice;
	BOOL _supportsCoastlineGlows;
	BOOL _supportsPerFragmentLighting;

}

@property (nonatomic,readonly) BOOL roadsWithSimpleLineMeshesAvailable; 
@property (nonatomic,readonly) unsigned long long tileMaximumLimit; 
@property (nonatomic,readonly) unsigned tilePrefetchNumberOfScreens; 
@property (nonatomic,readonly) BOOL supportsHiResRTT; 
@property (nonatomic,readonly) BOOL isPad; 
@property (nonatomic,readonly) BOOL shouldDrawWhenReady; 
@property (nonatomic,readonly) BOOL shouldStyleLabelsInParallel; 
@property (nonatomic,readonly) BOOL shouldLayoutLabelsInParallel; 
@property (nonatomic,readonly) BOOL shouldPregenerateLabelGlyphs; 
@property (nonatomic,readonly) BOOL canMakeSharingThumbnails; 
@property (nonatomic,readonly) double mainScreenScale; 
@property (nonatomic,readonly) double mainScreenPPI; 
@property (nonatomic,readonly) double maxContentScaleForRendering; 
@property (nonatomic,readonly) BOOL supportsBuildingShadows; 
@property (nonatomic,readonly) BOOL supportsBuildingStrokes;                         //@synthesize supportsBuildingStrokes=_supportsBuildingStrokes - In the implementation block
@property (nonatomic,readonly) BOOL supports3DBuildingStrokes;                       //@synthesize supports3DBuildingStrokes=_supports3DBuildingStrokes - In the implementation block
@property (nonatomic,readonly) BOOL supportsHiResBuildings; 
@property (nonatomic,readonly) BOOL supports3DBuildings; 
@property (nonatomic,readonly) BOOL supportsPerFragmentLighting;                     //@synthesize supportsPerFragmentLighting=_supportsPerFragmentLighting - In the implementation block
@property (nonatomic,readonly) BOOL supportsCoastlineGlows;                          //@synthesize supportsCoastlineGlows=_supportsCoastlineGlows - In the implementation block
@property (nonatomic,readonly) BOOL proceduralRoadAlpha;                             //@synthesize proceduralRoadAlpha=_proceduralRoadAlpha - In the implementation block
@property (nonatomic,readonly) BOOL useCheapTrafficShader;                           //@synthesize useCheapTrafficShader=_useCheapTrafficShader - In the implementation block
@property (nonatomic,readonly) unsigned long long memorySize;                        //@synthesize memSize=_memSize - In the implementation block
@property (nonatomic,readonly) unsigned char tileDecodeQueueWidth; 
@property (nonatomic,readonly) BOOL lowPerformanceDevice; 
@property (nonatomic,readonly) double routeLineSimplificationEpsilon; 
+(id)sharedPlatform;
-(id)init;
-(void)dealloc;
-(BOOL)lowPerformanceDevice;
-(double)mainScreenPPI;
-(BOOL)supportsPerFragmentLighting;
-(BOOL)supports3DBuildings;
-(BOOL)supportsBuildingShadows;
-(BOOL)supports3DBuildingStrokes;
-(BOOL)supportsBuildingStrokes;
-(BOOL)shouldLayoutLabelsInParallel;
-(BOOL)shouldPregenerateLabelGlyphs;
-(unsigned char)tileDecodeQueueWidth;
-(BOOL)proceduralRoadAlpha;
-(unsigned long long)_calculateMemSize;
-(void)_determineHardware;
-(BOOL)roadsWithSimpleLineMeshesAvailable;
-(unsigned long long)tileMaximumLimit;
-(unsigned)tilePrefetchNumberOfScreens;
-(BOOL)canMakeSharingThumbnails;
-(BOOL)shouldDrawWhenReady;
-(BOOL)supportsHiResBuildings;
-(BOOL)shouldStyleLabelsInParallel;
-(double)routeLineSimplificationEpsilon;
-(BOOL)useCheapTrafficShader;
-(BOOL)supportsCoastlineGlows;
-(BOOL)supportsHiResRTT;
-(double)maxContentScaleForRendering;
-(double)mainScreenScale;
-(BOOL)isPad;
-(unsigned long long)memorySize;
@end
