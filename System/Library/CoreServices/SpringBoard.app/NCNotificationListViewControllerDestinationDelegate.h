/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationListViewControllerDestinationDelegate <NSObject>
@optional
-(CGRect*)notificationListViewController:(id)arg1 convertRect:(CGRect)arg2 toLocalWindowSpaceFromView:(id)arg3;
-(void)notificationListViewController:(id)arg1 willPresentInitialContentWithTransitionCoordinator:(id)arg2;
-(void)notificationListViewController:(id)arg1 willDismissRemainingContentWithTransitionCoordinator:(id)arg2;
-(void)notificationListViewControllerIsUpdatingContent:(id)arg1;
-(void)notificationListViewController:(id)arg1 setRaiseGestureDetectionEnabled:(BOOL)arg2 forNotificationRequest:(id)arg3;
-(void)notificationListViewController:(id)arg1 didEndDisplayingCellForNotificationRequest:(id)arg2;
-(id)notificationListViewController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
-(void)notificationListViewController:(id)arg1 shouldFinishLongLookTransitionForNotification:(id)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(id)notificationListViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 viewController:(id)arg3;
-(BOOL)notificationListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
-(id)customCellBackgroundViewForNotificationListViewController:(id)arg1;
-(BOOL)notificationListViewController:(id)arg1 showSupplementaryActionsForNotificationRequest:(id)arg2;

@required
-(void)notificationListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
-(void)notificationListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(void)notificationListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;

@end
