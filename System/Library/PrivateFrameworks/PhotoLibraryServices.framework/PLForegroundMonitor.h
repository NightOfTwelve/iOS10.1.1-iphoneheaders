/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSMutableSet, NSMapTable;

@interface PLForegroundMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSCountedSet* _interestingApplications;
	NSMutableSet* _foregroundApplications;
	NSMapTable* _observers;
	BOOL _isMonitoringApplicationStates;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addForegroundObserver:(id)arg1 context:(id)arg2 ;
-(void)removeForegroundObserver:(id)arg1 context:(id)arg2 ;
-(void)startWatchingApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_applicationDidMoveToForegroundLocked:(id)arg1 ;
-(void)_startMonitoringApplicationStatesLocked;
-(void)_applicationDidMoveToBackgroundLocked:(id)arg1 ;
-(void)_stopMonitoringApplicationStatesLocked;
-(void)_applicationStateDidChange:(id)arg1 ;
-(void)stopWatchingApplicationWithBundleIdentifier:(id)arg1 ;
@end
