/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKPaymentNotificationAppURLHelper : NSObject
+(id)_appURLForNotificationOfType:(id)arg1 paymentPass:(id)arg2 serviceIdentifier:(id)arg3 appLaunchToken:(id)arg4 usingDeviceAccountNumber:(BOOL)arg5 ;
+(BOOL)applicationExistsToHandleNotificationsForPaymentPass:(id)arg1 ;
+(id)appURLForMessageNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3 ;
+(id)appURLForTransactionNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3 ;
@end
