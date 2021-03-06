/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSecurityService.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface AFSecurityConnection : NSObject <AFSecurityService> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_connection;
-(void)_connectionInterrupted;
-(void)_dispatchCallbackForProcessedData:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_connectionInvalidated;
-(oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidateConnection;
@end

