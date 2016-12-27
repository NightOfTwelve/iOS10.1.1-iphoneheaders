/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ViewReuseManagerDelegate;
#import <MobileSafari/MobileSafari-Structs.h>
@class NSMutableArray, NSMutableSet, NSArray;

@interface ViewReuseManager : NSObject {

	NSMutableArray* _trackedViews;
	NSMutableSet* _reusableViews;
	NSMutableSet* _viewsPendingRecycling;
	long long _firstPreviouslyVisibleRepresentedObjectIndex;
	BOOL _alwaysSendPrepareForReuse;
	Class _reusableViewClass;
	id<ViewReuseManagerDelegate> _delegate;

}

@property (nonatomic,readonly) Class reusableViewClass;                                 //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (assign,nonatomic,__weak) id<ViewReuseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL alwaysSendPrepareForReuse;                            //@synthesize alwaysSendPrepareForReuse=_alwaysSendPrepareForReuse - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackedViews;                             //@synthesize trackedViews=_trackedViews - In the implementation block
-(id)initWithReusableViewClass:(Class)arg1 ;
-(void)updateTrackedViewsForRepresentedObjectsInRange:(NSRange)arg1 ;
-(NSArray *)trackedViews;
-(id)makeView;
-(void)recycleView:(id)arg1 ;
-(void)_recycleViewsInCollection:(id)arg1 ;
-(void)_addTrackedViewForRepresentedObjectAtIndex:(unsigned long long)arg1 ;
-(void)_recycleView:(id)arg1 ;
-(void)insertView:(id)arg1 inTrackedViewsAtIndex:(long long)arg2 ;
-(void)removeViewFromTrackedViews:(id)arg1 ;
-(BOOL)alwaysSendPrepareForReuse;
-(void)setAlwaysSendPrepareForReuse:(BOOL)arg1 ;
-(id)init;
-(void)setDelegate:(id<ViewReuseManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<ViewReuseManagerDelegate>)delegate;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(Class)reusableViewClass;
@end
