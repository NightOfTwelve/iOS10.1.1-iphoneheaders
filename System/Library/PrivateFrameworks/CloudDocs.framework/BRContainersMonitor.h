/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BRContainersMonitor : NSObject {

	NSMutableDictionary* _observersByContainerID;
	NSMutableDictionary* _notifyTokenByContainerID;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
+(BOOL)isContainerID:(id)arg1 ;
+(id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
+(BOOL)isContainerIDForeground:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 forContainerID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forContainerID:(id)arg2 ;
@end
