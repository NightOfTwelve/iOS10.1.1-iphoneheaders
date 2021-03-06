/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHSupportsRendering.h>

@class TSCHChartInfo, NSArray, TSCHChartLayout, NSString;

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering> {

	TSCHChartInfo* mChartInfo;
	NSArray* mRenderers;
	TSCHChartLayout* mChartLayout;

}

@property (nonatomic,retain) TSCHChartInfo * chartInfo; 
@property (nonatomic,retain) TSCHChartLayout * chartLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)viewScale;
-(TSCHChartInfo *)chartInfo;
-(TSCHChartLayout *)chartLayout;
-(BOOL)renderGrid;
-(id)initWithChartInfo:(id)arg1 ;
-(void)setChartInfo:(TSCHChartInfo *)arg1 ;
-(id)renderers;
-(BOOL)forceRenderBlankBackground;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderValueIndexSetForSeries:(unsigned long long)arg1 ;
-(BOOL)renderElements;
-(BOOL)renderLabels;
-(BOOL)requireSeparateLabelLayer;
-(BOOL)isDrawingIntoPDF;
-(BOOL)renderReferenceLines;
-(CGRect)outerShadowFrame;
-(void)clearRenderers;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(BOOL)is2DRepFor3DChartRep;
-(BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1 ;
-(id)commandController;
-(BOOL)shouldShowLegendHighlight;
-(void)setupForDrawingInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(CGRect)convertNaturalRectToLayerRelative:(CGRect)arg1 ;
-(void)setChartLayout:(TSCHChartLayout *)arg1 ;
-(BOOL)shadowsEnabled;
-(void)dealloc;
-(id)geometry;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

