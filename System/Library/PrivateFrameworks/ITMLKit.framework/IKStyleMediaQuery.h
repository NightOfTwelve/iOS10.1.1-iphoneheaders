/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IKStyleMediaQuery : NSObject {

	BOOL _isNegated;
	NSString* _mediaType;
	NSDictionary* _featureValues;

}

@property (nonatomic,readonly) BOOL isNegated;                                   //@synthesize isNegated=_isNegated - In the implementation block
@property (nonatomic,retain,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * featureValues;              //@synthesize featureValues=_featureValues - In the implementation block
+(id)mediaQueryListWithCSSMediaQuery:(id)arg1 ;
-(id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(BOOL)arg3 ;
-(BOOL)isNegated;
-(NSDictionary *)featureValues;
-(NSString *)mediaType;
@end
