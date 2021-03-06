/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject, NSHashTable;

@interface AFNetworkAvailability : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	AvailabilityState _state;
	NSHashTable* _observers;

}
+(id)sharedAvailability;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_updateState;
-(void)_clearState;
-(void)_availabilityChanged;
-(void)_startObservingAvailability;
-(void)_stopObservingAvailability;
-(BOOL)isAvailable;
-(void)_notifyObservers;
@end

