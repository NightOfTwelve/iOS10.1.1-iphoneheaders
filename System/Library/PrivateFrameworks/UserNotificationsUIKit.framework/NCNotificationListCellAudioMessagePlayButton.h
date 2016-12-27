/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationListCellActionButton.h>
#import <libobjc.A.dylib/NCNotificationViewControllerAudioAccessoryViewObserver.h>

@class UIView, UIActivityIndicatorView, NSString;

@interface NCNotificationListCellAudioMessagePlayButton : NCNotificationListCellActionButton <NCNotificationViewControllerAudioAccessoryViewObserver> {

	UIView* _audioAccessoryView;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UIView * audioAccessoryView;                        //@synthesize audioAccessoryView=_audioAccessoryView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAudioMessagePlayAction:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)_configureSpinnerView;
-(void)_layoutSpinnerView;
-(void)_layoutAudioAccessoryView;
-(void)_setAudioAccessoryView:(id)arg1 ;
-(void)notificationViewController:(id)arg1 loadedAudioAccessoryView:(id)arg2 ;
-(UIView *)audioAccessoryView;
-(void)setAudioAccessoryView:(UIView *)arg1 ;
@end
