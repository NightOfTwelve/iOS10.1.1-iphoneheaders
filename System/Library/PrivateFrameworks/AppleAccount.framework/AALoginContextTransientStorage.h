/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock;

@interface AALoginContextTransientStorage : NSObject {

	BOOL _hasBeenCleared;
	NSLock* _clearLock;

}
+(id)sharedStorage;
-(id)init;
-(void)clear;
-(void)save:(id)arg1 ;
-(void)_saveNonsensitiveParameters:(id)arg1 ;
-(void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(id)_readNonsensitiveParameters;
-(id)_keychainItemForUsername:(id)arg1 service:(id)arg2 ;
-(void)_deleteKeychainItemForUsername:(id)arg1 service:(id)arg2 ;
-(id)storedContext;
@end

