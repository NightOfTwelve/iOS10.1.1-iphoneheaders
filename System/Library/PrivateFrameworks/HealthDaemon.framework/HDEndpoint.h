/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDEndpointInterface.h>

@protocol OS_dispatch_queue;
@class HDClient, HDDaemon, NSObject, HDServer, NSString;

@interface HDEndpoint : NSObject <HDEndpointInterface> {

	HDClient* _client;
	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;
	HDServer* _server;

}

@property (nonatomic,readonly) HDClient * client;                               //@synthesize client=_client - In the implementation block
@property (nonatomic,__weak,readonly) HDDaemon * daemon;                        //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HDServer * server;                               //@synthesize server=_server - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2 ;
+(BOOL)_isDeviceSupportedWithBehavior:(id)arg1 error:(id*)arg2 ;
+(BOOL)_isClientEntitled:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(HDServer *)server;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDClient *)client;
-(HDDaemon *)daemon;
-(id)initWithClient:(id)arg1 healthDaemon:(id)arg2 ;
-(void)remote_serverForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

