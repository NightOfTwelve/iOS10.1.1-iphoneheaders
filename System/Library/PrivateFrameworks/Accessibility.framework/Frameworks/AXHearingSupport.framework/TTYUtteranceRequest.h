/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface TTYUtteranceRequest : NSObject {

	unsigned long long _index;
	NSString* _string;
	NSIndexPath* _cellIndexPath;

}

@property (assign,nonatomic) unsigned long long index;                        //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * string;                               //@synthesize string=_string - In the implementation block
@property (assign,nonatomic,__weak) NSIndexPath * cellIndexPath;              //@synthesize cellIndexPath=_cellIndexPath - In the implementation block
+(id)utteranceRequestWithIndex:(unsigned long long)arg1 forString:(id)arg2 inCellPath:(id)arg3 ;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setCellIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)cellIndexPath;
@end
