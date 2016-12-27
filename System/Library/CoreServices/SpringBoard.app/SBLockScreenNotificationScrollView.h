/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SBLockScreenNotificationCell, NSString;

@interface SBLockScreenNotificationScrollView : UIScrollView <UIGestureRecognizerDelegate> {

	SBLockScreenNotificationCell* _associatedCell;

}

@property (assign,nonatomic,__weak) SBLockScreenNotificationCell * associatedCell;              //@synthesize associatedCell=_associatedCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)scrollThresholdForPasscodeScroll;
-(SBLockScreenNotificationCell *)associatedCell;
-(void)setAssociatedCell:(SBLockScreenNotificationCell *)arg1 ;
@end
