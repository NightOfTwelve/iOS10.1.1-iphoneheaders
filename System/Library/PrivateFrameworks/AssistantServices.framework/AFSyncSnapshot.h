/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding> {

	NSString* _anchor;
	NSString* _validity;
	long long _count;
	NSString* _key;

}

@property (nonatomic,copy) NSString * anchor;                //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * validity;              //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) long long count;                //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * key;                   //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(NSString *)key;
-(void)setCount:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)validity;
@end

