/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount;

@interface SBAccountStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAppleAccount;

}

@property (retain) ACAccount * primaryAppleAccount;                        //@synthesize primaryAppleAccount=_primaryAppleAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(void)_queue_updatePrimaryAppleAccountAndNotify:(BOOL)arg1 ;
-(void)_updatePrimaryAppleAccount;
-(id)init;
-(ACAccountStore *)accountStore;
-(ACAccount *)primaryAppleAccount;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)setPrimaryAppleAccount:(ACAccount *)arg1 ;
@end

