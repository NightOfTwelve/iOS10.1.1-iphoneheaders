/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTileSource.h>

@interface VKBuildingFootprintTileSource : VKVectorTileSource {

	long long _minimumZoomLevel;
	BOOL _makeFacades;
	BOOL _prepareExtrusion;

}

@property (assign,nonatomic) BOOL makeFacades;              //@synthesize makeFacades=_makeFacades - In the implementation block
-(BOOL)maximumZoomLevelBoundsCamera;
-(long long)minimumZoomLevel;
-(BOOL)minimumZoomLevelBoundsCamera;
-(void)setMakeFacades:(BOOL)arg1 ;
-(void)setMinimumZoomLevel:(unsigned long long)arg1 ;
-(id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 ;
-(unsigned long long)mapLayerForZoomLevelRange;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(BOOL)makeFacades;
@end
