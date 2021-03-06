/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCInteractiveNotificationServiceInterface
@required
-(void)_setContext:(id)arg1;
-(void)_getInitialStateWithCompletion:(/*^block*/id)arg1;
-(void)_setMaximumHeight:(double)arg1;
-(void)_setModal:(BOOL)arg1;
-(void)_interactiveNotificationDidAppear;
-(void)_proximityStateDidChange:(BOOL)arg1;
-(void)_didChangeRevealPercent:(double)arg1;
-(void)_willPresentFromActionIdentifier:(id)arg1;
-(void)_getActionContextWithCompletion:(/*^block*/id)arg1;
-(void)_getActionTitlesWithCompletion:(/*^block*/id)arg1;
-(void)_handleActionAtIndex:(unsigned long long)arg1;
-(void)_handleActionIdentifier:(id)arg1;

@end

