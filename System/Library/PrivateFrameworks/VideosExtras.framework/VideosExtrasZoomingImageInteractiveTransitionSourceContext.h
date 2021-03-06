/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIPinchGestureRecognizer, NSString;

@interface VideosExtrasZoomingImageInteractiveTransitionSourceContext : NSObject {

	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	unsigned long long _itemIndex;
	unsigned long long _supportedZoomingImageTransitionDirections;
	NSString* _identifier;

}

@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                         //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                              //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long supportedZoomingImageTransitionDirections;              //@synthesize supportedZoomingImageTransitionDirections=_supportedZoomingImageTransitionDirections - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(unsigned long long)supportedZoomingImageTransitionDirections;
-(void)setSupportedZoomingImageTransitionDirections:(unsigned long long)arg1 ;
@end

