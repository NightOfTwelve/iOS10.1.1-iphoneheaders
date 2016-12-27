/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBMultiplexingViewController.h>
#import <SpringBoard/SBReachabilityObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SPUISearchViewControllerDelegate.h>
#import <SpringBoard/WGWidgetGroupViewControllerDelegate.h>
#import <SpringBoard/SBSearchEtceteraIsolatedViewControllerAppearanceDelegate.h>

@protocol SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate;
@class UIView, UIGestureRecognizer, FBDisplayLayoutElement, NSString;

@interface SBSearchEtceteraMultiplexingViewController : SBMultiplexingViewController <SBReachabilityObserver, UIGestureRecognizerDelegate, SPUISearchViewControllerDelegate, WGWidgetGroupViewControllerDelegate, SBSearchEtceteraIsolatedViewControllerAppearanceDelegate> {

	BOOL _reachabilityEnabled;
	UIView* _reachabilityContainerView;
	UIGestureRecognizer* _dismissReachabilityGesture;
	unsigned long long _style;
	unsigned long long _supportedModes;
	unsigned long long _currentMode;
	FBDisplayLayoutElement* _displayLayoutElement;
	BOOL _transitioningModes;
	id<SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate> _delegate;
	unsigned long long _searchViewPresentationSourceForNextTransition;
	unsigned long long _searchViewDismissalReasonForNextTransition;

}

@property (assign,getter=isReachabilityEnabled,nonatomic) BOOL reachabilityEnabled; 
@property (assign,nonatomic,__weak) UIView * reachabilityContainerView; 
@property (nonatomic,retain,readonly) UIGestureRecognizer * dismissReachabilityGesture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long style;                                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedModes; 
@property (nonatomic,readonly) unsigned long long currentMode; 
@property (nonatomic,readonly) unsigned long long presentationMode; 
@property (assign,nonatomic,__weak) id<SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long searchViewPresentationSourceForNextTransition;                              //@synthesize searchViewPresentationSourceForNextTransition=_searchViewPresentationSourceForNextTransition - In the implementation block
@property (assign,nonatomic) unsigned long long searchViewDismissalReasonForNextTransition;                                 //@synthesize searchViewDismissalReasonForNextTransition=_searchViewDismissalReasonForNextTransition - In the implementation block
-(BOOL)reachabilitySupported;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)setReachabilityEnabled:(BOOL)arg1 ;
-(BOOL)reachabilityModeActive;
-(id)displayLayoutElementIdentifier;
-(void)_exitSpotlightForReason:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_enterSpotlightAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_forwardableIsolatedController;
-(void)_setCurrentMode:(unsigned long long)arg1 ;
-(BOOL)isShowingSpotlight;
-(BOOL)_shouldRespondToReachability;
-(void)_performReachabilityTransactionForActivate:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(id)customSnapshotView;
-(void)willActivateHosting;
-(void)willDeactivateHosting;
-(void)setReachabilityContainerView:(UIView *)arg1 ;
-(void)setSearchViewDismissalReasonForNextTransition:(unsigned long long)arg1 ;
-(unsigned long long)initialPresentationMode;
-(unsigned long long)defaultSearchViewPresentationSource;
-(unsigned long long)defaultSearchViewDismissalReason;
-(BOOL)displaysWidgets;
-(id)_screenSnapshotViewWithRect:(CGRect)arg1 ;
-(void)willChangeToMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)changeToMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)didChangeToMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setSeparatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setBlurProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_enterSpotlightAnimated:(BOOL)arg1 presentationSource:(unsigned long long)arg2 animationBegan:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setSearchViewPresentationSourceForNextTransition:(unsigned long long)arg1 ;
-(void)_enterSpotlightAnimated:(BOOL)arg1 animationBegan:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_exitSpotlightForReason:(unsigned long long)arg1 animated:(BOOL)arg2 animationBegan:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)requestedWallpaperVariantForWidgetBackgroundViews;
-(void)searchEtceteraIsolatedViewController:(id)arg1 willChangeToMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)searchEtceteraIsolatedViewController:(id)arg1 changingToMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)searchEtceteraIsolatedViewController:(id)arg1 didChangeToMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)searchEtceteraIsolatedViewController:(id)arg1 shouldPresentSearchFromSource:(unsigned long long)arg2 ;
-(BOOL)searchEtceteraIsolatedViewController:(id)arg1 shouldDelaySearchWillDismissWithReason:(unsigned long long)arg2 ;
-(double)_totalDistanceForBlurTransition;
-(void)_enterSpotlightAnimated:(BOOL)arg1 presentationSource:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_exitSpotlightForReason:(unsigned long long)arg1 ;
-(unsigned long long)searchViewPresentationSourceForNextTransition;
-(unsigned long long)searchViewDismissalReasonForNextTransition;
-(void)dismissReachability:(id)arg1 ;
-(id)_effectiveReachabilityContainerView;
-(BOOL)isReachabilityEnabled;
-(void)notifyTextSelectionViewWillTranslateForReachability;
-(void)setTextSelectionReachabilityOffset:(CGPoint)arg1 activating:(BOOL)arg2 ;
-(void)reachabilityWillEnableWithOffset:(CGPoint)arg1 ;
-(void)notifyTextSelectionViewDidTranslateForReachability;
-(void)reachabilityWillDisable;
-(id)_effectiveReachabilityGestureView;
-(void)handleCancelReachabilityGesture;
-(UIView *)reachabilityContainerView;
-(UIGestureRecognizer *)dismissReachabilityGesture;
-(void)cancelReachability;
-(id)init;
-(void)setDelegate:(id<SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate>)arg1 ;
-(id<SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned long long)style;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)currentMode;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(unsigned long long)supportedModes;
-(unsigned long long)presentationMode;
-(void)searchFieldDidFocus;
-(void)dismissSearchViewWithReason:(unsigned long long)arg1 ;
@end
