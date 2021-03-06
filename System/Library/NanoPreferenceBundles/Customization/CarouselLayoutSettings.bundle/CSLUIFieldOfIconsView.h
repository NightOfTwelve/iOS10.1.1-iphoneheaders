/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <UIKit/UIView.h>
#import <CarouselLayoutSettings/CSLHexAppGraphDelegate.h>
#import <CarouselLayoutSettings/CSLUIInertialUpdaterDelegate.h>
#import <CarouselLayoutSettings/CSLPressStateApplierDelegate.h>

@protocol CSLUIHexIconViewFactory, CSLUIHexIconView, CSLUIHexIconActionDelegate;
@class UIView, NSMutableDictionary, CSLHexAppGraph, CSLUniformHexLayout, CSLPanGestureRecognizer, CSLUIInertialUpdater, CADisplayLink, CSLUIPointAnimator, CSLIconTapGestureRecognizer, CSLUIIconView, CSLPressStateApplier, UIGestureRecognizer, NSString, CSLHexAppNode, CSLHexLayout;

@interface CSLUIFieldOfIconsView : UIView <CSLHexAppGraphDelegate, CSLUIInertialUpdaterDelegate, CSLPressStateApplierDelegate> {

	unsigned long long _options;
	UIView* _contentView;
	NSMutableDictionary* _iconViewDict;
	CSLHexAppGraph* _iconGraph;
	id<CSLUIHexIconViewFactory> _viewFactory;
	BOOL _recognizersEnabled;
	BOOL _targetHexLocked;
	double _defaultPixelDiameter;
	CSLUniformHexLayout* _contentOffsetLayout;
	CSLPanGestureRecognizer* _panRecognizer;
	CSLUIInertialUpdater* _inertialUpdater;
	CGPoint _contentOffset;
	CGPoint _lastTranslation;
	CADisplayLink* _autoScrollLink;
	BOOL _autoScrolling;
	unsigned long long _autoScrollDirection;
	CSLUIPointAnimator* _contentOffsetAnimator;
	CSLIconTapGestureRecognizer* _tapRecognizer;
	Hex _touchedHex;
	CSLUIIconView* _pressedIcon;
	CSLPressStateApplier* _pressApplier;
	BOOL _isAnimatingIconPress;
	CGPoint _dragStartPoint;
	UIView*<CSLUIHexIconView> _dragView;
	BOOL _didPanDrag;
	UIGestureRecognizer* _pinchRecognizer;
	CADisplayLink* _pptPanDisplayLink;
	double _pptPanStartTime;
	CGPoint _pptPanStartContentOffset;
	long long _pptPanCount;
	double _pptPanDistance;
	NSString* _pptPanTestName;
	CSLHexAppNode* _lastTouchedNode;
	id<CSLUIHexIconActionDelegate> _actionDelegate;
	NSString* _targetBundleIdentifier;
	CSLHexLayout* _layout;

}

@property (nonatomic,retain) CSLHexLayout * layout;                                             //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) double defaultPixelDiameter;                                     //@synthesize defaultPixelDiameter=_defaultPixelDiameter - In the implementation block
@property (nonatomic,readonly) BOOL isEditing; 
@property (nonatomic,readonly) BOOL isDragging; 
@property (nonatomic,readonly) CSLHexAppNode * draggingNode; 
@property (nonatomic,readonly) CSLHexAppNode * lastTouchedNode;                                 //@synthesize lastTouchedNode=_lastTouchedNode - In the implementation block
@property (assign,nonatomic,__weak) id<CSLUIHexIconActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,readonly) Hex targetHex; 
@property (nonatomic,retain) NSString * targetBundleIdentifier;                                 //@synthesize targetBundleIdentifier=_targetBundleIdentifier - In the implementation block
@property (nonatomic,readonly) Hex centeredHex; 
@property (assign,nonatomic) CGPoint contentOffset;                                             //@synthesize contentOffset=_contentOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Hex)closestIconHexToPoint:(CGPoint)arg1 ;
-(BOOL)canAutoScrollInDirection:(unsigned long long)arg1 ;
-(double)defaultPixelDiameter;
-(void)dragToPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)beginDraggingView:(id)arg1 atPoint:(CGPoint)arg2 node:(id)arg3 ;
-(void)loadIconViews;
-(void)updatePPT:(id)arg1 ;
-(Hex)closestIconHexToHex:(Hex)arg1 ;
-(void)checkAutoScroll:(CGPoint)arg1 ;
-(void)_animateToContentOffset:(CGPoint)arg1 ;
-(void)hexAppGraph:(id)arg1 movedNodes:(id)arg2 ;
-(CGPoint)locationForGestureRecognizer:(id)arg1 ;
-(void)_beginPressStateForNode:(id)arg1 ;
-(void)finishAutoscroll;
-(CGPoint)inertialUpdater:(id)arg1 willDecelerateWithTarget:(CGPoint)arg2 ;
-(void)inertialUpdaterFinishedScrolling:(id)arg1 ;
-(void)layoutIconsForcedApply:(BOOL)arg1 forcedSubview:(BOOL)arg2 ;
-(Hex)hexForPoint:(CGPoint)arg1 ;
-(void)attemptBeginDraggingNode:(id)arg1 fromPoint:(CGPoint)arg2 ;
-(void)handleIconTap:(id)arg1 ;
-(void)revealViews:(id)arg1 ;
-(void)_endPressState;
-(id)removedNodes:(id)arg1 ;
-(void)pressStateApplierDidUpdate;
-(SCD_Struct_CS1)originalLayoutAttributesForHex:(Hex)arg1 ;
-(void)handleDraggingPan:(id)arg1 ;
-(Hex)centeredHex;
-(void)addDragDelta:(id)arg1 ;
-(void)autoScroll;
-(void)moveContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffsetToCenterHex:(Hex)arg1 ;
-(void)centerContentView;
-(void)activateAutoScrolling;
-(void)deactivateAutoScrolling;
-(id)iconViewAtHexPoint:(Hex)arg1 ;
-(void)PPTPanAround:(id)arg1 panDistance:(double)arg2 panCount:(long long)arg3 ;
-(CSLHexAppNode *)lastTouchedNode;
-(id)iconViewForBundleIdentifier:(id)arg1 ;
-(void)addIconSubview:(id)arg1 forHex:(Hex)arg2 ;
-(void)setupAutoScrolling;
-(void)setTargetHexToScrolledCenter;
-(id)createIconViewForNode:(id)arg1 ;
-(void)enableGestureRecognizers:(BOOL)arg1 ;
-(void)removeIconSubview:(id)arg1 ;
-(void)enableGestureRecognizers;
-(void)forceIconAttributesAndSubview;
-(void)lockTargetHex;
-(void)unlockTargetHex;
-(/*^block*/id)createApplierToAnimateToContentOffset:(CGPoint)arg1 ;
-(CSLHexAppNode *)draggingNode;
-(void)enumerateIconViewsWithBlock:(/*^block*/id)arg1 ;
-(void)forceIconAttributesAndSubviewForView:(id)arg1 ;
-(id)addedNodes:(id)arg1 ;
-(void)_cancelContentOffsetAnimationIfNecessary;
-(BOOL)isJiggling;
-(void)layoutIconView:(id)arg1 forcedApply:(BOOL)arg2 forcedSubview:(BOOL)arg3 ;
-(void)endDragging;
-(id)initWithFrame:(CGRect)arg1 iconGraph:(id)arg2 viewFactory:(id)arg3 options:(unsigned long long)arg4 ;
-(void)movedNodes:(id)arg1 ;
-(void)hexAppGraph:(id)arg1 addedNodes:(id)arg2 removedNodes:(id)arg3 movedNodes:(id)arg4 ;
-(void)setLayout:(id)arg1 percentComplete:(double)arg2 animated:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(Hex)targetHex;
-(void)inertialUpdater:(id)arg1 scrolledWithDelta:(CGPoint)arg2 ;
-(void)removeViews:(id)arg1 ;
-(void)handleScrollingPan:(id)arg1 ;
-(void)setTargetBundleIdentifier:(NSString *)arg1 ;
-(NSString *)targetBundleIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)isDragging;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)handlePinch:(id)arg1 ;
-(BOOL)isEditing;
-(CSLHexLayout *)layout;
-(void)setLayout:(CSLHexLayout *)arg1 ;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)setActionDelegate:(id<CSLUIHexIconActionDelegate>)arg1 ;
-(id<CSLUIHexIconActionDelegate>)actionDelegate;
-(void)handlePanGesture:(id)arg1 ;
@end

