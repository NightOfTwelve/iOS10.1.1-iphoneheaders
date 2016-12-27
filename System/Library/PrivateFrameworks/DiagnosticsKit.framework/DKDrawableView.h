/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface DKDrawableView : UIView {

	BOOL _shouldDraw;
	UIColor* _rectangleEdgeColor;
	UIColor* _rectangleFillColor;
	CGPoint _originPoint;
	CGRect _rectangle;

}

@property (nonatomic,retain) UIColor * rectangleEdgeColor;              //@synthesize rectangleEdgeColor=_rectangleEdgeColor - In the implementation block
@property (nonatomic,retain) UIColor * rectangleFillColor;              //@synthesize rectangleFillColor=_rectangleFillColor - In the implementation block
@property (assign,nonatomic) CGPoint originPoint;                       //@synthesize originPoint=_originPoint - In the implementation block
@property (assign,nonatomic) CGRect rectangle;                          //@synthesize rectangle=_rectangle - In the implementation block
@property (assign,nonatomic) BOOL shouldDraw;                           //@synthesize shouldDraw=_shouldDraw - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)rectangle;
-(void)setRectangle:(CGRect)arg1 ;
-(BOOL)shouldDraw;
-(UIColor *)rectangleEdgeColor;
-(CGPoint)originPoint;
-(UIColor *)rectangleFillColor;
-(id)initWithFrame:(CGRect)arg1 rectangleFillColor:(id)arg2 rectangleEdgeColor:(id)arg3 ;
-(void)setOriginPoint:(CGPoint)arg1 ;
-(void)setShouldDraw:(BOOL)arg1 ;
-(void)setRectangleEdgeColor:(UIColor *)arg1 ;
-(void)setRectangleFillColor:(UIColor *)arg1 ;
@end
