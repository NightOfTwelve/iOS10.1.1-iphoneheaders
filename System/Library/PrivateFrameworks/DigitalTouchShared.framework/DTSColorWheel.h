/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <UIKit/UIView.h>

@protocol DTSColorWheelDelegate;
@class UIView, UIButton;

@interface DTSColorWheel : UIView {

	id<DTSColorWheelDelegate> _delegate;
	double _colorWheelRadius;
	double _gradientWidth;
	double _pickerDiameter;
	double _hueRotation;
	double _pickerRotation;
	UIView* _pickerCircle;
	UIButton* _doneButton;

}

@property (assign,nonatomic,__weak) id<DTSColorWheelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double colorWheelRadius;                                //@synthesize colorWheelRadius=_colorWheelRadius - In the implementation block
@property (assign,nonatomic) double gradientWidth;                                   //@synthesize gradientWidth=_gradientWidth - In the implementation block
@property (assign,nonatomic) double pickerDiameter;                                  //@synthesize pickerDiameter=_pickerDiameter - In the implementation block
@property (assign,nonatomic) double hueRotation;                                     //@synthesize hueRotation=_hueRotation - In the implementation block
@property (assign,nonatomic) double pickerRotation;                                  //@synthesize pickerRotation=_pickerRotation - In the implementation block
@property (nonatomic,retain) UIView * pickerCircle;                                  //@synthesize pickerCircle=_pickerCircle - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                  //@synthesize doneButton=_doneButton - In the implementation block
-(void)setDelegate:(id<DTSColorWheelDelegate>)arg1 ;
-(id<DTSColorWheelDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(double)pickerDiameter;
-(void)beganTouches:(id)arg1 ;
-(void)finishedTouches;
-(void)updatePickerPositionForPoint:(CGPoint)arg1 ;
-(UIView *)pickerCircle;
-(double)colorWheelRadius;
-(double)gradientWidth;
-(void)setPickerRotation:(double)arg1 ;
-(id)pickerViewHighlightedColor;
-(void)createDoneButtonWithFrame:(CGRect)arg1 ;
-(void)setColorWheelRadius:(double)arg1 ;
-(void)setGradientWidth:(double)arg1 ;
-(void)setPickerDiameter:(double)arg1 ;
-(double)hueRotation;
-(void)setHueRotation:(double)arg1 ;
-(double)pickerRotation;
-(void)setPickerCircle:(UIView *)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
@end
