/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/KeychainSyncViewController.h>

@protocol KeychainSyncViewControllerDelegate;
@class PSKeychainSyncHeaderView, PSSpecifier;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController> {

	PSKeychainSyncHeaderView* _headerView;
	PSSpecifier* _groupSpecifier;
	id<KeychainSyncViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<KeychainSyncViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<KeychainSyncViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<KeychainSyncViewControllerDelegate>)delegate;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(id)headerView;
-(id)groupSpecifier;
-(id)specifiers;
@end
