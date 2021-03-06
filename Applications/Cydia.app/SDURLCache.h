/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLCache.h>

@class NSString, NSMutableDictionary, NSOperationQueue, NSTimer, NSOperation;

@interface SDURLCache : NSURLCache {

	NSString* diskCachePath;
	NSMutableDictionary* diskCacheInfo;
	char diskCacheInfoDirty;
	char ignoreMemoryOnlyStoragePolicy;
	char breakURLCacheCompatibility;
	unsigned diskCacheUsage;
	double minCacheInterval;
	NSOperationQueue* ioQueue;
	NSTimer* periodicMaintenanceTimer;
	NSOperation* periodicMaintenanceOperation;

}

@property (assign,nonatomic) double minCacheInterval; 
@property (assign,nonatomic) char ignoreMemoryOnlyStoragePolicy; 
@property (assign,nonatomic) char breakURLCacheCompatibility; 
@property (nonatomic,retain) NSString * diskCachePath; 
@property (nonatomic,readonly) NSMutableDictionary * diskCacheInfo; 
@property (nonatomic,retain) NSOperationQueue * ioQueue; 
@property (retain) NSOperation * periodicMaintenanceOperation; 
+(id)dateFromHttpDateString:(id)arg1 ;
+(id)cacheKeyForURL:(id)arg1 ;
+(id)expirationDateFromHeaders:(id)arg1 withStatusCode:(int)arg2 ;
+(id)defaultCachePath;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)periodicMaintenance;
-(void)createDiskCachePath;
-(NSMutableDictionary *)diskCacheInfo;
-(void)removeCachedResponseForCachedKeys:(id)arg1 ;
-(void)saveCacheInfo;
-(void)setPeriodicMaintenanceOperation:(NSOperation *)arg1 ;
-(void)balanceDiskUsage;
-(void)setMinCacheInterval:(double)arg1 ;
-(void)setIgnoreMemoryOnlyStoragePolicy:(char)arg1 ;
-(void)setBreakURLCacheCompatibility:(char)arg1 ;
-(void)logEvent:(id)arg1 forRequest:(id)arg2 ;
-(void)storeToDisk:(id)arg1 ;
-(NSString *)diskCachePath;
-(char)isCached:(id)arg1 ;
-(double)minCacheInterval;
-(NSOperation *)periodicMaintenanceOperation;
-(char)ignoreMemoryOnlyStoragePolicy;
-(char)breakURLCacheCompatibility;
-(void)dealloc;
-(void)setDiskCachePath:(NSString *)arg1 ;
-(id)initWithMemoryCapacity:(unsigned)arg1 diskCapacity:(unsigned)arg2 diskPath:(id)arg3 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(void)removeAllCachedResponses;
-(NSOperationQueue *)ioQueue;
-(void)setIoQueue:(NSOperationQueue *)arg1 ;
-(unsigned)currentDiskUsage;
@end

