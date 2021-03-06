/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class MailAccount;

@interface AccountPSSyncController : ACUIDataclassConfigurationViewController

@property (nonatomic,readonly) MailAccount * mailAccount; 
-(void)viewDidLoad;
-(BOOL)shouldVerifyBeforeAccountSave;
-(Class)accountInfoControllerClass;
-(id)valueForAccountSummaryCell;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(MailAccount *)mailAccount;
-(id)specifiers;
@end

