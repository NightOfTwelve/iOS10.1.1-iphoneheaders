/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject {

	opaque_pthread_mutex_t _lock;
	unsigned long long _nextNotificationToken;
	NSMutableDictionary* _observers;

}
-(id)init;
-(void)dealloc;
-(BOOL)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(BOOL)arg2 ;
-(id)registerWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)deregisterHandlerWithToken:(id)arg1 ;
-(BOOL)deregisterHandlerAsyncWithToken:(id)arg1 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 ;
@end

