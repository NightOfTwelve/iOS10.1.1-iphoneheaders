/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUInstructionsTableViewController.h>
#import <libobjc.A.dylib/HOOnboardingChildViewControllerDelegate.h>
#import <libobjc.A.dylib/HOOnboardingChildViewControllerNavigationBarDelegate.h>
#import <libobjc.A.dylib/HOOnboardingChildViewController.h>

@protocol HOOnboardingChildViewControllerDelegate, HOOnboardingChildViewControllerNavigationBarDelegate, HOOnboardingChildViewController;
@class UICollectionViewController, UIBarButtonItem, NSString;

@interface HUOnboardingInstructionsTableViewController : HUInstructionsTableViewController <HOOnboardingChildViewControllerDelegate, HOOnboardingChildViewControllerNavigationBarDelegate, HOOnboardingChildViewController> {

	id<HOOnboardingChildViewControllerDelegate> delegate;
	id<HOOnboardingChildViewControllerNavigationBarDelegate> navigationBarDelegate;
	UICollectionViewController*<HOOnboardingChildViewController> _onboardingViewController;
	UIBarButtonItem* _doneButtonBarItem;

}

@property (nonatomic,retain) UICollectionViewController*<HOOnboardingChildViewController> onboardingViewController;              //@synthesize onboardingViewController=_onboardingViewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonBarItem;                                                                //@synthesize doneButtonBarItem=_doneButtonBarItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HOOnboardingChildViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<HOOnboardingChildViewControllerNavigationBarDelegate> navigationBarDelegate; 
+(BOOL)adoptsDefaultGridLayoutMargins;
-(void)setDelegate:(id<HOOnboardingChildViewControllerDelegate>)arg1 ;
-(id<HOOnboardingChildViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithDelegate:(id)arg1 ;
-(void)_next:(id)arg1 ;
-(id)initWithInstructionText:(id)arg1 title:(id)arg2 contentViewControllerClass:(Class)arg3 onboardingDelegate:(id)arg4 ;
-(void)nextButtonPressed;
-(id<HOOnboardingChildViewControllerNavigationBarDelegate>)navigationBarDelegate;
-(void)setNavigationBarDelegate:(id<HOOnboardingChildViewControllerNavigationBarDelegate>)arg1 ;
-(UICollectionViewController*<HOOnboardingChildViewController>)onboardingViewController;
-(UIBarButtonItem *)doneButtonBarItem;
-(void)setDoneButtonBarItem:(UIBarButtonItem *)arg1 ;
-(void)childViewControllerDidFinish:(id)arg1 ;
-(void)_setNavigationBarVisibility;
-(void)setShouldShowRightNavigationBarActivitySpinner:(BOOL)arg1 ;
-(void)setOnboardingViewController:(UICollectionViewController*<HOOnboardingChildViewController>)arg1 ;
@end
