/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRSlidePositionSupport;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRLayer, MRLayerEffect, NSString;

@interface MRHitBlob : NSObject {

	unsigned char _currentLayoutIndex;
	MRLayer* _outerLayer;
	MRLayerEffect* _effectLayer;
	NSString* _innerPath;
	NSString* _elementID;
	id _clientObject;
	id<MRSlidePositionSupport> _proxyForSlide;

}

@property (retain) MRLayer * outerLayer;                                    //@synthesize outerLayer=_outerLayer - In the implementation block
@property (retain) MRLayerEffect * effectLayer;                             //@synthesize effectLayer=_effectLayer - In the implementation block
@property (copy) NSString * innerPath;                                      //@synthesize innerPath=_innerPath - In the implementation block
@property (copy) NSString * elementID;                                      //@synthesize elementID=_elementID - In the implementation block
@property (retain) id clientObject;                                         //@synthesize clientObject=_clientObject - In the implementation block
@property (readonly) NSString * mediaType; 
@property (readonly) double aspectRatio; 
@property (readonly) CGSize innerResolution; 
@property (assign) id<MRSlidePositionSupport> proxyForSlide;                //@synthesize proxyForSlide=_proxyForSlide - In the implementation block
@property (assign,nonatomic) unsigned char currentLayoutIndex;              //@synthesize currentLayoutIndex=_currentLayoutIndex - In the implementation block
-(MRLayerEffect *)effectLayer;
-(void)setClientObject:(id)arg1 ;
-(id)clientObject;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)setOuterLayer:(MRLayer *)arg1 ;
-(MRLayer *)outerLayer;
-(void)setInnerPath:(NSString *)arg1 ;
-(id<MRSlidePositionSupport>)proxyForSlide;
-(NSString *)innerPath;
-(void)setEffectLayer:(MRLayerEffect *)arg1 ;
-(CGSize)innerResolution;
-(BOOL)isEqualToHitBlob:(id)arg1 ;
-(void)setProxyForSlide:(id<MRSlidePositionSupport>)arg1 ;
-(void)setElementID:(NSString *)arg1 ;
-(NSString *)elementID;
-(NSString *)mediaType;
-(double)aspectRatio;
@end

