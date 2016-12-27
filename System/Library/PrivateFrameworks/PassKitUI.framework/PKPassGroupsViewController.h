/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PKGroupsControllerDelegate.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDatasource.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKCodeAcquisitionDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPassPersonalizationViewControllerDelegate.h>

@class UIImageView, PKPassGroupStackView, PKGroupsController, PKPaymentService, NSTimer, NSMutableArray, NSString;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKPaymentServiceDelegate, PKCodeAcquisitionDelegate, PKPerformActionViewControllerDelegate, PKPassPersonalizationViewControllerDelegate> {

	UIImageView* _statusBarGradient;
	PKPassGroupStackView* _groupStackView;
	PKGroupsController* _groupsController;
	PKPaymentService* _paymentService;
	unsigned long long _modalCardIndex;
	long long _presentationState;
	NSTimer* _allowDimmingTimer;
	NSTimer* _passViewedNotificationTimer;
	NSMutableArray* _blocksQueuedForUpdateCompletion;
	BOOL _persistentCardEmulationQueued;
	BOOL _viewAppeared;
	BOOL _viewAppearedBefore;
	BOOL _passesAreOutdated;
	BOOL _reloadingPasses;
	BOOL _backgroundMode;
	unsigned long long _instanceFooterSuppressionCounter;
	int _expressTransactionNotifyToken;
	BOOL _handleFieldDetection;
	BOOL _welcomeStateEnabled;
	unsigned long long _suppressedContent;

}

@property (nonatomic,retain,readonly) PKPassGroupStackView * groupStackView; 
@property (assign,nonatomic) unsigned long long suppressedContent;                               //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign) BOOL passesAreOutdated;                                                       //@synthesize passesAreOutdated=_passesAreOutdated - In the implementation block
@property (assign) BOOL handleFieldDetection;                                                    //@synthesize handleFieldDetection=_handleFieldDetection - In the implementation block
@property (assign,getter=isWelcomeStateEnabled,nonatomic) BOOL welcomeStateEnabled;              //@synthesize welcomeStateEnabled=_welcomeStateEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginSuppressingFooter;
+(void)endSuppressingFooter;
+(BOOL)isPerformingAction;
+(void)beginTrackingAction;
+(void)endTrackingAction;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)groupAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfGroups;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)codeAcquisitionController:(id)arg1 willAddPass:(id)arg2 ;
-(void)codeAcquisitionController:(id)arg1 didAddPass:(id)arg2 ;
-(void)codeAcquisitionController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)codeAcquisitionControllerDidCancel:(id)arg1 ;
-(void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2 ;
-(PKPassGroupStackView *)groupStackView;
-(unsigned long long)suppressedContent;
-(void)startPaymentPreflight:(id)arg1 ;
-(id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2 ;
-(id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2 ;
-(void)_regionConfigurationDidChangeNotification;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1 ;
-(id)initWithGroupsController:(id)arg1 ;
-(void)_handleStatusBarChange:(id)arg1 ;
-(void)_handleFooterSupressionChange:(id)arg1 ;
-(void)_handleChildViewControllerRequestingServiceMode:(id)arg1 ;
-(void)_registerForExpressFelicaTransitNotifications:(BOOL)arg1 ;
-(void)_updateFooterSuppression;
-(void)_applyPresentationState;
-(void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(unsigned long long)indexOfSeparationGroup;
-(void)reloadPasses;
-(void)allowIdleTimer;
-(id)_passPendingActivationToPresent;
-(void)_clearPassViewedNotificationTimer;
-(void)_startPassViewedNotificationTimer;
-(void)_passViewedNotificationTimerFired;
-(void)_updateStatusBarGradientOpacity:(BOOL)arg1 ;
-(void)updateLockscreenIdleTimer;
-(BOOL)handleFieldDetection;
-(void)presentPassWithFieldProperties:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_dismissPresentedVCsWithRequirements:(unsigned long long)arg1 performAction:(/*^block*/id)arg2 ;
-(void)_presentWithUpdatedPasses:(/*^block*/id)arg1 ;
-(void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)presentOnscreen:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatePassesIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)presentGroupTableAnimated:(BOOL)arg1 ;
-(void)setTableModalPresentationEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_presentAddPassesControllerWithPasses:(id)arg1 ;
-(void)_updateFooterSuppressionWithContext:(id)arg1 ;
-(void)_handleNotifyToken:(int)arg1 ;
-(void)_endSuppressingInstanceFooterWithContext:(id)arg1 ;
-(void)_beginSuppressingInstanceFooter;
-(void)queuePersistentCardEmulation;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(BOOL)groupStackViewShouldShowHeaderViews:(id)arg1 ;
-(BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2 ;
-(void)reloadGroupsForGroupStackView:(id)arg1 ;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg1 ;
-(void)groupStackViewDidEndReordering:(id)arg1 ;
-(BOOL)passesGrowWhenFlipped;
-(BOOL)groupStackViewShouldAllowReordering:(id)arg1 ;
-(void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)groupStackView:(id)arg1 transitioningToState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1 ;
-(void)reloadPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)presentInitialState;
-(void)presentPaymentSetup;
-(void)presentOffscreenAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)presentPileOffscreen;
-(void)presentGroupTable;
-(void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned long long)arg2 ;
-(void)setWelcomeStateEnabled:(BOOL)arg1 ;
-(void)terminateFieldDetect;
-(void)addVASPassWithIdentifier:(id)arg1 ;
-(void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1 ;
-(void)updateRegionSupportIfNecessary;
-(BOOL)passesAreOutdated;
-(void)setPassesAreOutdated:(BOOL)arg1 ;
-(void)setHandleFieldDetection:(BOOL)arg1 ;
-(BOOL)isWelcomeStateEnabled;
@end
