/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject;

@interface TSgPTPPort : NSObject {

	unsigned _service;
	NSObject*<OS_dispatch_queue> _notificationsQueue;
	IONotificationPortRef _notificationPort;
	unsigned _interestNotification;

}

@property (nonatomic,readonly) unsigned service; 
@property (nonatomic,readonly) unsigned long long remoteClockIdentity; 
@property (nonatomic,readonly) unsigned short remotePortNumber; 
@property (getter=isASCapable,nonatomic,readonly) BOOL asCapable; 
@property (nonatomic,readonly) unsigned propagationDelay; 
@property (nonatomic,readonly) unsigned short portNumber; 
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned short)portNumber;
-(unsigned short)remotePortNumber;
-(unsigned)service;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(void)_registryPropertyChanged;
-(void)serviceTerminated;
-(unsigned long long)remoteClockIdentity;
-(BOOL)isASCapable;
-(unsigned)propagationDelay;
@end

