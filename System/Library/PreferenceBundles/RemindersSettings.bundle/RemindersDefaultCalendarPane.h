/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/RemindersSettings.bundle/RemindersSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersSettings/RemindersSettings-Structs.h>
#import <Preferences/PSEditingPane.h>

@class EKEventStore, EKCalendarChooser;

@interface RemindersDefaultCalendarPane : PSEditingPane {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	BOOL _dontSetDefaultCalendar;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)childViewControllerForHostingViewController;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(id)preferenceValue;
-(BOOL)drawLabel;
-(void)_updateCheckedCalendar;
@end

