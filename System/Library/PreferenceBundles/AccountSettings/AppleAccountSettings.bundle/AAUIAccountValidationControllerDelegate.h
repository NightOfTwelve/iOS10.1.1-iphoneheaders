/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUIAccountValidationControllerDelegate <NSObject>
@optional
-(void)accountValidationControllerWillShowViewController:(id)arg1;
-(void)accountValidationControllerWillHideViewController:(id)arg1;

@required
-(void)accountValidationController:(id)arg1 didFinishHSAVerificationWithSuccess:(BOOL)arg2 error:(id)arg3;

@end

