/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IDSRegistrationProperties : NSObject {

	NSArray* _interesting;
	NSArray* _requireAll;
	NSArray* _lackAll;

}

@property (nonatomic,retain) NSArray * interesting;              //@synthesize interesting=_interesting - In the implementation block
@property (nonatomic,retain) NSArray * requireAll;               //@synthesize requireAll=_requireAll - In the implementation block
@property (nonatomic,retain) NSArray * lackAll;                  //@synthesize lackAll=_lackAll - In the implementation block
-(NSArray *)requireAll;
-(void)setRequireAll:(NSArray *)arg1 ;
-(NSArray *)lackAll;
-(void)setLackAll:(NSArray *)arg1 ;
-(NSArray *)interesting;
-(void)setInteresting:(NSArray *)arg1 ;
@end

