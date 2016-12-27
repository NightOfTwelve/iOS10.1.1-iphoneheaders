/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDCategoryAxis : CHDAxis {

	BOOL mAutomatic;
	BOOL mNoMultipleLevelLabel;
	int mLabelAlignment;
	long long mLabelFrequency;
	BOOL mLabelFrequencyAutomatic;
	BOOL mShowSeriesNames;

}
-(BOOL)isAutomatic;
-(id)initWithResources:(id)arg1 ;
-(void)setLabelFrequency:(long long)arg1 ;
-(long long)labelFrequency;
-(void)adjustAxisPositionForHorizontalChart;
-(void)setAutomatic:(BOOL)arg1 ;
-(BOOL)isNoMultipleLabellevel;
-(void)setNoMultipleLevelLabel:(BOOL)arg1 ;
-(int)labelAlignment;
-(void)setLabelAlignment:(int)arg1 ;
-(void)setShowSeriesLabels:(BOOL)arg1 ;
-(BOOL)showSeriesLabels;
-(BOOL)isLabelFrequencyAutomatic;
@end
