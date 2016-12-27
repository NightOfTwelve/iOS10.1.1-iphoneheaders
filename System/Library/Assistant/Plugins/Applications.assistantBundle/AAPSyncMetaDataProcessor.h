/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSCondition;

@interface AAPSyncMetaDataProcessor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _metaData;
	unsigned long long _lastChangeOffset;
	NSMutableDictionary* _appInfoCache;
	unsigned long long _appInfoCacheStart;
	unsigned long long _appInfoCacheEnd;
	NSCondition* _appInfoCacheCheck;

}
-(void)processNextChange:(id)arg1 afterAnchor:(id)arg2 ;
-(void)_queue_updateCache;
-(void)_queue_processNextChange:(id)arg1 afterAnchor:(id)arg2 withInitialAnchor:(id)arg3 ;
-(void)dealloc;
-(id)initWithSource:(id)arg1 ;
@end
