/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AXNamedItemsListController.h>
#import <AccessibilitySettings/ASTGestureRecorderMainViewControllerDelegate.h>

@class NSMutableArray, ASTGestureRecorderMainViewController, AXAssertion, NSArray, NSString;

@interface CustomGestureController : AXNamedItemsListController <ASTGestureRecorderMainViewControllerDelegate> {

	NSMutableArray* _hiddenSpecifiers;
	ASTGestureRecorderMainViewController* _gestureRecorderMainViewController;
	id _appDidResignActiveNotificationHandlerToken;
	AXAssertion* _disableSystemGesturesAssertion;

}

@property (nonatomic,retain) id appDidResignActiveNotificationHandlerToken;                   //@synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;                    //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,readonly) NSArray * customGestureSpecifiers; 
@property (nonatomic,readonly) SEL customGesturesGetter; 
@property (nonatomic,readonly) SEL customGesturesSetter; 
@property (nonatomic,readonly) NSString * customGesturesTitle; 
@property (nonatomic,readonly) NSString * customGesturesExplanatoryText; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfCustomGestures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)maximumNumberOfCustomGestures;
-(NSString *)customGesturesExplanatoryText;
-(NSString *)customGesturesTitle;
-(id)setName:(id)arg1 forItem:(id)arg2 ;
-(BOOL)_isGestureNameSpecifier:(id)arg1 ;
-(void)createCustomGesture;
-(id)specifierForKey:(id)arg1 withSpecifiers:(id)arg2 ;
-(NSArray *)customGestureSpecifiers;
-(SEL)customGesturesGetter;
-(SEL)customGesturesSetter;
-(void)handleExternalSettingsChange;
-(void)gestureRecorder:(id)arg1 saveGestureWithPropertyListRepresentation:(id)arg2 ;
-(void)_toggleHiddenSpecifiersAnimated:(BOOL)arg1 ;
-(SEL)settingsGetter;
-(id)appDidResignActiveNotificationHandlerToken;
-(BOOL)_shouldDisableCreateNewGestureButton;
-(id)_customGestures;
-(BOOL)gestureRecorder:(id)arg1 canSaveGestureWithName:(id)arg2 ;
-(void)_disableCreateNewGestureButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAppDidResignActiveNotificationHandlerToken:(id)arg1 ;
-(SEL)settingsSetter;
-(void)dealloc;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(id)nameForItem:(id)arg1 ;
-(id)specifiers;
@end
