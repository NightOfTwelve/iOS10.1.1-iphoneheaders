/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLTilesManagerClientInternal;

@interface CLTilesManagerClient : NSObject {

	CLTilesManagerClientInternal* _internal;

}
+(void)initialize;
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(void)onNotificationReceived:(id)arg1 ;
-(void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(BOOL)arg2 ;
-(BOOL)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(BOOL)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(BOOL)registerTo:(id)arg1 onQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)unregisterFrom:(id)arg1 ;
-(void)reconnect;
@end

