/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDAnimationSession <NSObject>
@property (assign,nonatomic) BOOL shouldDrawTexturesAsynchronously; 
@property (assign,nonatomic) BOOL shouldUseSourceImage; 
@required
-(BOOL)shouldUseSourceImage;
-(double)showScale;
-(BOOL)isOffscreenPlayback;
-(BOOL)shouldDrawTexturesAsynchronously;
-(void)setShouldDrawTexturesAsynchronously:(BOOL)arg1;
-(void)setShouldUseSourceImage:(BOOL)arg1;

@end
