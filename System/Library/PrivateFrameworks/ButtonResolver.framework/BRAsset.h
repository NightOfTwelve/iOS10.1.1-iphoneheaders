/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BRAsset : NSObject {

	BOOL _isNull;
	long long _type;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL isNull;                            //@synthesize isNull=_isNull - In the implementation block
@property (nonatomic,readonly) id propertyList; 
+(id)withType:(long long)arg1 andParameters:(id)arg2 ;
+(id)nullAsset;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)type;
-(NSDictionary *)parameters;
-(id)propertyList;
-(BOOL)isNull;
-(id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(BOOL)arg3 ;
@end

