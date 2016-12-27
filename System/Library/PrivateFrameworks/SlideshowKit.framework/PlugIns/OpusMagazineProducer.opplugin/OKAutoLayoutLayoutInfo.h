/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMagazineProducer/OpusMagazineProducer-Structs.h>
@class NSMutableArray, NSDictionary, NSString;

@interface OKAutoLayoutLayoutInfo : NSObject {

	BOOL _isTitle;
	BOOL _isSubtitle;
	float _currentScore;
	float _baseScore;
	unsigned long long _numOfMedia;
	NSMutableArray* _areaPercentInAppearOrder;
	NSMutableArray* _aspectRatiosInAppearOrder;
	NSMutableArray* _rectNamesInAppearOrder;
	NSDictionary* _origLayout;
	NSString* _textWidgetName;

}

@property (assign,nonatomic) float currentScore;                                        //@synthesize currentScore=_currentScore - In the implementation block
@property (nonatomic,readonly) float baseScore;                                         //@synthesize baseScore=_baseScore - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfMedia;                           //@synthesize numOfMedia=_numOfMedia - In the implementation block
@property (nonatomic,readonly) NSMutableArray * areaPercentInAppearOrder;               //@synthesize areaPercentInAppearOrder=_areaPercentInAppearOrder - In the implementation block
@property (nonatomic,readonly) NSMutableArray * aspectRatiosInAppearOrder;              //@synthesize aspectRatiosInAppearOrder=_aspectRatiosInAppearOrder - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rectNamesInAppearOrder;                 //@synthesize rectNamesInAppearOrder=_rectNamesInAppearOrder - In the implementation block
@property (nonatomic,readonly) NSDictionary * origLayout;                               //@synthesize origLayout=_origLayout - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL isTitle;                                            //@synthesize isTitle=_isTitle - In the implementation block
@property (nonatomic,readonly) BOOL isSubtitle;                                         //@synthesize isSubtitle=_isSubtitle - In the implementation block
@property (nonatomic,readonly) NSString * textWidgetName;                               //@synthesize textWidgetName=_textWidgetName - In the implementation block
-(BOOL)isTitle;
-(float)currentScore;
-(NSString *)textWidgetName;
-(float)baseScore;
-(unsigned long long)numOfMedia;
-(NSDictionary *)origLayout;
-(NSMutableArray *)rectNamesInAppearOrder;
-(void)_parseLayout;
-(NSMutableArray *)aspectRatiosInAppearOrder;
-(void)setCurrentScore:(float)arg1 ;
-(NSMutableArray *)areaPercentInAppearOrder;
-(CGSize)targetScreenSize;
-(CGRect)rectForRectName:(id)arg1 ;
-(BOOL)isSubtitle;
-(void)dealloc;
-(NSString *)name;
-(id)initWithLayout:(id)arg1 ;
@end
