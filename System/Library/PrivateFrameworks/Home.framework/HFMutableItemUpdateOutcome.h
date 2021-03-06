/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemUpdateOutcome.h>

@class NSMutableDictionary, NSDictionary;

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome {

	NSMutableDictionary* _mutableResults;

}

@property (nonatomic,retain) NSMutableDictionary * mutableResults;              //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,retain) NSDictionary * results; 
@property (assign,nonatomic) unsigned long long outcomeType; 
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(id)initWithResults:(id)arg1 type:(unsigned long long)arg2 ;
-(NSMutableDictionary *)mutableResults;
-(void)setMutableResults:(NSMutableDictionary *)arg1 ;
@end

