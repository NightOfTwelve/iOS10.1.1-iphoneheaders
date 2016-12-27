/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableArray, NSArray, UIView;

@interface MKOrientationContext : NSObject {

	NSMutableArray* orientViews;
	NSArray* relativeViews;
	UIView* projectionView;
	CGRect* relativeViewFrames;

}
-(void)dealloc;
-(id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(id)arg3 ;
-(void)_computeRelativeViewFrames;
-(void)_computeRelativeViewFrame:(id)arg1 ;
-(void)invalidateView:(id)arg1 ;
@end
