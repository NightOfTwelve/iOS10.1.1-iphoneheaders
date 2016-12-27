/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSDictionary;

@interface SwipeOptionsController : PSListController {

	NSDictionary* _swipeActionsAndTitles;

}
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)_shouldReverseLayoutDirection;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setLeftSwipeAction:(id)arg1 withSpecifier:(id)arg2 ;
-(id)leftSwipeAction:(id)arg1 ;
-(id)_leftSwipeValues;
-(id)_titlesForSwipeValues:(id)arg1 ;
-(void)setRightSwipeAction:(id)arg1 withSpecifier:(id)arg2 ;
-(id)rightSwipeAction:(id)arg1 ;
-(id)_rightSwipeValues;
-(id)_diagramSpecifierWithSwipeDirection:(unsigned long long)arg1 ;
-(void)_configureSwipeDiagramInCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_baseSwipeValues;
-(id)swipeActionsAndTitles;
-(id)specifiers;
@end
