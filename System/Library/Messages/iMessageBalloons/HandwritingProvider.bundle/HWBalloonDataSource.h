/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <IMCore/IMBalloonPluginDataSource.h>

@class HWHandwritingItem, HWAbstractBalloonController;

@interface HWBalloonDataSource : IMBalloonPluginDataSource {

	HWHandwritingItem* _cachedHandwritingItem;
	HWAbstractBalloonController* _balloonController;

}

@property (nonatomic,readonly) HWHandwritingItem * handwritingFromPayload; 
@property (assign,nonatomic,__weak) HWAbstractBalloonController * balloonController;              //@synthesize balloonController=_balloonController - In the implementation block
@property (nonatomic,readonly) BOOL shouldAnimate; 
-(HWHandwritingItem *)handwritingFromPayload;
-(void)initialMessageInfoDidChange;
-(BOOL)canProvideSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)shouldAnimate;
-(unsigned long long)playbackType;
-(id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4 ;
-(void)payloadDidChange;
-(void)stopPlayback;
-(void)playbackWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)thumbnailURLWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(HWAbstractBalloonController *)balloonController;
-(void)setBalloonController:(HWAbstractBalloonController *)arg1 ;
@end
