/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface AlternativeInfo : NSObject {

	NSNumber* _combinedRank;
	NSNumber* _combinedScore;
	NSNumber* _isFromDevice;
	NSNumber* _originalRank;
	NSNumber* _originalScore;

}

@property (nonatomic,copy) NSNumber * combinedRank;               //@synthesize combinedRank=_combinedRank - In the implementation block
@property (nonatomic,copy) NSNumber * combinedScore;              //@synthesize combinedScore=_combinedScore - In the implementation block
@property (nonatomic,copy) NSNumber * isFromDevice;               //@synthesize isFromDevice=_isFromDevice - In the implementation block
@property (nonatomic,copy) NSNumber * originalRank;               //@synthesize originalRank=_originalRank - In the implementation block
@property (nonatomic,copy) NSNumber * originalScore;              //@synthesize originalScore=_originalScore - In the implementation block
-(NSNumber *)isFromDevice;
-(void)setIsFromDevice:(NSNumber *)arg1 ;
-(NSNumber *)combinedRank;
-(void)setCombinedRank:(NSNumber *)arg1 ;
-(NSNumber *)combinedScore;
-(void)setCombinedScore:(NSNumber *)arg1 ;
-(NSNumber *)originalRank;
-(void)setOriginalRank:(NSNumber *)arg1 ;
-(NSNumber *)originalScore;
-(void)setOriginalScore:(NSNumber *)arg1 ;
@end
