/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledLayout.h>

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout {

	CGRect mCachedAlignmentFrame;
	struct {
		unsigned alignmentFrame : 1;
	}  mMediaInvalidFlags;
	TSDMutableStroke* mDynamicStroke;
	BOOL mShouldRenderFrameStroke;
	CGRect mBoundsForStandardKnobs;

}
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)boundsForStandardKnobs;
-(CGRect)alignmentFrame;
-(BOOL)isStrokeBeingManipulated;
-(CGRect)alignmentFrameInRoot;
-(BOOL)supportsRotation;
-(BOOL)shouldRenderFrameStroke;
-(void)setShouldRenderFrameStroke:(BOOL)arg1 ;
-(void)setBoundsForStandardKnobs:(CGRect)arg1 ;
-(void)invalidateAlignmentFrame;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(id)stroke;
-(void)setGeometry:(id)arg1 ;
-(id)mediaInfo;
@end

