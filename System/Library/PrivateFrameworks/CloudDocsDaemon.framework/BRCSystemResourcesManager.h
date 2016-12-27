/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRReachabilityObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable, BRReachabilityMonitor, NSMutableSet, NSMutableDictionary, NSMapTable, NSString;

@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	BOOL _invalidated;
	NSHashTable* _reachabilityObservers;
	BRReachabilityMonitor* _reachabilityMonitor;
	unsigned _reachabilityFlags;
	BOOL _isNetworkReachable;
	NSObject*<OS_dispatch_source> _isNetworkReachableTimer;
	NSHashTable* _powerObservers;
	int _powerNotifyToken;
	BOOL _powerLevelOK;
	NSObject*<OS_dispatch_source> _powerLevelOKTimer;
	NSMutableSet* _lowDiskSet;
	NSMutableDictionary* _lowDiskDict;
	NSObject*<OS_dispatch_source> _lowDiskSource;
	NSObject*<OS_dispatch_source> _lowDiskTimer;
	NSHashTable* _lowMemoryObservers;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	NSMapTable* _processObservers;
	NSHashTable* _appListObservers;

}

@property (readonly) BOOL isNetworkReachable; 
@property (readonly) unsigned reachabilityFlags; 
@property (readonly) BOOL isPowerOK; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)suspend;
-(void)resume;
-(void)close;
-(BOOL)isNetworkReachable;
-(void)addReachabilityObserver:(id)arg1 ;
-(void)removeReachabilityObserver:(id)arg1 ;
-(BOOL)isPowerOK;
-(BOOL)hasEnoughSpaceForDevice:(int)arg1 ;
-(void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2 ;
-(void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2 ;
-(void)addProcessMonitor:(id)arg1 forProcessID:(int)arg2 ;
-(void)removeProcessMonitor:(id)arg1 ;
-(void)addAppListObserver:(id)arg1 ;
-(void)_initReachability;
-(void)_initPowerManager;
-(void)_initLowDiskManager;
-(void)_initLowMemory;
-(void)_initProcessObservers;
-(void)_initAppListObservers;
-(void)_initXPCFSEvents;
-(void)_invalidateReachability;
-(void)_invalidatePowerManager;
-(void)_invalidateLowDiskManager;
-(void)_invalidateLowMemory;
-(void)_invalidateProcessObservers;
-(void)_invalidateAppListObservers;
-(void)_resetReachability;
-(void)_resetPowerManager;
-(void)_resetLowDiskManager;
-(void)_setNetworkReachableWithCoalescing:(BOOL)arg1 ;
-(void)_setReachabilityFlags:(unsigned)arg1 ;
-(void)_setNetworkReachable:(BOOL)arg1 ;
-(void)_setPowerLevelWithCoalescing:(BOOL)arg1 ;
-(void)_setPowerLevel:(BOOL)arg1 ;
-(void)_processLowDiskNotification:(BOOL)arg1 ;
-(void)_didReceiveMemoryWarning;
-(void)_invalidateProcessMonitorObject:(id)arg1 ;
-(id)_createMonitoringObjectForProcessID:(int)arg1 observer:(id)arg2 ;
-(void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(BOOL)arg2 ;
-(void)reachabilityMonitor:(id)arg1 didChangeReachabilityFlagsTo:(unsigned)arg2 ;
-(unsigned)reachabilityFlags;
-(void)addPowerObserver:(id)arg1 ;
-(void)removePowerObserver:(id)arg1 ;
-(void)addLowMemoryObserver:(id)arg1 ;
-(void)removeLowMemoryObserver:(id)arg1 ;
-(void)removeAppListObserver:(id)arg1 ;
@end
