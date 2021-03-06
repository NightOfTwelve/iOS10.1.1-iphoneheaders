/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VKRasterMapTileServerLoadBalancer : NSObject {

	NSArray* _tileServers;
	unsigned _superTileSize;
	NSArray* _snapshotServers;

}
-(void)dealloc;
-(id)description;
-(id)initWithTileServers:(id)arg1 snapshotServers:(id)arg2 ;
-(void)renderSnapshotRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderTileRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

