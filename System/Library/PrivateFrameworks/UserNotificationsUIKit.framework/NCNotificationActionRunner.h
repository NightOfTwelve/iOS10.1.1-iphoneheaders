/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationActionRunner <NSObject>
@property (assign,nonatomic) BOOL shouldForwardAction; 
@required
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1;

@end
