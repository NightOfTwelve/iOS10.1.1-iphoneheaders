/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ProactiveExperts/ProactiveExperts-Structs.h>
@class NSArray, NSMutableIndexSet, NSObject, PEXEventCacheEvictionManager;

@interface PEXEventCache : NSObject {

	/*^block*/id _backfiller;
	NSArray* _cachedEvents;
	NSMutableIndexSet* _cachedRanges;
	unsigned long long _extraSecondsToBackfill;
	NSObject*<OS_dispatch_queue> _metricsQueue;
	PEXEventCacheEvictionManager* _evictionManager;

}

@property (assign,nonatomic) unsigned long long extraSecondsToBackfill;              //@synthesize extraSecondsToBackfill=_extraSecondsToBackfill - In the implementation block
-(void)dealloc;
-(void)removeAllObjects;
-(id)initWithBackfiller:(/*^block*/id)arg1 ;
-(id)objectForRange:(NSRange)arg1 ;
-(id)initWithBackfiller:(/*^block*/id)arg1 evictionManager:(id)arg2 ;
-(void)evictAllExceptRange:(NSRange)arg1 ;
-(unsigned long long)extraSecondsToBackfill;
-(void)setExtraSecondsToBackfill:(unsigned long long)arg1 ;
@end
