/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPCharSequence;

@interface CPZoneMaker : NSObject {

	CPCharSequence* charactersOnPage;

}
-(void)dealloc;
-(void)makeZonesIn:(id)arg1 ;
-(unsigned)categorizeGraphicsIn:(id)arg1 ;
-(void)mergeQualifyingRectanglesIn:(id)arg1 ;
-(void)makeZonesWithBoundaryIn:(id)arg1 ;
-(void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2 ;
-(void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2 ;
-(void)addZonesWithBoundaryIn:(id)arg1 withBorder:(id)arg2 ;
-(id)newZoneForStraddlersFrom:(id)arg1 ;
-(void)addObjectsToStraddler:(id)arg1 from:(id)arg2 ;
-(BOOL)overlap:(id)arg1 with:(id)arg2 ;
@end
