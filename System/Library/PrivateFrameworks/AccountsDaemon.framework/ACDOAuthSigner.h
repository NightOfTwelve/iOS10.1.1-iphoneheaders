/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDOAuthSignerProtocol.h>

@class ACDDatabase, ACDClient, ACDClientAuthorizationManager, NSString;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol> {

	ACDDatabase* _database;
	ACDClient* _client;
	ACDClientAuthorizationManager* _authorizationManager;
	BOOL _shouldIncludeAppIdInRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1 ;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)ckForAccountType:(id)arg1 ;
-(id)csForAccountType:(id)arg1 ;
-(BOOL)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2 ;
-(id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 ;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 ;
-(id)initWithClient:(id)arg1 ;
@end
