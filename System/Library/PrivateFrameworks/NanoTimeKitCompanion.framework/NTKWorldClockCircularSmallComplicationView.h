/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>
#import <libobjc.A.dylib/NTKWorldClockComplicationDisplay.h>

@class NTKColoringLabel, CLKFont, NSDictionary, NTKDigitalTimeLabel, NSString;

@interface NTKWorldClockCircularSmallComplicationView : NTKCircularComplicationView <NTKWorldClockComplicationDisplay> {

	NTKColoringLabel* _cityLabel;
	CLKFont* _normalLayoutCityFont;
	NSDictionary* _alternateLayoutCityTextAttributes;
	BOOL _alternateLayout;
	NTKDigitalTimeLabel* _timeLabel;

}

@property (nonatomic,readonly) NTKDigitalTimeLabel * timeLabel;                                      //@synthesize timeLabel=_timeLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTimeZone:(id)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(NTKDigitalTimeLabel *)timeLabel;
-(void)setOverrideDate:(id)arg1 ;
-(void)setShortCity:(id)arg1 ;
-(void)_updateLabelsForFontChange;
-(id)_normalLayoutCityFont;
-(double)_alternateLayoutCityFontSize;
@end

