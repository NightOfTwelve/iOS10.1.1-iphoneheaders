/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class SBAlertItem, NSString, UIImage;

@interface SBAwaySystemAlertItem : SBAwayListItem {

	SBAlertItem* _currentAlert;
	NSString* _title;
	UIImage* _appImage;
	NSString* _message;
	BOOL _showingButton;
	BOOL _isAlarm;

}
-(void)_setCurrentAlert:(id)arg1 ;
-(id)initWithSystemAlert:(id)arg1 ;
-(BOOL)isAlarm;
-(id)title;
-(id)message;
-(id)iconImage;
-(id)currentAlert;
-(void)buttonPressed;
-(id)sortDate;
@end

