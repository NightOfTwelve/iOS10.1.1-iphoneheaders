/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVPlayActivityController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, URLBagTimer;

@interface DaemonPlayActivityController : SSVPlayActivityController {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	unsigned long long _currentJingleRevision;
	unsigned long long _currentRevision;
	NSOperationQueue* _flushOperationQueue;
	BOOL _hasValidCurrentJingleRevision;
	BOOL _hasValidCurrentRevision;
	unsigned long long _flushingTransactionCount;
	BOOL _isJingleFlushTimerEnabled;
	BOOL _isStarted;
	URLBagTimer* _jingleFlushTimer;

}
+(void)observeXPCServer:(id)arg1 ;
+(void)acquirePendingPlayActivityEventsForEndpointIdentifierWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)completePendingPlayEventsForSessionTokenWithResultWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)recordPlayActivityEventsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removePlayActivityEventsUpToRevisionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)setRevisionInformationForEndpointIdentifierWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)flushPendingEventsWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)defaultPlayActivityController;
+(void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(/*^block*/id)arg3 ;
-(void)_playActivityControllerEndpointRevisionInformationDidChangeNotification:(id)arg1 ;
-(void)_flushWithTimerReset:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_reloadJingleFlushTimer;
-(void)_setJingleFlushTimerEnabled:(BOOL)arg1 ;
-(id)_jingleFlushTimer;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)start;
@end
