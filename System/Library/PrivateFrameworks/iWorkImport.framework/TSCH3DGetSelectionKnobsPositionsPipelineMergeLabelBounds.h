/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds : NSObject {

	int mLabelType;
	int mKnobsMode;
	NSMutableArray* mLabelsBounds;

}

@property (nonatomic,readonly) int labelType; 
@property (nonatomic,readonly) int knobsMode; 
+(id)boundsWithLabelType:(int)arg1 knobsMode:(int)arg2 ;
-(void)mergeBoundsIntoProjectedPoints:(id)arg1 ;
-(void)addNewBoundsArray;
-(void)addBounds:(CGRect)arg1 ;
-(int)knobsMode;
-(id)initWithLabelType:(int)arg1 knobsMode:(int)arg2 ;
-(BOOL)p_isHorizontal;
-(CGPoint)p_minPoint:(CGPoint)arg1 otherPoint:(CGPoint)arg2 ;
-(CGPoint)p_maxPoint:(CGPoint)arg1 otherPoint:(CGPoint)arg2 ;
-(BOOL)p_hasExtentPointsForBounds:(id)arg1 returningMinPoint:(CGPoint*)arg2 maxPoint:(CGPoint*)arg3 ;
-(void)dealloc;
-(int)labelType;
@end
