/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDSwatchRenderingOperation.h>

@class TSDMovieInfo;

@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation {

	TSDMovieInfo* mMovieInfo;
	BOOL mShouldClipVertically;

}

@property (retain) TSDMovieInfo * movieInfo; 
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7 ;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 ;
-(void)dealloc;
-(void)setMovieInfo:(TSDMovieInfo *)arg1 ;
-(TSDMovieInfo *)movieInfo;
@end
