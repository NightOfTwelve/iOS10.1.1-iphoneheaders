/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPParagraphStyle;

@interface TSCHLegendCellMetrics : NSObject {

	TSWPParagraphStyle* mParagraphStyle;
	CTFontRef mFont;
	float mBadgeSize;
	float mLegendSymbolGap;
	float mTrueTitleHeight;
	float mLineGap;
	float mBaseline;

}

@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle; 
@property (nonatomic,readonly) CTFontRef font; 
@property (nonatomic,readonly) float badgeSize; 
@property (nonatomic,readonly) float symbolGap; 
@property (nonatomic,readonly) float titleHeight; 
@property (nonatomic,readonly) float lineGap; 
@property (nonatomic,readonly) float baseline; 
-(float)symbolGap;
-(id)initWithParagraphStyle:(id)arg1 ;
-(float)titleHeight;
-(float)lineGap;
-(void)dealloc;
-(CTFontRef)font;
-(float)badgeSize;
-(TSWPParagraphStyle *)paragraphStyle;
-(float)baseline;
@end

